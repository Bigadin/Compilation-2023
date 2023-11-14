
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
     NOT = 279,
     AddAff = 280,
     MinAff = 281,
     MulAff = 282,
     DivAff = 283,
     _TRUE = 284,
     _FALSE = 285,
     NOTEG = 286,
     BEG = 287,
     END = 288,
     RETURN = 289,
     SEMI = 290,
     SEP = 291,
     DeuxPoints = 292,
     FOR = 293,
     IF = 294,
     WHILE = 295,
     DO = 296,
     OPAR = 297,
     CPAR = 298,
     OPEN = 299,
     CLOSE = 300,
     ELSE = 301,
     BREAK = 302,
     DEFAULT = 303,
     CASE = 304,
     SWITCH = 305,
     CONTINUE = 306,
     PRINTF = 307,
     SBRA = 308,
     CBRA = 309,
     neg_FLOAT_val = 310,
     FLOAT_val = 311,
     BOOL_val = 312,
     neg_INT_val = 313,
     INT_val = 314,
     STRING_val = 315,
     CHAR_val = 316,
     FORMAT_STRING = 317
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 22 "parser.y"
 
int num;
char* sym;



/* Line 1676 of yacc.c  */
#line 121 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


