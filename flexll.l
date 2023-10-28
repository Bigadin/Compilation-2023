%{
#include <stdio.h>
#include "parser.tab.h"
typedef enum { false, true } bool;
int line = 1;
bool error = false;
%}

%option noyywrap

Chiffre [0-9]
Lettre [a-zA-Z]
LettreM [A-Z]
Nombre [1-9][0-9]*|0
Underscore "_"
Neg "-"
Space " "
deb {"/*" | "{"}
ffin {"*/" | "}"}

int {Neg space}?{Nombre}+
float {Neg space}?({Nombre}+|{Nombre}+"."{Nombre}+)
char ['][^'][']
string ["][^"]["]  
const {Neg space}?({Nombre}+|{Nombre}+"."{Nombre}+)

idf {Lettre}({underscore}?({Lettre}|{Chiffre})*)*
commentaire  ({"/*"} ([^"/*"]|\n)*?{"*/"})|({"{"} ([^"/*"]|\n)*?{"}"})

%%
"BEGIN" {return BEG;}
"END" {return END;}
"return" {return RETURN;}
"for" {return FOR;}
"if" {return IF;}
"while" {return WHILE;}
"do" {return DO;}
"float" {return FLOAT;}
{float} {if(yytext[0] == '-'){return neg_FLOAT_val;} return FLOAT_val;}
"bool" {return BOOL;}
{bool} {return BOOL_val;}
"int" {return INT;}
{int} {if(yytext[0] == '-'){return neg_INT_val;} return INT_val;}
"const" {return CONST;}
{const} {printf("c'est une Const ::: %s \n",yytext);if(yytext[0] == '-'){return neg_CONST_val;};return CONST-val;}
"string" {return STRING;}
{string} {printf("string ::: %s\n",yytext); return STRING_val;}
"char" {return CHAR;}
{char} {printf("char ::: %s\n",yytext); return CHAR_val;}
{idf} {printf("l'id est ::: %s\n",yytext);if(yyleng>10){printf("(%s) : Identificateur trop long", yytext);}return IDF;}
"=" {return ASSIG;}
"+" {return PLUS;}  
"-" {return MINUS;}  
"*" {return MULT;}  
"/" {return DIV;}   
"=="|"<>" {return EG;}  
"<" {return LES;}  
">" {return SUP;}  
"<=" {return LESE;}  
">=" {return SUPE;}  
"&&" {return AND;}
"||" {return OR;}
"!=" {return NOTEG;}
"++" {return INCR;}
"--" {return DECR;}
";" {return SEMI;}
"," {return SEP};
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