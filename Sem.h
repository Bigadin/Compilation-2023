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
char assignType[20];
TS TS_tab[1000];

int part_index = 0;

// set up de la table
int yylineo = 1;
int col = 1;
char currentType[20];
int currentConst = 0;

TS* searchTS(char name[11]){
    for(int i = 0;i <1000 && strcmp(TS_tab[i].nom,""); i++){

        if (!strcmp(name,TS_tab[i].nom))
        {
            return &TS_tab[i];
        }

    }
    
    return NULL;    
}
void afficherIDF(){
    printf("\n/***************Table des symboles ******************/\n");
    printf("________________________________________________________________________________\n");
    printf("\t| NomEntite | TypeEntite | Constant |\n");
    printf("________________________________________________________________________________\n");
    for(int i = 0;i <1000 && strcmp(TS_tab[i].nom,""); i++){
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
void insertTS(char nom[11],char type[20],int Isconst,char assignType[20]){

   

    if(part_index == 0){
        if (searchTS(nom) == NULL)
        {
            
            if(!strcmp(type,assignType) || (assignType == "int" && type == "float")){

                strcpy(TS_tab[lastTSindex ].nom,nom); 
                strcpy(TS_tab[lastTSindex ].type,type); 
                TS_tab[lastTSindex ].Isconst = Isconst; 
                lastTSindex++;
                currentConst = 0;
            }
            else{
                printf("\n ERREUR : la valeur affecte a %s n'est pas du meme type ligne %d colonne %d\n",nom,yylineo,col);
                return;
            }
        
    
        }
        else{
            printf("\n ERREUR : Double declaration de la variable %s a la ligne %d colonne %d  \n",nom,yylineo,col);
            
        }

    }
    if(part_index == 1){
        if(searchTS(nom) == NULL) {
            printf("\n ERREUR : La variable %s n'est pas declarée a la ligne %d colonne %d  \n",nom,yylineo,col);
            return;
        }
        if(searchTS(nom)->Isconst == 1){
            printf("\n ERREUR : Vous modifiez la variable %s qui est une constante a la ligne %d colonne %d  \n",nom,yylineo,col);
            return;
        }
         char _affectationType[20];
        strcpy(_affectationType,searchTS(nom)->type); 
        if(strcmp(_affectationType,assignType) ){
            printf("\n ERREUR : la valeur affecte a %s n'est pas du meme type ligne %d colonne %d\n     %s :-> %s",nom,yylineo,col,_affectationType,assignType);
            return;
        }
    }
}


