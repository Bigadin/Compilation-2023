%{
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

extern int yylineo; // les lignes
extern int col; // les colonnes
int LastLeng =0; // le leng du dernier token trouvé
char* cal = 0;
int int_value = 0;
float float_value = 1;
char string_value[20] ;
union yylval;

//
extern int operationIndex;

extern char currentType[20];
extern int currentConst;
extern int part_index;
extern char currentValue[20];

%}



%union {
int num;
float real;
char* sym;
}

%token <sym>CHAR <sym>STRING <sym>CONST BOOL <sym>INT <sym>FLOAT

%token <sym> IDF

%token <sym>PLUS <sym>MINUS <sym>MULT <sym>DIV <sym>EG <sym>SUP <sym>LES <sym>LESE <sym>SUPE <sym>AND <sym>OR <sym>INCR  <sym>DECR <sym>ASSIG <sym>NOT <sym>AddAff <sym>MinAff <sym>MulAff <sym>DivAff

%token <sym>_TRUE <sym>_FALSE

%token <sym>NOTEG

%token <sym>BEG <sym>END <sym>RETURN <sym>SEMI  <sym>SEP <sym>DeuxPoints

%token <sym>FOR <sym>IF <sym>WHILE <sym>DO OPAR CPAR OPEN CLOSE ELSE BREAK DEFAULT <sym>CASE <sym>SWITCH  CONTINUE <sym>PRINTF SBRA CBRA

%token <real>neg_FLOAT_val <real>FLOAT_val <num>BOOL_val <num>neg_INT_val <num>INT_val <sym>STRING_val <sym>CHAR_val 

 
%left PLUS MINUS
%left MULT DIV
%start input


%%

// c'est le start, il envoie vers decline et check que BEGIN est ecris avant les affectations
input:
decline BEG {part_index = 1;} affline END {printf("\n checker done !!\n"); afficherIDF();}
;

// ça c'est decline c'est les lignes de declaration
decline:
type IDFSEP decline // declaration normal 
|CONST {currentConst = 1;}type AFFECTATION  decline// constante
|
;

// c'est les declaration possible
IDFSEP:
IDF SEMI  {insertTS(string_value,currentType,currentConst,currentValue);} // int a;
|IDF SEP {insertTS(string_value,currentType,currentConst, currentValue);} IDFSEP // int a,IDFSEP
|IDF ASSIG OPERATION SEP {insertTS(string_value,currentType,currentConst, currentValue);} IDFSEP // int a = 4,IDFSEP
|AFFECTATION

//ça c'est affline, les lignes de tout ce qu'il y a dans BEGIN
affline:
AFFECTATION affline
|IDF DecInc SEMI affline {Var_non_dec($1);}
|BOUCLE affline
|RETURN OPERATION SEMI affline
|STMT affline
|IFCOND affline 
|
;


//affectaion 
AFFECTATION:
IDF ASSIG OPERATION SEMI {insertTS(string_value,currentType,currentConst, currentValue);
                            Var_non_dec($1);}//// une seul affectation
|IDF ASSIG OPERATION SEP {insertTS(string_value,currentType,currentConst, currentValue);
                            Var_non_dec($1);}  AFFECTATION  // pluseur affectation a la fois, 
|IDF AFFOP OPERATION SEMI  {Var_non_dec($1);}// une seul affectation
|TABLE SEMI
|TABLE ASSIG OPEN inside_tab CLOSE SEMI
|TABLE SEP IDFSEP
|TABLE ASSIG OPEN inside_tab CLOSE SEP IDFSEP
|TABLED SEMI
|TABLED ASSIG OPEN inside_tab CLOSE OPEN inside_tab CLOSE SEMI
|TABLED SEP IDFSEP
|TABLED ASSIG OPEN inside_tab CLOSE OPEN inside_tab CLOSE SEP IDFSEP

TABLE:
IDF SBRA IDF CBRA 
|IDF SBRA INT_val CBRA
|IDF SBRA CBRA
TABLED:
IDF SBRA IDF CBRA SBRA IDF CBRA
|IDF SBRA INT_val CBRA SBRA IDF CBRA
|IDF SBRA CBRA SBRA IDF CBRA
|IDF SBRA IDF CBRA SBRA INT_val CBRA 
|IDF SBRA INT_val CBRA SBRA INT_val CBRA 
|IDF SBRA CBRA SBRA INT_val CBRA 
|IDF SBRA IDF CBRA SBRA CBRA 
|IDF SBRA INT_val CBRA SBRA CBRA 
|IDF SBRA CBRA SBRA CBRA 

inside_tab:
VALUES
|VALUES SEP inside_tab
|

BOUCLE:
FORCOND BOUCLE
|WHILECOND BOUCLE
|DOWCOND BOUCLE
|SWITCHCOMD
|

//If condition
IFCOND:
IF OPAR comparaison CPAR OPEN inside_if CLOSE   //condition avec les accolade
|IF OPAR comparaison CPAR  AFFECTATION   //condition direct
|IFCOND ELSE IFCOND  // ELSE IF
|IFCOND ELSE OPEN inside_if CLOSE   // ELSE
|IFCOND ELSE  inside_if    // ELSE direct

// inside if, pour tout ce qui est possible dans un if
inside_if:
inside_if AFFECTATION // une affectation
|inside_if EXPRESSION DecInc SEMI
|inside_if STMT 
|inside_if IFCOND // une autre condition
|inside_if FORCOND
|inside_if WHILECOND
|inside_if DOWCOND
|inside_if RETURN OPERATION SEMI
|   // vide 
;
//return

//For condition
FORCOND:
FOR OPAR INIT SEMI comparaison SEMI OPERATION CPAR OPEN inside_for CLOSE

inside_for:
inside_for AFFECTATION // une affectation
|inside_for EXPRESSION DecInc SEMI
|inside_for STMT 
|inside_for IFCOND // une autre condition
|inside_for FORCOND
|inside_for WHILECOND
|inside_for DOWCOND
|inside_for RETURN OPERATION SEMI
|   // vide 
;

INIT:
IDF ASSIG EXPRESSION {Var_non_dec($1);}
|type IDF ASSIG EXPRESSION {part_index = 0; insertTS(string_value,currentType,currentConst,currentValue); part_index = 1;}

//WHILE condition
WHILECOND:
WHILE OPAR comparaison CPAR OPEN inside_while CLOSE

inside_while:
inside_while AFFECTATION // une affectation
|inside_while EXPRESSION DecInc SEMI
|inside_while STMT 
|inside_while IFCOND // une autre condition
|inside_while FORCOND
|inside_while WHILECOND
|inside_while DOWCOND
|inside_while RETURN OPERATION SEMI
|   // vide 
;

//DO WHILE 
DOWCOND:
DO OPEN inside_dowhile CLOSE WHILE OPAR comparaison CPAR SEMI
inside_dowhile:
inside_dowhile AFFECTATION // une affectation
|inside_dowhile EXPRESSION DecInc SEMI
|inside_dowhile STMT 
|inside_dowhile IFCOND // une autre condition
|inside_dowhile FORCOND
|inside_dowhile WHILECOND
|inside_dowhile DOWCOND
|inside_dowhile RETURN OPERATION SEMI
|   // vide 
;

//SWITCH CASE:
SWITCHCOMD:
SWITCH OPAR IDF CPAR OPEN inside_switch CLOSE
inside_switch:
CASE VALUES DeuxPoints inside_case inside_switch
|DEFAULT DeuxPoints inside_case
|
;
inside_case:
inside_case AFFECTATION // une affectation
|inside_case EXPRESSION DecInc SEMI
|inside_case STMT 
|inside_case IFCOND // une autre condition
|inside_case FORCOND
|inside_case WHILECOND
|inside_case DOWCOND
|inside_case BREAK SEMI
|inside_case CONTINUE SEMI
|inside_case RETURN OPERATION SEMI
|   // vide 
;

//comparaison
comparaison:
    OPERATION cmp OPERATION // c'est opperation comparée a operation pour les if
    |NOT IDF {Var_non_dec($2);}
    ; 


// opperation 
OPERATION:
EXPRESSION // ça c'est pour evité des erreurs avec les affectations
|EXPRESSION DecInc
|OPERATION Opp OPERATION  
|EXPRESSION Opp EXPRESSION 


STMT:
PRINTF OPAR STRING_val SEP IDF CPAR SEMI
|PRINTF OPAR STRING_val CPAR SEMI


//Expression pour dire value ou idf
EXPRESSION:
VALUES
|IDF {Var_non_dec($1);}



// toute les op possibles
Opp:
PLUS |MINUS|MULT |DIV
AFFOP:
AddAff|MinAff|MulAff|DivAff
DecInc:
INCR|DECR


//tous les type possibles
type:
FLOAT {strcpy(currentType,"float");}
|INT {strcpy(currentType,"int");}
|BOOL {strcpy(currentType,"bool");}
|CHAR {strcpy(currentType,"char");}
|STRING {strcpy(currentType,"string");}



//toute les valeurs possibles
VALUES:
    neg_FLOAT_val {if(strcmp(currentType,"float") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%f|, a la ligne %d\n", currentType, $1, yylineo) ;
                    else
                        sprintf(currentValue, "%.3f", $1);}  // Assuming neg_FLOAT_val is a float
    | FLOAT_val {if(strcmp(currentType,"float")&& part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%f|, a la ligne %d\n", currentType, $1, yylineo) ;
                    else
                        sprintf(currentValue, "%.3f", $1);}      // Assuming FLOAT_val is a float
    | _TRUE {if(strcmp(currentType,"bool") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |true|, a la ligne %d\n", currentType, yylineo) ;
                    else
                        strcpy(currentValue, "true");}
    | _FALSE { if(strcmp(currentType,"bool") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |false|, a la ligne %d\n", currentType, yylineo) ;
                    else
                        strcpy(currentValue, "false");}
    | neg_INT_val {if(strcmp(currentType,"int") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%d|, a la ligne %d\n", currentType, $1, yylineo) ;
                    else
                        sprintf(currentValue, "%d", $1);}    // Assuming neg_INT_val is an int
    | INT_val {if(strcmp(currentType,"int") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%d|, a la ligne %d\n", currentType, $1, yylineo) ;
                    else
                        sprintf(currentValue, "%d", $1);}        // Assuming INT_val is an int
    | STRING_val {if(strcmp(currentType,"string") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%s|, a la ligne %d\n", currentType, $1, yylineo) ;
                    else
                        strcpy(currentValue, $1);}
    | CHAR_val {if(strcmp(currentType,"char") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%c|, a la ligne %d\n", currentType, $1, yylineo) ;
                    else
                        sprintf(currentValue, "'%c'", $1);}     // Assuming CHAR_val is a char
    ;




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

