%{
#include <stdio.h>

%}


%union {
    int num;
    char sym;
}

%token CHAR STRING CONST BOOL INT FLOAT

%token IDF

%token PLUS MINUS MULT DIV EG SUP LES LESE SUPE AND OR INCR  DECR ASSIG

%token _TRUE _FALSE

%token NOTEG

%token BEG END RETURN SEMI EOL SEP

%token FOR IF WHILE DO

%token neg_FLOAT_val FLOAT_val BOOL_val neg_INT_val INT_val STRING_val CHAR_val


%%

input:
|line EOL input
;

line:
|AFFECTATION 
|type AFFECTATION
|CONST type AFFECTATION
|EOL
;


AFFECTATION:
|IDF ASSIG OPERATION SEMI {printf(" c'est une affectation  a = x \n");}
|IDF ASSIG OPERATION SEP AFFECTATION {printf(" c'est une affectation a = b,a = x \n");}

OPERATION:
EXPRESSION
|OPERATION Opp OPERATION
|EXPRESSION Opp EXPRESSION 

EXPRESSION:
VALUES
|IDF

Opp:
|PLUS|MINUS|MULT|DIV|INCR|DECR|EG|SUP|LES|LESE|SUPE|AND|OR

type:
FLOAT|INT|BOOL|CHAR|STRING

VALUES:
neg_FLOAT_val 
|FLOAT_val 
|_TRUE 
|_FALSE 
|neg_INT_val 
|INT_val 
|STRING_val 
|CHAR_val

%%


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *file = freopen(argv[1], "r", stdin);
    if (file == NULL) {
        perror("Error");
        return 1;
    }

    yyparse();

    fclose(file);
    return 0;
}

int yyerror(char* s){
    printf("%s  \n",s);
    return 0;
}

