%{

%}


%union {
    int num;
    char sym;
}

%token EOL
%token CHAR
%token STRING
%token CONST
%token IDF
%token PLUS   
%token MINUS   
%token MULT   
%token DIV
%token VRAI  
%token FAUX 
%token EG 
%token SUP 
%token LES    
%token LESE    
%token SUPE
%token AND  
%token OR
%token NOTEG
%token INCR
%token BEG
%token BOOL
%token INT
%token FLOAT
%token SEMI
%token END



%%


input:
|line input{printf(" \n\n\n  aaaaaaaaaaaaaaaa \n\n\n\n");}
;

line:
 DECLARATION  {printf(" c'est une declaration \n");}|AFFECTATION  {printf(" c'est une affectation \n");}
|EOL
;

DECLARATION:
 type IDF EG CONST SEMI
|type IDF SEMI
|type IDF EG IDF SEMI

AFFECTATION:
IDF EG OPERATION SEMI
|IDF EG CONST SEMI
|IDF EG IDF SEMI

type:
FLOAT|INT|BOOL

OPERATION:
OPERATION Opp OPERATION 
|CONST
|IDF


Opp:
PLUS|MINUS|MULT|DIV|INCR

%%

int main(int argc, char *argv[]) {
    yyparse(); // this will call the lexer on the provided file
    return 0;
}

int yyerror(char* s){
    printf("%s\n",s);
    return 0;
}

