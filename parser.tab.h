
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CHAR = 258,
     STRING = 259,
     CONST = 260,
     BOOL = 261,
     INT = 262,
     FLOAT = 263,
     IDF = 264,
     PLUS = 265,
     MINUS = 266,
     MULT = 267,
     DIV = 268,
     EG = 269,
     SUP = 270,
     LES = 271,
     LESE = 272,
     SUPE = 273,
     AND = 274,
     OR = 275,
     INCR = 276,
     DECR = 277,
     ASSIG = 278,
     AddAff = 279,
     MulAff = 280,
     MinAff = 281,
     DivAff = 282,
     NOT = 283,
     _TRUE = 284,
     _FALSE = 285,
     NOTEG = 286,
     BEG = 287,
     END = 288,
     RETURN = 289,
     SEMI = 290,
     EOL = 291,
     SEP = 292,
     OPEP = 293,
     CLOP = 294,
     DeuxPoints = 295,
     OPECurlBrak = 296,
     CLOCurlBrak = 297,
     FOR = 298,
     IF = 299,
     WHILE = 300,
     DO = 301,
     ELSE = 302,
     BREAK = 303,
     CONTINUE = 304,
     SWITCH = 305,
     CASE = 306,
     DEFAULT = 307,
     PRINTF = 308,
     neg_FLOAT_val = 309,
     FLOAT_val = 310,
     BOOL_val = 311,
     neg_INT_val = 312,
     INT_val = 313,
     STRING_val = 314,
     CHAR_val = 315,
     FORMAT_STRING = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 7 ".\\parser.y"

    int num;
    char* sym;



/* Line 1676 of yacc.c  */
#line 120 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


