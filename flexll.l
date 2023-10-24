%{
#include <stdio.h>
#include "parser.tab.h"
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
space " "
char ['].[']
string ["].+["]  
const [+ -]?({Nombre}+|{Nombre}+"."{Nombre}+)
idf {Lettre}({underscore}?({Lettre}|{Chiffre})|({Lettre}|{Chiffre})*)*

%%
{char} {printf("char ::: %s\n",yytext); return CHAR;}
{string} {printf("string ::: %s\n",yytext); return STRING;}
{const} {printf("c'est une Const ::: %s \n",yytext);return CONST;}
{idf} {printf("l'id est ::: %s\n",yytext);return IDF;}
"+" {return PLUS;}  
"-" {return MINUS;}  
"*" {return MULT;}  
"/" {return DIV;}  
"1"|"vrai"|"true" {return VRAI;}  
"0"|"faux"|"false" {return FAUX;}  
"=" {return EG;}  
"<" {return LES;}  
">" {return SUP;}  
"<=" {return LESE;}  
">=" {return SUPE;}  
"&&" {return AND;}
"||" {return OR;}
"!=" {return NOTEG;}
"++" {return INCR;}
"BEGIN" {return BEG;}
"END" {return END;}
"float" {return FLOAT;}
"bool" {return BOOL;}
"int" {return INT;}
";" {return SEMI;}
[ \t]  {  }
[\n] { line++; return EOL; }
. { printf("Erreur Lexical :::: %s a la ligne ::: %d\n",yytext,line); error = true; return yytext[0]; }

%%


/*
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
*/