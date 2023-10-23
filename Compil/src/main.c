#include "../inc/parser.h"
#include "../inc/sym_table.h"
#include <stdio.h>
#include <stdlib.h>

extern FILE* yyin;

int main(int argc, char** argv){
    if(argc > 1)
        yyin = fopen(argv[1], "r");
    yyparse();
    Sym_print();
    Sym_List_Destroy();

}
