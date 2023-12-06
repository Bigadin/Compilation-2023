#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define  COUNT  5 // Variable pour le print de l'arbre

// Creation du type table de symbole
typedef struct TS{
    char nom[11];
    char type[20];
    int Isconst;
    char value[30];
}TS;

// Creation du type node pour l'arbre binaire
typedef struct Node{
    float val;
    struct Node* mult;
    struct Node* add;

}Node;


TS TS_tab[1000]; //Declaration de la table des symboles
// Set up de la table
int yylineo = 1; // Variable de la ligne actuelle
int col = 1; // Variable de la colonne actuelle
char currentType[20]; // Contient le type actuel 
int currentConst = 0; // Si = 0 alors la variable n'est pas une contante sinon elle l'est
int lastTSindex; // Le dernier index dans la table de symbole
char assignType[20]; // Contient le type de la valeur actuelle
char assignValue[20] = "0"; // Contient la valeur de l'idf actuelle
char tp[20]; // Contient le type attribuer a un idf dans la table des symboles


// Set up de l'arbre
char op = '+'; // Operation par default de notre arbre binaire 


int part_index = 0; // Si = 0 on est dans la partie declaration sinon on est dans la partie affectation
int s  = 0; // Variable qui indique qu'on fait une affectation (pour ne pas avoir de problem lors de l'utilisation d'une constante ou bien ne pas affecter lors de comparaison)



// Chercher pas idf dans la table de symboles
TS* searchTS(char name[11]){
    for(int i = 0;i <1000 && strcmp(TS_tab[i].nom,""); i++){

        if (!strcmp(name,TS_tab[i].nom))
        {
            strcpy(tp,TS_tab[i].type);
            return &TS_tab[i];
        }

    }
    
    return NULL;    
}


// Inserer les donnees de la table de symbole a partir de flex
void insertTS_flex(char nom[11]){
        if(searchTS(nom) == NULL){
            strcpy(TS_tab[lastTSindex ].nom,nom); 
            strcpy(TS_tab[lastTSindex ].type,"/"); 
            TS_tab[lastTSindex ].Isconst = 0; 
            lastTSindex++;
        }
}


// Faire les verification dans bison et re-inserer les donnees dans la table des symboles
void insertTS(char nom[11],char type[20],int Isconst,char assignType[20],char assignValue[20]){

    if(part_index == 0){
        TS* theActualIDF = searchTS(nom); 
        if (!strcmp(theActualIDF->type,"/")) // Tant que l'idf n'est pas non declarer
        {
            strcpy(theActualIDF->type,type); 
            strcpy(theActualIDF->value,assignValue); 
            
            theActualIDF->Isconst = Isconst; 
            currentConst = 0;

        }
        else{
            printf("\n ERREUR SEMENTIQUE: Double declaration de la variable %s a la ligne %d colonne %d  \n",nom,yylineo,col);
            
        }    

    }
    verif(nom);
}


// Verifier les differentes erreurs symentique
void verif (char nom[11]){
        if(part_index == 1){
        if(!strcmp(searchTS(nom)->type,"/")){
            printf("\n ERREUR SEMENTIQUE: la variable %s n'est pas declarer ligne %d colonne %d\n",nom,yylineo,col);
            return;
        }
        if(searchTS(nom) == NULL) {
            printf("\n ERREUR SEMENTIQUE: La variable %s n'existe pas a la ligne %d colonne %d  \n",nom,yylineo,col);
            return;
        }
        if(searchTS(nom)->Isconst == 1 && s == 1){
            printf("\n ERREUR SEMENTIQUE: Vous modifiez la variable %s qui est une constante a la ligne %d colonne %d  \n",nom,yylineo,col);
            return;
        }
        char _affectationType[20];
        strcpy(_affectationType,searchTS(nom)->type);
        // f et i c'est pour dire qu'un float peut etre un int 
        int f = strcmp(_affectationType,"float");
        int i = strcmp(assignType,"int");
        if(strcmp(_affectationType,assignType) && f != i){
            printf("\n ERREUR SEMENTIQUE: la valeur affecte a %s n'est pas du meme type ligne %d colonne %d\n     %s :-> %s",nom,yylineo,col,_affectationType,assignType);
            return;
        }
        if(s==1)
        strcpy(searchTS(nom)->value,assignValue);
    }
}

// Affichage de la table des symboles
void afficherTS(){
    printf("\n\t******************** Table des symboles: **********************\n");
    printf("\t ______________________________________________________________\n");
    printf("\t| NomEntite | CodeEntite | TypeEntite | Constant | Value       |\n");
    printf("\t ______________________________________________________________\n");
    for(int i = 0;i <1000 && strcmp(TS_tab[i].nom,""); i++){
        printf("\t|%10s |     IDF    |%10s  |%9d |%12s |\n",TS_tab[i].nom,TS_tab[i].type,TS_tab[i].Isconst,TS_tab[i].value);
    }
    printf("\t ______________________________________________________________\n");
}


// Creation de l'arbre
void createNode(Node** r, float data) {
    *r = (Node*)malloc(sizeof(Node));
    if (*r != NULL) {
        (*r)->val = data;
        (*r)->add = NULL;
        (*r)->mult = NULL;
    }
}


// Inserer les donnees dans la table
Node* insert( Node** r, float data) {
    
    if (*r == NULL) {
        createNode(r,data);
        return *r;
    }
    
    if((*r)->add == NULL && (op == '*'|| op == '/')){
        (*r)->mult = insert(&((*r)->mult),data);
    }
    else if (op == '+') {

        (*r)->add = insert(&((*r)->add), data);

    } 
    else if(op == '*'){
        (*r)->add = insert(&((*r)->add),data);
    
    }
      return *r;

}


// Evaluation des expressions
float SumArbre(Node** root) {
    if ((*root) == NULL) {
        return 0;
    }

    float droite = SumArbre(&(*root)->mult); 
    float gauche = SumArbre(&(*root)->add);

    if ((*root)->mult != NULL) {
        // Multiplication du plus à droite avec celui d'avant
        return droite * ((*root)->val) + gauche;
    } else {
        // Addition du plus à gauche avec la multiplication d'avant
        return gauche + ((*root)->val);
    }
}


// Afficher l'arbre
void printTree(struct Node* root, int space) {
    if (root == NULL) {
        return;
    }

    // Augmenter la distance entre les niveaux
    space += COUNT;
    // Traiter d'abord l'enfant droit
    printTree(root->mult, space);
 
    // Imprimer le nœud actuel après l'espace
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%f\n", root->val);
    // Traiter l'enfant gauche
    printTree(root->add, space);
}

void printtree(struct Node* root)
{
    if(root != NULL){
        printf("\n***************** Arbre d'evaluation des expressions: *****************\n");
        printTree(root,0);
        printf("_______________________________________________________________________\n");
    }
}


// Vider l'arbre
void deleteTree(Node** root) {

    if (*root == NULL) {
        printf("\n");
        return;
    }

    deleteTree(&(*root)->add);
    deleteTree(&(*root)->mult);
    *root = NULL;

    free(*root);   
}

