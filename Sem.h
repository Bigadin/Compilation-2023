#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct TS{
    char nom[11];
    char type[20];
    int Isconst;
    char value[20];

}TS;
int tab_line_index;// c'est le compteur pour passer a la prochaine ligne du TS
int TS_INDEX = 0;
int lastTSindex;
TS TS_tab[1000];

TS ts_tab[1000];
  
int part_index = 0;

// set up de la table
int yylineo = 0;
int col = 0;
char currentType[20];
char currentValue[20];
int currentConst;
bool isEndOfLine = 0;
bool beg = 0;

int searchTS(char name[11]){
    for(int i = 0;i <1000 && strcmp(TS_tab[i].nom,""); i++){

        if (!strcmp(name,TS_tab[i].nom))
        {
            return 1;
        }

    }
    
    return -1;    
}
void afficherIDF(){
    printf("\n/***************Table des symboles ******************/\n");
    printf("________________________________________________________________________________\n");
    printf("\t| NomEntite | TypeEntite | Constant | Value\n");
    printf("________________________________________________________________________________\n");
    int i = 0;
    for(int i = 0;i <1000 && strcmp(TS_tab[i].nom,""); i++){
        printf("\t|%10s |%10s | %9d | %9s \n",TS_tab[i].nom,TS_tab[i].type,TS_tab[i].Isconst,TS_tab[i].value);

    }
}

void Check(){
    if(tab_line_index > 3){
        TS_INDEX++;
    }else if(tab_line_index == 3){
        printf("\n    TYPE :::: %s  ",TS_tab[TS_INDEX].type);
        printf("\n    IDF :::: %s  ",TS_tab[TS_INDEX].nom);
        printf("\n    CONST :::: %d  ",TS_tab[TS_INDEX].Isconst);

    }
    
}
void insertTS(char nom[11],char type[20],int Isconst, char value[20]){
    if(part_index == 0){
        if (searchTS(nom) == -1)
        {
        // on check le type de la valeur
        strcpy(TS_tab[lastTSindex ].nom,nom); 
        strcpy(TS_tab[lastTSindex ].type,type); 
        TS_tab[lastTSindex ].Isconst = Isconst; 
        strcpy(TS_tab[lastTSindex].value,value);
        lastTSindex++;
        currentConst = 0;
        currentValue[0]=0;
        
        
    
        }
        else{
            printf("\n ERREUR SEMENTIQUE : Double declaration de la variable %s a la ligne %d colonne %d  \n",nom,yylineo,col);
            
        }

    } 
}

void Var_non_dec (char var[11])
{
    if((searchTS(var) == -1) && part_index == 1) 
        printf("\n ERREUR SEMENTIQUE : Variable %s non declarer a la line %d colonne %d\n",var, yylineo, col);
}

void mettre_a_jour(char var[11], char value[20])
{
    if(part_index == 1)
    {
        for(int i = 0;i <1000 && strcmp(TS_tab[i].nom,""); i++){
            
            if(strcmp(TS_tab[i].nom, var) && TS_tab[i].Isconst != 1){
                strcpy(TS_tab[i].value ,value);
            }
            if(TS_tab[i].Isconst == 1 && strcpy(TS_tab[i].value ,value)){
                printf("ERREUR SEMENTIQUE changement de valeur d'une constante %s a la ligne %d colenne %d\n", var, yylineo, col);
            }
        }
    }
}

void insertts(char nom[11],char type[20],int Isconst, char value[20]){
    if(part_index == 0){
        if(isEndOfLine == 0)
        {
            for(int i = 0;i <1000 && strcmp(ts_tab[i].nom,""); i++){
                
                strcpy(ts_tab[lastTSindex ].nom,nom); 
                strcpy(ts_tab[lastTSindex ].type,type); 
                ts_tab[lastTSindex ].Isconst = Isconst; 
                strcpy(ts_tab[lastTSindex].value,value);
                lastTSindex++;
            }
        }
    }
}

void afficherts(){

    printf("\n/***************Table des symboles 2 ******************/\n");
    printf("________________________________________________________________________________\n");
    printf("\t| NomEntite | TypeEntite | Constant | Value\n");
    printf("________________________________________________________________________________\n");
    int i = 0;
    for(int i = 0;i <1000 && strcmp(ts_tab[i].nom,""); i++){
        printf("\t|%10s |%10s | %9d | %9s \n",ts_tab[i].nom,ts_tab[i].type,ts_tab[i].Isconst,ts_tab[i].value);

    }
}