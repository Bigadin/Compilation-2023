%{
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "parser.tab.h"


int nline = 1;
bool error = false;

extern YYSTYPE yylval;
%}

%option noyywrap
%option yylineno

Chiffre [0-9]
Lettre [a-zA-Z]
LettreM [A-Z]
Nombre [1-9][0-9]*|0
Underscore "_"
Neg "-"
Space " "
deb {"/*" | "{"}
ffin {"*/" | "}"}

int {Neg}?{Nombre}+
float {Neg}?({Nombre}+|{Nombre}+"."{Nombre}+)
char ['][^'][']
string ["][^"]*["]  

idf {LettreM}({Underscore}?({Lettre}|{Chiffre})*)*
commentaire  ({"/*"} ([^"/*"]|\n)*?{"*/"})|({"{"} ([^"/*"]|\n)*?{"}"})
prints \"[^"]*\" 

%%
"BEGIN" {return BEG;}
"END" {return END;}
"printf" {return PRINTF;}
"return" {return RETURN;}
"for" {return FOR;}
"if" {return IF;}
"else" {return ELSE;}
"while" {return WHILE;}
"do" {return DO;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"switch" {return SWITCH;}
"case" {return CASE;}
"default" {return DEFAULT;}
"bool" {return BOOL;}
"vrai"|"true" {return _TRUE;}
"faux"|"false" {return _FALSE;} 
"int" {return INT;}
{int} {if(yytext[0] == '-'){yylval.num = atoi(yytext); return neg_INT_val;}yylval.num = atoi(yytext); return INT_val;}
"float" {return FLOAT;}
{float} {if(yytext[0] == '-'){yylval.num = atoi(yytext); return neg_FLOAT_val;} yylval.num = atoi(yytext); return FLOAT_val;}
"const" {return CONST;}
"string" {return STRING;}
{string} { yylval.num = strdup(yytext); return STRING_val;}
"char" {return CHAR;}
{char} { yylval.num = strdup(yytext); return CHAR_val;}
{idf} {if(yyleng>10){printf("(%s) : Identificateur trop long", yytext);}yylval.sym = strdup(yytext);return IDF;}
{prints} { yylval.num = strdup(yytext); return FORMAT_STRING;}
"=" {return ASSIG;}
"+" {return PLUS;}
"+=" {return AddAff;}  
"-" {return MINUS;} 
"-=" {return MinAff;} 
"*" {return MULT;}  
"*=" {return MulAff;}
"/" {return DIV;}   
"/=" {return DivAff;}
"=="|"<>" {return EG;}  
"<" {return LES;}  
">" {return SUP;}  
"<=" {return LESE;}  
">=" {return SUPE;}  
"&&" {return AND;}
"||" {return OR;}
"!=" {return NOTEG;}
"!" {return NOT;}
"++" {return INCR;}
"--" {return DECR;}
";" {return SEMI;}
"," {return SEP;}
"(" {return OPEP;}
")" {return CLOP;}
":" {return DeuxPoints;}
"{" {return OPECurlBrak;}
"}" {return CLOCurlBrak;}
[ \t]  {  }
[\n] {printf("%d ",nline); nline++ ; return EOL; }
. { printf("Erreur Lexical :::: %s a la ligne ::: %d\n",yytext,nline); error = true; return yytext[0]; }

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
        printf("Erreur lexical a la ligne %d\n",nline);
    }
        printf("Processing file: %s\n", argv[1]); // Print the name of the file being processed
    yyin = file; // yyin is a global variable provided by Flex to change the input source
    yylex(); // this will call the lexer on the provided file
    fclose(file);
    return 0;
}
*/