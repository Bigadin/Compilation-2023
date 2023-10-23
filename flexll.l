%{
#include <stdio.h>
typedef enum { false, true } bool;
%}

%option noyywrap

%{
    int line = 1;
    bool error = false;
%}

Chiffre [0-9]
Lettre [a-zA-Z]
LettreM [A-Z]
Nombre [1-9][0-9]*|0
underscore "_"
char ["].?["]
string ["]{char}+["]
const [+ -]?({Nombre}+|{Nombre}+"."{Nombre}+)
bool "1"|"0"|"vrai"|"faux"|"true"|"false"
IDF {LettreM}({underscore}?({Lettre}|{Chiffre})|({Lettre}|{Chiffre})*)*
%%
{char} {printf("char ::: %s\n",yytext);}
{string} {printf("string ::: %s\n",yytext);}
{const} {printf("c'est une Const ::: %s \n",yytext); }
{IDF}{1,9} {printf("l'id est ::: %s\n",yytext);}



[ \t]  {  }
[\n] { line++; }
. { printf("Erreur Lexical :::: %s a la ligne ::: %d\n",yytext,line); error = true; return yytext[0]; }

%%

int main(int argc, char *argv[]) {
     if (argc < 2) {
        printf("Usage: %s filename\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }
    if(error){
        printf("Erreur lexical a la ligne %d\n",line);
    }
        printf("Processing file: %s\n", argv[1]); // Print the name of the file being processed
    yyin = file; // yyin is a global variable provided by Flex to change the input source
    yylex(); // this will call the lexer on the provided file

    fclose(file);
    return 0;
}
