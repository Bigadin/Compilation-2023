%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Sem.h"


extern int yylineo; // Les lignes
extern int col ; // Les colonnes
extern char currentType[20];
extern int currentConst  ;
extern int part_index;
extern char assignType[20];
extern char assignValue[20];
extern char tp[20];
extern int s;
int LastLeng =0; // Le length du dernier token trouvé
int int_value = 0;
float float_value = 1;
char string_value[20] ;
 
// Operation semantique
extern char op;
char currentOp = '+';
Node* op_tree;  


// Inserer les donnees dans l'arbre

void SendToCalculator(float i, char op) {
    switch (op) {
        case '+':
        case '*':
            insert(&op_tree, i);
            break;
        case '-':
            insert(&op_tree, -i);
            break;
        case '/':
            insert(&op_tree, 1 / i);
            break;
        default:
            // Gérer le cas par défaut ici
            break;
    }
}
%}



%union {
    
int num;
float real;
char* sym;
}


%token <sym> IDF <sym>CHAR <sym>STRING <sym>CONST BOOL <sym>INT <sym>FLOAT

%token <sym>PLUS <sym>MINUS <sym>MULT <sym>DIV <sym>EG <sym>SUP <sym>LES <sym>LESE <sym>SUPE <sym>AND 

%token <sym>NOTEG <sym>OR <sym>INCR  <sym>DECR <sym>ASSIG <sym>NOT <sym>AddAff <sym>MinAff <sym>MulAff <sym>DivAff

%token <sym>BEG <sym>END <sym>RETURN <sym>SEMI  <sym>SEP <sym>DeuxPoints SBRA CBRA

%token <sym>FOR <sym>IF <sym>WHILE <sym>DO OPAR CPAR OPEN CLOSE ELSE BREAK DEFAULT <sym>CASE <sym>SWITCH  CONTINUE <sym>PRINTF 

%token <real>neg_FLOAT_val <real>FLOAT_val <sym>BOOL_val <num>neg_INT_val <num>INT_val <sym>STRING_val <sym>CHAR_val 

%token <sym>_TRUE <sym>_FALSE


%left PLUS MINUS
%right MULT DIV


%start input

%%



// C'est le start, il envoie vers decline et check que BEGIN est ecris avant les affectations
input:
decline BEG {part_index = 1;} affline END {
                                                printf("\n CHECKER DONE !!\n"); 
                                                afficherTS();}
;


// Ca c'est decline c'est les lignes de declaration
decline:
type IDFSEP decline // Declaration normal 
|CONST {currentConst = 1;} type AFFECTATION  decline // Declaration d'une constante
|       // Ne rien declarer
;
 

// Les declaration possible
IDFSEP:
IDF SEMI  {insertTS($1,currentType,currentConst,currentType,"0");}                  // int a;
|IDF SEP {insertTS($1,currentType,currentConst,currentType,"0");} IDFSEP            // int a,IDFSEP
|IDF ASSIG  OPERATION {printtree(op_tree);}  SEP {
                                                    sprintf(assignValue,"%f",SumArbre(&op_tree)); 
                                                    s = 1;
                                                    insertTS($1,currentType,currentConst,assignType,assignValue);deleteTree(&op_tree);
                                                    currentOp ='+';
                                                    s=0;} 
                                            IDFSEP                                  // int a = 4,IDFSEP
|AFFECTATION
|TABLE SEMI // tab[];
|TABLE ASSIG OPEN inside_tab CLOSE SEMI                                             //tab[] = {1,2,3};
|TABLE SEP IDFSEP 
|TABLE ASSIG OPEN inside_tab CLOSE SEP IDFSEP 
|TABLED SEMI //tab[][];
|TABLED ASSIG OPEN inside_tab CLOSE OPEN inside_tab CLOSE SEMI                      //tab[] = {1,2,3}{4,5,6};
|TABLED SEP IDFSEP 
|TABLED ASSIG OPEN inside_tab CLOSE OPEN inside_tab CLOSE SEP IDFSEP


// Ca c'est affline, les lignes de tout ce qu'il y a dans BEGIN
affline:
AFFECTATION affline
|IDF DecInc {printtree(op_tree);} SEMI {    // Operation d'incrementation et decrementation a revoir!!!
                                            if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
                                                SendToCalculator(atof(searchTS($1)->value),currentOp);
                                                SendToCalculator(1,currentOp);
                                                sprintf(assignValue,"%f",SumArbre(&op_tree));};
        
                                            s = 1;
                                            insertTS($1 ,currentType,currentConst,assignType,assignValue); 
                                            s=0;
                                            deleteTree(&op_tree); 
                                            currentOp = '+';}
                                    affline
|BOUCLE affline
|RETURN OPERATION SEMI affline
|STMT affline
|
;   
   

// Les affectations
AFFECTATION:
IDF ASSIG OPERATION {printtree(op_tree);} SEMI {
                                                    if(!strcmp(assignType,"float") || !strcmp(assignType,"int"))
                                                        sprintf(assignValue,"%f",SumArbre(&op_tree));
            
                                                    s = 1; 
                                                    insertTS($1 ,currentType,currentConst,assignType,assignValue); 
                                                    s=0;
                                                    deleteTree(&op_tree); 
                                                    currentOp = '+';}    // Une seul affectation
|IDF ASSIG OPERATION {printtree(op_tree);}  SEP {
                                                    if(!strcmp(assignType,"float") || !strcmp(assignType,"int"))
                                                        sprintf(assignValue,"%f",SumArbre(&op_tree));

                                                    insertTS($1,currentType,currentConst,assignType,assignValue );
                                                    deleteTree(&op_tree); 
                                                    currentOp = '+';}  
                                            AFFECTATION                 // Plusieur affectation a la fois
|IDF AFFOP EXPRESSION {printtree(op_tree);} SEMI {
                                                    s=0;
                                                    if(!strcmp(assignType,"float") || !strcmp(assignType,"int"))
                                                        SendToCalculator(atof(searchTS($1)->value),currentOp);
                                                    sprintf(assignValue,"%f",SumArbre(&op_tree));

                                                    insertTS($1,currentType,currentConst,assignType,assignValue );
                                                    deleteTree(&op_tree); 
                                                    currentOp = '+';}   // Une seul affectation avec += , -= ...


// Declaration des tableaux
TABLE:
IDF SBRA IDF CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA INT_val CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
// Declaration des tableaux a deux dimension
TABLED:
IDF SBRA IDF CBRA SBRA IDF CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA INT_val CBRA SBRA IDF CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA CBRA SBRA IDF CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA IDF CBRA SBRA INT_val CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA INT_val CBRA SBRA INT_val CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA CBRA SBRA INT_val CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA IDF CBRA SBRA CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA INT_val CBRA SBRA CBRA {insertTS($1,currentType,currentConst,currentType,"0");}
|IDF SBRA CBRA SBRA CBRA {insertTS($1,currentType,currentConst,currentType,"0");}

// Possibilites d'affectation pour les tableaux
inside_tab:
VALUES
|VALUES SEP inside_tab

|


// Les differentes boucles
BOUCLE:
FORCOND BOUCLE
|WHILECOND BOUCLE
|DOWCOND BOUCLE
|SWITCHCOMD
| 
 


// If condition
IFCOND:
IF OPAR comparaison CPAR OPEN inside_if CLOSE   // Condition avec les accolade
|IF OPAR comparaison CPAR  AFFECTATION   // Condition direct
|IFCOND ELSE IFCOND  // ELSE IF
|IFCOND ELSE OPEN inside_if CLOSE   // ELSE
|IFCOND ELSE  inside_if    // ELSE direct

// inside if, pour tout ce qui est possible dans un if
inside_if:
inside_if AFFECTATION // une affectation
|inside_if EXPRESSION DecInc SEMI 
|inside_if STMT // Un printf
|inside_if IFCOND // Une autre condition
|inside_if FORCOND // Autres boucles
|inside_if WHILECOND
|inside_if DOWCOND
|inside_if RETURN OPERATION SEMI // Un return
|   // vide 
;



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
IDF ASSIG EXPRESSION
|type IDF ASSIG EXPRESSION {part_index = 0; insertTS($2 ,currentType,currentConst,assignType,assignValue); part_index = 1;} 
// On ajoute les variables declarer dans la table des symboles 



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



// Comparaison
comparaison:
OPERATION cmp OPERATION  // C'est une opperation comparée a une autre operation pour les if
|NOT IDF
; 



// Opperation 
OPERATION:
EXPRESSION 
|NOT IDF
|EXPRESSION DecInc
|OPERATION {op = '+';currentOp = '+';} PLUS EXPRESSION 
|OPERATION {op = '+';currentOp = '-';} MINUS EXPRESSION   
|OPERATION {op = '*';currentOp = '/';} DIV EXPRESSION 
|OPERATION {op = '*';currentOp = '*';} MULT EXPRESSION 



// Expression pour dire value ou idf
EXPRESSION:
VALUES
|IDF {
        strcpy(assignType,tp);
        verif($1);
        if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
            SendToCalculator(atof(searchTS($1)->value),currentOp);
        }else{
                printf("\n ERREUR SYNTAXIQUE: Le type assigne a %s  a la ligne %d colonne %d n'est pas le bon !! \n", $1, yylineo, col);}}



// Tous les comparateur possibles
cmp:
EG|SUP|LES|SUPE|LESE|NOTEG

// Les operants
AFFOP:
AddAff {
            s = 1;
            verif($1);
            s = 0; 
            op = '+';
            currentOp = '+';} 
|MinAff {
            s = 1; 
            verif($1);
            s = 0; 
            op = '+';
            currentOp = '-';} 
|MulAff {
            s = 1;
            verif($1);
            s = 0; 
            op = '*';
            currentOp = '*';} 
|DivAff {   
            s = 1;
            verif($1);
            s = 0; 
            op = '*';
            currentOp = '/';}

DecInc:
INCR {s = 1; verif($1);s = 0; op = '+';currentOp = '+';}|DECR {s = 1; verif($1);s = 0; op = '+';currentOp = '-';}



// Tous les types possibles
type:
FLOAT {strcpy(currentType,"float");}
|INT {strcpy(currentType,"int");}
|BOOL {strcpy(currentType,"bool");}
|CHAR {strcpy(currentType,"char");}
|STRING {strcpy(currentType,"string");}



// Toute les valeurs possibles
VALUES:
neg_FLOAT_val {
                strcpy(assignType,"float");
                SendToCalculator($1,currentOp);
                sprintf(assignValue,"%f",$1);}

|FLOAT_val {
                strcpy(assignType,"float");
                SendToCalculator($1,currentOp);
                sprintf(assignValue,"%f",$1);}

|_TRUE {
                strcpy(assignType,"bool");
                strcpy(assignValue,$1);}

|_FALSE{
                strcpy(assignType,"bool");
                strcpy(assignValue,$1);}

|neg_INT_val {
                strcpy(assignType,"int");
                SendToCalculator($1,currentOp);
                sprintf(assignValue,"%d",$1);}

|INT_val {
                strcpy(assignType,"int");
                SendToCalculator($1,currentOp); 
                sprintf(assignValue,"%d",$1);}

|STRING_val {
                strcpy(assignType,"string");
                strcpy(assignValue,$1);}

|CHAR_val{
                strcpy(assignType,"char");
                strcpy(assignValue,$1);}



// Le printf
STMT:
PRINTF OPAR STRING_val SEP IDF CPAR SEMI
|PRINTF OPAR STRING_val CPAR SEMI

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

