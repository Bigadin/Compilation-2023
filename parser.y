%{

%}


%union {
    int num;
    char sym;
}

%token CHAR STRING CONST BOOL INT FLOAT

%token IDF

%token PLUS MINUS MULT DIV EG SUP LES LESE SUPE AND OR INCR  DECR ASSIG

%token VRAI FAUX

%token NOTEG

%token BEG END RETURN SEMI EOL SEP

%TOKEN FOR IF WHILE DO

%TOKEN neg_FLOAT_val FLOAT_val BOOL_val neg_INT_val INT_val neg_CONST_val CONST-val STRING_val CHAR_val




%%


input:
|line input{printf(" \n\n\n  aaaaaaaaaaaaaaaa \n\n\n\n");}
;

line:
|DECLARATION  {printf(" c'est une declaration \n");}
|AFFECTATION  {printf(" c'est une affectation \n");}
|EOL
;

VALUES:
|neg_FLOAT_val 
|FLOAT_val 
|BOOL_val 
|neg_INT_val 
|INT_val 
|neg_CONST_val 
|CONST-val 
|STRING_val 
|CHAR_val

DECLARATION:
|type AFFECTATION
|CONST type AFFECTATION

AFFECTATION:
|IDF ASSIG OPERATION SEMI
|IDF ASSIG OPERATION SEP AFFECTATION
|IDF ASSIG VALUES SEMI
|IDF ASSIG VALUES SEP AFFECTATION
|IDF ASSIG IDF SEMI
|IDF ASSIG IDF SEP AFFECTATION

type:
|FLOAT|INT|BOOL|CHAR|STRING


OPERATION:
EXPRESSION Opp EXPRESSION 

EXPRESSION:
|VALUES
|IDF


Opp:
PLUS|MINUS|MULT|DIV|INCR|DECR|EG|SUP|LES|LESE|SUPE|AND|OR

%%

int main(int argc, char *argv[]) {
    yyparse(); // this will call the lexer on the provided file
    return 0;
}

int yyerror(char* s){
    printf("%s\n",s);
    return 0;
}

