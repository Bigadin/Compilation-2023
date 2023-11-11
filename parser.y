%{
#include <stdio.h>
#define YYSTYPE float /* should be int or union */
%}


%union {
    int num;
    char* sym;
}

%token <sym>CHAR <sym>STRING <sym>CONST BOOL <sym>INT <sym>FLOAT

%token IDF

%token <sym>PLUS <sym>MINUS <sym>MULT <sym>DIV <sym>EG <sym>SUP <sym>LES <sym>LESE <sym>SUPE <sym>AND <sym>OR <sym>INCR  <sym>DECR <sym>ASSIG <sym>AddAff <sym>MulAff <sym>MinAff <sym>DivAff <sym>NOT

%token _TRUE _FALSE

%token <sym>NOTEG

%token <sym>BEG <sym>END <sym>RETURN <sym>SEMI EOL <sym>SEP <sym>OPEP <sym>CLOP <sym>DeuxPoints <sym>OPECurlBrak <sym>CLOCurlBrak

%token <sym>FOR <sym>IF <sym>WHILE <sym>DO <sym>ELSE <sym>BREAK <sym>CONTINUE <sym>SWITCH <sym>CASE <sym> DEFAULT <sym>PRINTF

%token <num>neg_FLOAT_val <num>FLOAT_val <num>BOOL_val <num>neg_INT_val <num>INT_val <sym>STRING_val <sym>CHAR_val <sym>FORMAT_STRING


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
|BOUCLE
|STMT
|RETURN OPERATION SEMI
|RETURN EXPRESSION SEMI
|BREAK SEMI
|CONTINUE SEMI
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
|IDF ASSIG EXPRESSION SEMI   
|IDF ASSIG EXPRESSION SEP AFFECTATION


IDFSEP:
IDF SEMI
|IDF SEP IDFSEP
|IDF ASSIG OPERATION SEP IDFSEP
|AFFECTATION


BOUCLE:
FOR OPEP INIT SEP CONDITION SEP OPERATION CLOP 
    OPECurlBrak affline CLOCurlBrak
|IF OPEP CONDITION CLOP 
    OPECurlBrak affline CLOCurlBrak
|IF OPEP CONDITION CLOP 
    OPECurlBrak affline CLOCurlBrak 
    IFELSE 
|WHILE OPEP CONDITION CLOP 
    OPECurlBrak affline CLOCurlBrak
|DO OPECurlBrak affline CLOCurlBrak 
    WHILE OPEP CONDITION CLOP SEMI
|SWITCH OPEP EXPRESSION CLOP 
    OPECurlBrak CASES CLOCurlBrak


IFELSE:
ELSE IF OPEP CONDITION CLOP 
    OPECurlBrak affline CLOCurlBrak 
    IFELSE
|ELSE OPECurlBrak affline CLOCurlBrak

INIT:
type IDF ASSIG EXPRESSION
|IDF ASSIG EXPRESSION

CASES:
CASE VALUES DeuxPoints 
    OPECurlBrak affline CLOCurlBrak 
    CASES 
|DEFAULT DeuxPoints 
    OPECurlBrak affline CLOCurlBrak


CONDITION:
OPERATION Opp OPERATION 
|EXPRESSION Opp EXPRESSION 
|NOT EXPRESSION


OPERATION:
OPERATION Opp OPERATION 
|EXPRESSION Opp EXPRESSION 
|EXPRESSION DecInc


STMT:
PRINTF OPEP FORMAT_STRING SEP IDF CLOP SEMI
|PRINTF OPEP FORMAT_STRING CLOP SEMI

EXPRESSION:
VALUES
|IDF


Opp:
PLUS|MINUS|MULT|DIV|EG|SUP|LES|LESE|SUPE|AND|OR|AddAff|MulAff|MinAff|DivAff


DecInc:
INCR|DECR


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

