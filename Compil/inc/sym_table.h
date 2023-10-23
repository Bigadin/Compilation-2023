#ifndef SYM_TABLE_H 
#define SYM_TABLE_H

#include "./parser.h"
// #include <cstddef>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Sym{
    char* m_EntityName;
    char* m_EntityCode;
    char* m_EntityType;
    bool m_Constant;
    char* m_Scope;
    int m_line_Sym;
    struct Sym* m_NextSym;
}Sym;


void Sym_List_Add(char* Name, char* Code, char* Type, bool Constant, char* Scope,int line);
void Sym_List_Destroy();
void Sym_print();
void check_if_double_declared();

int double_Declaration(char* Name, char* Scope);
Sym* search_ID(char* Name);

bool is_constant(char* Name);

int count_nl(char* comment, size_t comment_len);



#endif 
