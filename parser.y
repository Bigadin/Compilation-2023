%{
#include <stdio.h>
#define YYSTYPE float
%}


%union {
    int num;
    char* sym;
}

%token <sym>CHAR <sym>STRING <sym>CONST BOOL <sym>INT <sym>FLOAT

%token IDF

%token <sym>PLUS <sym>MINUS <sym>MULT <sym>DIV <sym>EG <sym>SUP <sym>LES <sym>LESE <sym>SUPE <sym>AND <sym>OR <sym>INCR  <sym>DECR <sym>ASSIG

%token _TRUE _FALSE

%token <sym>NOTEG

%token <sym>BEG <sym>END <sym>RETURN <sym>SEMI EOL <sym>SEP

%token <sym>FOR <sym>IF <sym>WHILE <sym>DO

%token <num>neg_FLOAT_val <num>FLOAT_val <num>BOOL_val <num>neg_INT_val <num>INT_val <sym>STRING_val <sym>CHAR_val


%%

input:
|decline EOL input
|BEG EOL Sinput 
;

Sinput:
affline EOL Sinput
|END {printf("\n\n Checker done you can run your program \n\n");}
;

affline:
AFFECTATION
|EOL
;
decline:
type IDFSEP 
|CONST type AFFECTATION 
|EOL
;

AFFECTATION:
IDF ASSIG OPERATION SEMI   
|IDF ASSIG OPERATION SEP AFFECTATION 

IDFSEP:
IDF SEMI
|IDF SEP IDFSEP
|IDF ASSIG OPERATION SEP IDFSEP
|AFFECTATION

OPERATION:
EXPRESSION
|OPERATION Opp OPERATION 
|EXPRESSION Opp EXPRESSION 

EXPRESSION:
VALUES
|IDF

Opp:
PLUS|MINUS|MULT|DIV|INCR|DECR|EG|SUP|LES|LESE|SUPE|AND|OR

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

