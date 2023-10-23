%{
    #include <string.h>
    #include <stdbool.h>
    #include "../inc/parser.h"
    #include "../inc/sym_table.h"
    int line_num = 1;
    int col_num = 1;
    
%}

%option noyywrap

num [0-9]
alpha [a-zA-Z]
alphanum {num}|{alpha}

int {num}+
neg_int "-"" "*{num}+ 

float {num}+\.{num}+
neg_float "-"" "*{num}+\.{num}+

bool "true"|"false"
idf {alpha}({alphanum}|_{alphanum})*
comment "{"[^}]*"}"


%%
LANGUAGE     return LANG;
function     return FUNC;
return       return RET;
VAR          return VAR;
BEGIN        return START;
END          return END;
CONST        return CONST;
if           return IF;
while        return WHILE;
BOOL         return BOOL;
{bool}       { if(strcmp("true", yytext)) yylval.u_val_bool=true; else  yylval.u_val_bool=false; return BOOL_VAL; }
INT          return INT;
{int}        { yylval.u_val_int = atoi(yytext); return INT_VAL; }
{neg_int}    { yylval.u_val_int = atoi(yytext); return NEG_INT_VAL; }
FLOAT        return FLOAT;
{float}      { yylval.u_val_float = atof(yytext);return FLOAT_VAL; }
{neg_float}  { yylval.u_val_float = atof(yytext);return NEG_FLOAT_VAL; }
{idf}        { if(yyleng > 12){printf("(%s) Identificateur trop long\n", yytext); exit(1);} else{ yylval.u_idf = strdup(yytext); return IDENTIFIER;} }
;            return INSTR_END;
,            return SEP;
:            return TYPE_SEP;
=            return ASSIGN;
(==|<>)      return EQUAL;
>            return GREATER;
>=           return GREATER_EQ;
"<"          return LESS;
"<="         return LESS_EQ;
"+"          { yylval.u_op = yytext[0]; }return ADD;
"-"          { yylval.u_op = yytext[0]; }return SUB;
"*"          { yylval.u_op = yytext[0]; }return MULT;
"/"          { yylval.u_op = yytext[0]; }return DIV;
"("          return LEFT_PAR;
")"          return RIGHT_PAR;
{comment}    { line_num += count_nl(yytext, yyleng);}
[ \t]
\n           line_num++;
.            printf("erreur a la ligne%d\n", line_num);
%%
