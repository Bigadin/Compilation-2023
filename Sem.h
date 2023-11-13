#include <stdio.h>
#include <stdlib.h>

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
    

}