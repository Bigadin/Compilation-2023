%{
    #include <stdio.h> 
    #include "../inc/parser.h"
    #include "../inc/sym_table.h" 
    #include <string.h>
    #include <stdlib.h>
    #include <stdbool.h>
    extern int line_num;
    extern char* Curr_Type;
    extern bool Curr_Const;
    extern char* Curr_Scope;
    extern char* Curr_Assign; 
    extern char* Curr_Assign_Type; 
    bool check_type;
    /* int temp_val; */
    void yyerror();
    int yylex();
%}

%define parse.error verbose

%union {
    int u_val_int;
    float u_val_float;
    float u_val_bool;
    char* u_idf;
    char u_op;
}

%token <u_val_int>INT_VAL
%token <u_val_int>NEG_INT_VAL
%token <u_val_float>FLOAT_VAL
%token <u_val_float>NEG_FLOAT_VAL
%token <u_val_bool>BOOL_VAL
%token <u_idf>IDENTIFIER

%token <u_op>ADD
%token <u_op>DIV
%token <u_op>MULT
%token <u_op>SUB

%token LANG VAR INT FLOAT CONST BOOL START END IF WHILE RET FUNC ASSIGN
%token EQUAL GREATER GREATER_EQ LESS LESS_EQ
%token INSTR_END SEP TYPE_SEP
%token LEFT_PAR RIGHT_PAR


%start S



%%
S: LANG IDENTIFIER functions_opt {Curr_Scope = "main";} VAR variables_opt START  instructions_opt END {printf("Syntax correcte\n");YYACCEPT;}
/*
{Curr_Scope = "main"; 
puts("change current scope to main") ;
Fill_Sym_List();
check_if_double_declared();
printf("yay\n");
 YYACCEPT;
};  
*/

variables_opt: %empty 
             | list_var 
             | list_const;

            /* handling variables */
            
list_var: var_names 
        | var_names list_var 
        | var_names list_const;

var_names: IDENTIFIER  var_type  { Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);}
         | IDENTIFIER SEP var_names { Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);};

var_type: TYPE_SEP INT INSTR_END {Curr_Type = "int"; Curr_Const = false;}
        | TYPE_SEP FLOAT INSTR_END {Curr_Type = "float"; Curr_Const = false;}
        | TYPE_SEP BOOL INSTR_END {Curr_Type = "bool"; Curr_Const = false;};




            /* handling constants */
list_const:  const_names 
          | const_names list_const 
          | const_names list_var;

const_names: IDENTIFIER  ASSIGN INT_VAL const_type             {if(Curr_Type == "int")   Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN NEG_INT_VAL const_type         {if(Curr_Type == "int")   Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN INT_VAL SEP const_names        {if(Curr_Type == "int")   Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN NEG_INT_VAL SEP const_names    {if(Curr_Type == "int")   Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN FLOAT_VAL const_type           {if(Curr_Type == "float") Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN NEG_FLOAT_VAL const_type       {if(Curr_Type == "float") Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN FLOAT_VAL SEP const_names      {if(Curr_Type == "float") Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN NEG_FLOAT_VAL SEP const_names  {if(Curr_Type == "float") Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN BOOL_VAL const_type            {if(Curr_Type == "bool")  Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}}
           | IDENTIFIER  ASSIGN BOOL_VAL SEP const_names       {if(Curr_Type == "bool")  Sym_List_Add($1, "idf", Curr_Type, Curr_Const, Curr_Scope, line_num);else{printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", Curr_Type, $3, line_num);}};

const_type: TYPE_SEP CONST INT INSTR_END {Curr_Type = "int"; Curr_Const = true;}
          | TYPE_SEP CONST FLOAT INSTR_END {Curr_Type = "float"; Curr_Const = true;}
          | TYPE_SEP CONST BOOL INSTR_END {Curr_Type = "bool"; Curr_Const = true;};

            /* utility */
math: singletons 
    | neg_singletons
    | idf
    | BOOL_VAL;

singletons: INT_VAL                         {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}

          | INT_VAL ADD singletons          {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}

          | INT_VAL ADD idf                 {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
          | INT_VAL MULT math               {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
          | INT_VAL DIV math                {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }printf("%d\n", $1);}


          | FLOAT_VAL                 {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                            printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                        }}
          | FLOAT_VAL ADD singletons  {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                            printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                        }} 
          | FLOAT_VAL ADD idf         {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                            printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                        }}
          | FLOAT_VAL MULT math       {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                            printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                        }}
          | FLOAT_VAL DIV math        {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                            printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                        }};

neg_singletons: NEG_INT_VAL                    {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
              | NEG_INT_VAL ADD singletons     {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
              | NEG_INT_VAL ADD idf            {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
              | NEG_INT_VAL SUB singletons     {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
              | NEG_INT_VAL SUB idf            {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
              | NEG_INT_VAL MULT math          {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}
              | NEG_INT_VAL DIV math           {if(check_type == true && strcmp(Curr_Assign_Type, "int") != 0){
                                                    printf("ERROR! type incompatible entre \"%s\" et \"%d\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                }}


              | NEG_FLOAT_VAL                    {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                                printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                     }} 

              | NEG_FLOAT_VAL ADD singletons         {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                                printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                     }}

              | NEG_FLOAT_VAL ADD idf                {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                                printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                     }}

              | NEG_FLOAT_VAL SUB singletons         {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                                printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                     }}

              | NEG_FLOAT_VAL SUB idf                {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                                printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                     }}

              | NEG_FLOAT_VAL MULT math              {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                                printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                     }}

              | NEG_FLOAT_VAL DIV math               {if(check_type == true && strcmp(Curr_Assign_Type, "float") != 0){
                                                printf("ERROR! type incompatible entre \"%s\" et \"%f\" a la ligne %d\n", line_num, Curr_Assign, $1);
                                                 }};


idf: IDENTIFIER {
    Sym* temp = search_ID(strdup($1));
     if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
     else if(check_type == true){
        if(strcmp(temp->m_EntityType, Curr_Assign_Type) != 0){
            printf("ERROR! type incompatible entre \"%s\" et \"%s\"\n", temp->m_EntityName, Curr_Assign) ;
        }
     }
}
   | IDENTIFIER neg_singletons {
    Sym* temp = search_ID(strdup($1));
     if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
     else if(check_type == true){
        if(strcmp(temp->m_EntityType, Curr_Assign_Type) != 0){
            printf("ERROR! type incompatible entre \"%s\" et \"%s\"\n", temp->m_EntityName, Curr_Assign) ;
        }
     }
}
   | IDENTIFIER SUB idf {
    Sym* temp = search_ID(strdup($1));
     if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
     else if(check_type == true){
        if(strcmp(temp->m_EntityType, Curr_Assign_Type) != 0){
            printf("ERROR! type incompatible entre \"%s\" et \"%s\"\n", temp->m_EntityName, Curr_Assign) ;
        }
     }
}

   | IDENTIFIER ADD singletons {
    Sym* temp = search_ID(strdup($1));
     if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
     else if(check_type == true){
        if(strcmp(temp->m_EntityType, Curr_Assign_Type) != 0){
            printf("ERROR! type incompatible entre \"%s\" et \"%s\"\n", temp->m_EntityName, Curr_Assign) ;
        }
     }
}

   | IDENTIFIER ADD idf {
    Sym* temp = search_ID(strdup($1));
     if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
     else if(check_type == true){
        if(strcmp(temp->m_EntityType, Curr_Assign_Type) != 0){
            printf("ERROR! type incompatible entre \"%s\" et \"%s\"\n", temp->m_EntityName, Curr_Assign) ;
        }
     }
}

   | IDENTIFIER MULT math {
    Sym* temp = search_ID(strdup($1));
     if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
     else if(check_type == true){
        if(strcmp(temp->m_EntityType, Curr_Assign_Type) != 0){
            printf("ERROR! type incompatible entre \"%s\" et \"%s\"\n", temp->m_EntityName, Curr_Assign) ;
        }
     }
}
   | IDENTIFIER DIV math {
    Sym* temp = search_ID(strdup($1));
     if(temp==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
     else if(check_type == true && temp != NULL){
        if(strcmp(temp->m_EntityType, Curr_Assign_Type) != 0){
            printf("ERROR! type incompatible entre \"%s\" et \"%s\"\n", temp->m_EntityName, Curr_Assign) ;
        }
     }
}



condition: LEFT_PAR math relational_operators math RIGHT_PAR | LEFT_PAR math RIGHT_PAR;

relational_operators: EQUAL | GREATER | GREATER_EQ | LESS | LESS_EQ;

types: BOOL | INT | FLOAT;

            /* handling instructions */

instructions_opt: %empty | assign instructions_opt | if instructions_opt | while instructions_opt;

assign: IDENTIFIER   
{
    Sym* temp=search_ID(strdup($1));
    if(temp==NULL){
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$1);
        check_type = false;
    }
    else if(temp != NULL && is_constant(strdup($1))){
        printf("ERROR !In line %d the variable \"%s\" is a constant, you cannot change it.\n",line_num,$1);
        check_type = false;
   } 
   else{
        check_type = true;
        Curr_Assign_Type =  temp->m_EntityType;
        Curr_Assign = $1;
   }
}ASSIGN math INSTR_END;

if: IF condition START instructions_opt END;

while: WHILE condition START instructions_opt END;

            /* handling functions */

functions_opt: %empty | function_declaration functions_opt;

function_declaration: types FUNC IDENTIFIER {Curr_Scope = $3;} VAR variables_opt START instructions_opt return END ; 
             
return: RET INT_VAL INSTR_END 
      | RET FLOAT_VAL INSTR_END 
      | RET BOOL_VAL INSTR_END 
      | RET IDENTIFIER {
     if(search_ID(strdup($2))==NULL)
        printf("ERROR !In line %d the variable \"%s\" is undeclared.\n",line_num,$2);
        } INSTR_END;
%%

/* void yyerror(){ */
    /* printf("syntax error at line %d\n", line_num); */
/* } */
