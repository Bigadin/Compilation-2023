/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDF = 258,
    CHAR = 259,
    STRING = 260,
    CONST = 261,
    BOOL = 262,
    INT = 263,
    FLOAT = 264,
    MINUS = 265,
    MULT = 266,
    DIV = 267,
    EG = 268,
    SUP = 269,
    LES = 270,
    LESE = 271,
    SUPE = 272,
    AND = 273,
    NOTEG = 274,
    OR = 275,
    INCR = 276,
    DECR = 277,
    ASSIG = 278,
    NOT = 279,
    AddAff = 280,
    MinAff = 281,
    MulAff = 282,
    DivAff = 283,
    BEG = 284,
    END = 285,
    RETURN = 286,
    SEMI = 287,
    SEP = 288,
    DeuxPoints = 289,
    SBRA = 290,
    CBRA = 291,
    FOR = 292,
    IF = 293,
    WHILE = 294,
    DO = 295,
    OPAR = 296,
    CPAR = 297,
    OPEN = 298,
    CLOSE = 299,
    ELSE = 300,
    BREAK = 301,
    DEFAULT = 302,
    CASE = 303,
    SWITCH = 304,
    CONTINUE = 305,
    PRINTF = 306,
    neg_FLOAT_val = 307,
    FLOAT_val = 308,
    BOOL_val = 309,
    neg_INT_val = 310,
    INT_val = 311,
    STRING_val = 312,
    CHAR_val = 313,
    _TRUE = 314,
    _FALSE = 315,
    PLUS = 316
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 51 "parser.y"

    
int num;
float real;
char* sym;

#line 126 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
