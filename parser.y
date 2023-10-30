%{
#include <stdio.h>
#define YYSTYPE float

int yylineo = 1;
int col = 1;
int LastLeng =0;
%}


%union {
    int num;
    char* sym;
}

%token <sym>CHAR <sym>STRING <sym>CONST BOOL <sym>INT <sym>FLOAT

%token <sym> IDF

%token <sym>PLUS <sym>MINUS <sym>MULT <sym>DIV <sym>EG <sym>SUP <sym>LES <sym>LESE <sym>SUPE <sym>AND <sym>OR <sym>INCR  <sym>DECR <sym>ASSIG

%token _TRUE _FALSE

%token <sym>NOTEG

%token <sym>BEG <sym>END <sym>RETURN <sym>SEMI EOL <sym>SEP

%token <sym>FOR <sym>IF <sym>WHILE <sym>DO OPAR CPAR OPEN CLOSE ELSE

%token <num>neg_FLOAT_val <num>FLOAT_val <num>BOOL_val <num>neg_INT_val <num>INT_val <sym>STRING_val <sym>CHAR_val

%left PLUS MINUS
%left MULT DIV
%start input

%%

input:
|decline EOL input
|BEG EOL Sinput 
|EOL input
;

Sinput:
affline EOL Sinput
|EOL Sinput
|END outbox {printf("\n\n Checker done you can run your program \n\n"); break;}
;
outbox:
|EOL outbox


decline:
type IDFSEP 
|CONST type AFFECTATION 
;

affline:
AFFECTATION
|IFCOND
;

AFFECTATION:
IDF ASSIG OPERATION SEMI   
|IDF ASSIG OPERATION SEP AFFECTATION 

IFCOND:
IF OPAR comparaison CPAR OPEN inside_if CLOSE 
|IF OPAR comparaison CPAR AFFECTATION


comparaison:
    OPERATION cmp OPERATION
    ; 

inside_if:
     inside_if AFFECTATION
    | inside_if IFCOND
    | inside_if EOL
    |
    ;

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
PLUS|MINUS|MULT|DIV|INCR|DECR

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

cmp:
EG|SUP|LES|SUPE|LESE|NOTEG

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
    printf("%s  line :%d  col :%d \n",s,yylineo,col - LastLeng);
    return 0;
}

