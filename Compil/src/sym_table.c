#include "../inc/sym_table.h"
#include <stdbool.h>

size_t Sym_counter = 0;
Sym* Sym_head = NULL;
Sym* Sym_tail = NULL;
size_t Idf_counter = 0;
// IDFs* Idf_head = NULL;
// IDFs* Idf_tail = NULL;
char* Curr_Scope;
char* Curr_Type;
bool Curr_Const;
char* Curr_Assign;
char* Curr_Assign_Type;


int double_Declaration(char* Name, char* Scope)
{
    Sym* temp = search_ID(Name);
    if (temp!=NULL)
    {
        if(!strcmp(Scope,temp->m_Scope))
            return temp->m_line_Sym;
    }
    return -1;
}

// search for an identifier in the list. if found, return the node else return NULL;
Sym* search_ID(char* Name)
{
    bool found=false;
    Sym* temp = Sym_head;
    while (!found && temp!=NULL)
    {
        if(strcmp(Name,temp->m_EntityName) == 0 && strcmp(Curr_Scope, temp->m_Scope) == 0)
            break;
        temp=temp->m_NextSym;
    }
    return temp;
}



void Sym_List_Destroy(){
    Sym* temp = Sym_head;
    Sym* Sym_Struct_temp = NULL;
    while(temp != NULL){
        free(temp->m_EntityName);
        temp->m_EntityName = NULL;
        free(temp->m_EntityCode);
        temp->m_EntityCode = NULL;
        free(temp->m_EntityType);
        temp->m_EntityCode = NULL;
        Sym_Struct_temp = temp;
        temp = temp->m_NextSym;
        free(Sym_Struct_temp);
    }
    Sym_head = NULL;
    Sym_tail = NULL;
}

bool is_constant(char* Name)
{
    Sym* temp=search_ID(Name);
    return temp->m_Constant;
}

void Sym_print(){
    printf("\n/***************Table des symboles ******************/\n");
    printf("________________________________________________________________________________\n");
    printf("\t| NomEntite | CodeEntite | TypeEntite | Constant | Scope        | Line\n");
    printf("________________________________________________________________________________\n");
    int i = 0;
    Sym* temp = Sym_head;
    while(i < Sym_counter){
        printf("\t|%10s |%12s | %10s| %5s    | %12s | %2d  \n",temp->m_EntityName, temp->m_EntityCode, temp->m_EntityType, temp->m_Constant?"True":"False", temp->m_Scope,temp->m_line_Sym);
        i++;
        temp = temp->m_NextSym;

    }
}

void Sym_List_Add(char* Name, char* Code, char* Type, bool Constant, char* Scope, int line){

    int number=double_Declaration(Name,Scope);
    if(number==-1)
    {
            Sym* Symbol = malloc(sizeof(Sym));
        Symbol->m_EntityName = strdup(Name);
        Symbol->m_EntityCode = strdup(Code);
        Symbol->m_EntityType = strdup(Type);
        Symbol->m_Constant = Constant;
        Symbol->m_Scope = strdup(Scope);
        Symbol->m_line_Sym = line;

        if(Sym_head == NULL){
            Symbol->m_NextSym = NULL;
            Sym_head = Sym_tail = Symbol;
        }

        else{
            Sym_tail->m_NextSym = Symbol;
            Symbol->m_NextSym = NULL;
            Sym_tail = Symbol;
        }
        Sym_counter++;
    }
    else {
        printf("ERROR ! Double Declaration of \"%s\" at line %d because already declared in %d\n",Name,line,number);
    }
}


int count_nl(char *comment, size_t comment_len){
    int counter = 0;
    for(int i = 0; i < comment_len; i++){
        if(comment[i] == '\n')
            counter++;
    }
    return counter;
}
