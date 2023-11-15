#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct idf{
    char* nom;
    char* sym;
    char* type;
    bool Isconst;

}idf;
int lastIdfindex;
idf idf_tab[1000];

int searchIdf(idf name){
    for(int i = 0;i < sizeof(idf_tab)/sizeof(idf); i++){
        if (idf_tab[i].nom == name.nom)
        {
            return 1;
        }

    }
    return -1;    
}

int insertIdf(idf var){
    if(searchIdf(var) == -1){
        idf_tab[lastIdfindex + 1] = var; 
        return 1;
    }
    return -1;
}
