%{
#include <stdlib.h>
#include <stdio.h>
#include "parser.tab.h"

extern yylineo;
extern int col;
extern LastLeng;
extern int int_value;
extern float float_value;
extern char string_value[11];

// Calculer la ligne et la colonne actuelle
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

int {Neg}?{Nombre}+
float {Neg}?{Nombre}+\.{Nombre}+
char ['][^'][']
string ["][^"]+["]  

idf {LettreM}({Underscore}?({Lettre}|{Chiffre})*)*
commentaire "/*"[^/*]*"*/" 

%%
"BEGIN" {
    sendInformation();
    return BEG;}

"END" {
    sendInformation();
    return END;}

"return" {
    sendInformation();
    return RETURN;}

"for" {
    sendInformation();
    return FOR;}

"if" {
    sendInformation();
    return IF;}

"else" {
    sendInformation();
    return ELSE;}
    
"while" {
    sendInformation();
    return WHILE;}

"break" {
    sendInformation();
    return BREAK;}

"continue" {
    sendInformation();
    return CONTINUE;}

"switch" {
    sendInformation();
    return SWITCH;}

"case" {
    sendInformation();
    return CASE;}

"default" {
    sendInformation();
    return DEFAULT;}

"do" {
    sendInformation();
    return DO;}




"bool" {
    sendInformation();
    return BOOL;}

"vrai"|"true" {
    sendInformation();
    yylval.sym = yytext; 
    return _TRUE;}

"faux"|"false" {
    sendInformation();
    yylval.sym = yytext;
    return _FALSE;} 


"float" {
    sendInformation();
    return FLOAT;}

{float} {
    yylval.real = atof(yytext);
    sendInformation();
    float_value = yylval.real;
     
    if(yytext[0] == '-'){
         return neg_FLOAT_val;
    }
      return FLOAT_val;}


"int" {
    sendInformation();
    return INT;}

{int} {
     yylval.num = atoi(yytext);
     int_value = yylval.num;
     sendInformation();
     
     if(yytext[0] == '-'){
          return neg_INT_val;
        }
    return INT_val;}

"const" {
    sendInformation();
    return CONST;}

"string" {
    sendInformation();
    return STRING;}

{string} { 
    sendInformation();
    yylval.sym = strdup(yytext);
    
    return STRING_val;}

"char" {
    sendInformation();
    return CHAR;}

{char} {
    sendInformation();
    yylval.sym = strdup(yytext);
    
    return CHAR_val;}



"printf" {
    sendInformation();
    return PRINTF;} 



{commentaire} {
    sendInformation();}



{idf} {
    sendInformation();
    yylval.sym = strdup(yytext);  
    if(yyleng > 10){
    printf("(%s) : Identificateur trop long   ", yytext); //Verifier que l'IDF ne depasse pas 10 characters
    exit(1); 
    }
    else{
            printf(" %d ",yyleng);

        strcpy(string_value,yylval.sym) ;
        insertTS_flex(string_value);    // Inserer dans la table des symboles       

    }

    return IDF;}



"=" {
    sendInformation();
    return ASSIG;}

"+" {
    sendInformation();
    return PLUS;}  

"-" {
    sendInformation();
    return MINUS;}  

"*" {
    sendInformation();
    return MULT;}  

"/" {
    sendInformation();
    return DIV;}   

"=="|"<>" {
    sendInformation();
    return EG;} 

"+=" {
    sendInformation();
    return AddAff;}  

"-=" {
    sendInformation();
    return MinAff;} 

"*=" {
    sendInformation();
    return MulAff;}

"/=" {
    sendInformation();
    return DivAff;}

"<" {
    sendInformation();
    return LES;}  

">" {
    sendInformation();
    return SUP;}  

"<=" {
    sendInformation();
    return LESE;}  

">=" {
    sendInformation();
    return SUPE;}  

"&&" {
    sendInformation();
    return AND;}

"||" {
    sendInformation();
    return OR;}

"!=" {
    sendInformation();
    return NOTEG;}

"++" {
    sendInformation();
    return INCR;}

"--" {
    sendInformation();
    return DECR;}



"!" {
    sendInformation();
    return NOT;}

":" {
    sendInformation();
    return DeuxPoints;}

";" {
    sendInformation();
    return SEMI;}

"," {
    sendInformation();
    return SEP;}

"(" {
    sendInformation();
    return OPAR;}

")" {
    sendInformation();
    return CPAR;}

"{" {
    sendInformation();
    return OPEN;}

"}" {
    sendInformation();
    return CLOSE;}

"[" {
    sendInformation();
    return SBRA;}

"]" {
    sendInformation();
    return CBRA;}



[ \t]  { 
    sendInformation();}

[\n] { yylineo++ ;col = 0;}

. { printf("\nErreur Lexical : %s a la ligne : %d et colonne : %d\n",yytext,yylineo,col); exit(1);  return yytext[0]; }

%%               