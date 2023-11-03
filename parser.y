%{
#include <stdio.h>
#define YYSTYPE float

int yylineo = 1; // les lignes
int col = 1; // les colonnes
int LastLeng =0; // le leng du dernier token trouvé
char* cal = 0;
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

%token <sym>BEG <sym>END <sym>RETURN <sym>SEMI  <sym>SEP

%token <sym>FOR <sym>IF <sym>WHILE <sym>DO OPAR CPAR OPEN CLOSE ELSE

%token <num>neg_FLOAT_val <num>FLOAT_val <num>BOOL_val <num>neg_INT_val <num>INT_val <sym>STRING_val <sym>CHAR_val


%left PLUS MINUS
%left MULT DIV
%start input

%%

// c'est le start, il envoie vers decline et check que BEGIN est ecris avant les affectations
input:
decline  input
|BEG  Sinput 
;
//ce input c'est celui des affection, apres le begin tout boucle ici
Sinput:
affline  Sinput
|END {printf("\n\n Checker done you can run your program \n\n"); break;}
;
// ça c'est jsute pour ne pas avoir d'erreur si on ecris apres le END


// ça c'est decline c'est les lignes de declaration
decline:
type IDFSEP // declaration normal 
|CONST type AFFECTATION  // constante
;

// c'est les declaration possible
IDFSEP:
IDF SEMI // int a;
|IDF SEP IDFSEP // int a,IDFSEP
|IDF ASSIG OPERATION SEP IDFSEP // int a = 4,IDFSEP
|AFFECTATION // int a = 4;

//ça c'est affline, les lignes de tout ce qu'il y a dans BEGIN
affline:
AFFECTATION
|IFCOND
;

//affectaion 
AFFECTATION:
IDF ASSIG OPERATION SEMI  // une seul affectation
|IDF ASSIG OPERATION SEP AFFECTATION  // pluseur affectation a la fois

//If condition
IFCOND:
IF OPAR comparaison CPAR OPEN inside_if CLOSE   //condition avec les accolade
|IF OPAR comparaison CPAR  AFFECTATION   //condition direct
|IFCOND ELSE IFCOND  // ELSE IF
|IFCOND ELSE OPEN inside_if CLOSE   // ELSE
|IFCOND ELSE  inside_if    // ELSE direct

//comparaison
comparaison:
    OPERATION cmp OPERATION // c'est opperation comparée a operation pour les if
    ; 

// inside if, pour tout ce qui est possible dans un if
inside_if:
     inside_if AFFECTATION // une affectation
    | inside_if IFCOND // une autre condition
    |   // vide 
    ;


// opperation 
OPERATION:
EXPRESSION // ça c'est pour evité des erreurs avec les affectations
|OPERATION Opp OPERATION 
|EXPRESSION Opp EXPRESSION

//Expression pour dire value ou idf
EXPRESSION:
VALUES
|IDF

// toute les op possibles
Opp:
PLUS|MINUS|MULT|DIV|INCR|DECR

//tous les type possibles
type:
FLOAT|INT|BOOL|CHAR|STRING

//toute les valeurs possibles
VALUES:
neg_FLOAT_val 
|FLOAT_val 
|_TRUE 
|_FALSE 
|neg_INT_val 
|INT_val 
|STRING_val 
|CHAR_val

//tous les comparateur possibles
cmp:
EG|SUP|LES|SUPE|LESE|NOTEG

%%

// main pour pouvoir tester directement un fichier si il est valide ou pas
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

