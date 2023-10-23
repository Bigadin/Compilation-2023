/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_NIRVANAK_DOWNLOADS_COMPIL_TEST_COMPIL_SRC_PARSER_H_INCLUDED
# define YY_YY_HOME_NIRVANAK_DOWNLOADS_COMPIL_TEST_COMPIL_SRC_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    INT_VAL = 258,                 /* INT_VAL  */
    NEG_INT_VAL = 259,             /* NEG_INT_VAL  */
    FLOAT_VAL = 260,               /* FLOAT_VAL  */
    NEG_FLOAT_VAL = 261,           /* NEG_FLOAT_VAL  */
    BOOL_VAL = 262,                /* BOOL_VAL  */
    IDENTIFIER = 263,              /* IDENTIFIER  */
    ADD = 264,                     /* ADD  */
    DIV = 265,                     /* DIV  */
    MULT = 266,                    /* MULT  */
    SUB = 267,                     /* SUB  */
    LANG = 268,                    /* LANG  */
    VAR = 269,                     /* VAR  */
    INT = 270,                     /* INT  */
    FLOAT = 271,                   /* FLOAT  */
    CONST = 272,                   /* CONST  */
    BOOL = 273,                    /* BOOL  */
    START = 274,                   /* START  */
    END = 275,                     /* END  */
    IF = 276,                      /* IF  */
    WHILE = 277,                   /* WHILE  */
    RET = 278,                     /* RET  */
    FUNC = 279,                    /* FUNC  */
    ASSIGN = 280,                  /* ASSIGN  */
    EQUAL = 281,                   /* EQUAL  */
    GREATER = 282,                 /* GREATER  */
    GREATER_EQ = 283,              /* GREATER_EQ  */
    LESS = 284,                    /* LESS  */
    LESS_EQ = 285,                 /* LESS_EQ  */
    INSTR_END = 286,               /* INSTR_END  */
    SEP = 287,                     /* SEP  */
    TYPE_SEP = 288,                /* TYPE_SEP  */
    LEFT_PAR = 289,                /* LEFT_PAR  */
    RIGHT_PAR = 290                /* RIGHT_PAR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "/home/nirvanak/Downloads/compil/test_Compil/src/parser.y"

    int u_val_int;
    float u_val_float;
    float u_val_bool;
    char* u_idf;
    char u_op;

#line 107 "/home/nirvanak/Downloads/compil/test_Compil/src/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_HOME_NIRVANAK_DOWNLOADS_COMPIL_TEST_COMPIL_SRC_PARSER_H_INCLUDED  */
