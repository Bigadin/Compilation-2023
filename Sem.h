#include <stdio.h>
#include <stdlib.h>

typedef struct idf{
    char* nom;
    char* type;

}idf;
int lastIdfindex;
idf idf_tab[100];

int searchIdf(idf var){
    for(int i = 0;i < 100; i++){
        if (idf_tab[i].nom == var.nom)
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