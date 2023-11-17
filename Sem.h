#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct TS{
    char nom[11];
    char type[20];
    int Isconst;

}TS;
int tab_line_index;// c'est le compteur pour passer a la prochaine ligne du TS
int TS_INDEX = 0;
int lastTSindex;
TS TS_tab[100];

int part_index = 0;

// set up de la table

char currentType[20];
int currentConst;

int searchTS(char name[11]){
    for(int i = 0;i <100; i++){

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
    printf("\t| NomEntite | TypeEntite | Constant |\n");
    printf("________________________________________________________________________________\n");
    int i = 0;
    for(int i = 0;i <100 && strcmp(TS_tab[i].nom,""); i++){
        printf("\t|%10s |%10s | %9d  \n",TS_tab[i].nom,TS_tab[i].type,TS_tab[i].Isconst);

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
void insertTS(char nom[11],char type[20],int Isconst){
    if(part_index == 0){
        if (searchTS(nom) == -1)
        {
        // on check le type de la valeur
        strcpy(TS_tab[lastTSindex ].nom,nom); 
        strcpy(TS_tab[lastTSindex ].type,type); 
        TS_tab[lastTSindex ].Isconst = Isconst; 
        lastTSindex++;
        currentConst = 0;
        
    
        }

    }

    
}
