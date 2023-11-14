%{
#include <stdlib.h>
#include <stdio.h>
#include "Sem.h"
#include "parser.tab.h"
extern yylineo;
extern int col;
extern LastLeng;
extern float calcule;

extern YYSTYPE yylval;

//sending data

extern int int_value;
extern float float_value;
extern float string_value;

void sendInformation(){
    col = col + yyleng;
    LastLeng = yyleng;
}
%}

%option noyywrap
%option yylineno


Chiffre [0-9]
Lettre [a-zA-Z]
LettreM [A-Z]
Nombre [1-9][0-9]*|0
Underscore "_"
Neg "-"
deb {"/*" | "{"}
ffin {"*/" | "}"}
float {Neg}?{Nombre}+"."{Nombre}+
int {Neg}?{Nombre}+
char ['][^'][']
string ["][^"]+["]  

idf {Lettre}({Underscore}?({Lettre}|{Chiffre})*)*
commentaire  ({"/*"} ([^"/*"]|\n)*?{"*/"})|({"{"} ([^"/*"]|\n)*?{"}"})

%%
"BEGIN" {sendInformation();
        return BEG;}
"END" {sendInformation();
        return END;}
"return" {sendInformation();return RETURN;}
"for" {sendInformation();return FOR;}
"if" {sendInformation();return IF;}
"else" {sendInformation();return ELSE;}
"while" {sendInformation();return WHILE;}
"do" {sendInformation();return DO;}
"bool" {sendInformation();return BOOL;}
"vrai"|"true" {sendInformation();return _TRUE;}
"faux"|"false" {sendInformation();return _FALSE;} 
"float" {sendInformation();return FLOAT;}
{float} {
    yylval.real = atof(yytext);
    sendInformation();
    float_value = yylval.real;
     printf("\n FLOAT :=: %f",float_value);
    if(yytext[0] == '-'){
         return neg_FLOAT_val;
    }
      return FLOAT_val;
    }
"int" {sendInformation();return INT;}
{int} {
     yylval.num = atoi(yytext);
     int_value = yylval.num;
     sendInformation();
     printf("\n INT :=: %d",yylval);
     if(yytext[0] == '-'){
          return neg_INT_val;
        }
    return INT_val;
    }

"const" {sendInformation();return CONST;}
"string" {sendInformation();return STRING;}
{string} { 
    sendInformation();
    yylval.sym = strdup(yytext);
    printf("\n STRING :=: %s",yylval);
    return STRING_val;
    }
"char" {sendInformation();return CHAR;}
{char} {
    sendInformation();
    yylval.sym = strdup(yytext);
    printf("\n CHAR :=: %s",yylval);
    return CHAR_val;
    }
{idf} {
    sendInformation();
    if(yyleng>10){
    printf("(%s) : Identificateur trop long", yytext);
    }
    yylval.sym = strdup(yytext);
    printf("\n IDF :=: %s",yylval);
    return IDF;
    }
"=" {sendInformation();return ASSIG;}
"+" {sendInformation();return PLUS;}  
"-" {sendInformation();return MINUS;}  
"*" {sendInformation();return MULT;}  
"/" {sendInformation();return DIV;}   
"=="|"<>" {sendInformation();return EG;}  
"<" {sendInformation();return LES;}  
">" {sendInformation();return SUP;}  
"<=" {sendInformation();return LESE;}  
">=" {sendInformation();return SUPE;}  
"&&" {sendInformation();return AND;}
"||" {sendInformation();return OR;}
"!=" {sendInformation();return NOTEG;}
"++" {sendInformation();return INCR;}
"--" {sendInformation();return DECR;}
";" {
    sendInformation();
    return SEMI;
    }
"," {sendInformation();return SEP;}
"(" {sendInformation();return OPAR;}
")" {sendInformation();return CPAR;}
"{" {sendInformation();return OPEN;}
"}" {sendInformation();return CLOSE;}
[ \t]  { sendInformation(); }
[\n] { yylineo++ ;col = 0;}
. { printf("\nErreur Lexical : %s a la ligne : %d et colonne : %d\n",yytext,yylineo,col); return yytext[0]; }

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