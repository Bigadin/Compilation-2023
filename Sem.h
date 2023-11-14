#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
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
=======
float calcule[4];
int operationIndex = 0;
//


// utiliser un arbre pour la priorité

void OperationCalcule(float value,int index){
    switch (index)
    {
    case 0:
        calcule[index]+= value;
        break;
    case 1:
        calcule[index]-= value;
        break;
    case 2:
        calcule[index] *= value;
        break;
    case 3:
        calcule[index] /= value;
        break;
    
    default:
        break;
    }
}

void returnCalcule(){
    

>>>>>>> Lily
}