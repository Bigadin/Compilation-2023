
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include "Sem.h"
#define YYSTYPE float

int yylineo = 1; // les lignes
int col = 1; // les colonnes
int LastLeng =0; // le leng du dernier token trouvé
char* cal = 0;
int int_value = 0;
float float_value = 0;
union yylval;

//
extern int operationIndex;





/* Line 189 of yacc.c  */
#line 94 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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

/* Line 214 of yacc.c  */
#line 22 "parser.y"
 
int num;
char* sym;



/* Line 214 of yacc.c  */
#line 199 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 211 "parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   589

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNRULES -- Number of states.  */
#define YYNSTATES  283

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    14,    17,    21,    24,
      28,    34,    36,    38,    42,    44,    48,    50,    55,    61,
      66,    69,    76,    80,    88,    91,   101,   105,   116,   121,
     126,   130,   138,   146,   153,   161,   169,   176,   183,   190,
     196,   198,   202,   203,   206,   209,   212,   215,   217,   218,
     226,   232,   236,   242,   246,   249,   254,   257,   260,   263,
     266,   269,   274,   275,   287,   290,   295,   298,   301,   304,
     307,   310,   315,   316,   320,   325,   333,   336,   341,   344,
     347,   350,   353,   356,   361,   362,   372,   375,   380,   383,
     386,   389,   392,   395,   400,   401,   409,   415,   419,   420,
     423,   428,   431,   434,   437,   440,   443,   447,   451,   456,
     457,   461,   464,   466,   469,   473,   477,   485,   491,   493,
     495,   497,   499,   501,   503,   505,   507,   509,   511,   513,
     515,   517,   519,   521,   523,   525,   527,   529,   531,   533,
     535,   537,   539,   541,   543,   545,   547,   549,   551
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    66,    64,    -1,    32,    65,    -1,    68,
      65,    -1,    33,    -1,    93,    67,    -1,     5,    93,    69,
      -1,     9,    35,    -1,     9,    36,    67,    -1,     9,    23,
      87,    36,    67,    -1,    69,    -1,    69,    -1,     9,    92,
      35,    -1,    73,    -1,    34,    87,    35,    -1,    88,    -1,
       9,    23,    87,    35,    -1,     9,    23,    87,    36,    69,
      -1,     9,    91,    87,    35,    -1,    70,    35,    -1,    70,
      23,    44,    72,    45,    35,    -1,    70,    36,    67,    -1,
      70,    23,    44,    72,    45,    36,    67,    -1,    71,    35,
      -1,    71,    23,    44,    72,    45,    44,    72,    45,    35,
      -1,    71,    36,    67,    -1,    71,    23,    44,    72,    45,
      44,    72,    45,    36,    67,    -1,     9,    53,     9,    54,
      -1,     9,    53,    59,    54,    -1,     9,    53,    54,    -1,
       9,    53,     9,    54,    53,     9,    54,    -1,     9,    53,
      59,    54,    53,     9,    54,    -1,     9,    53,    54,    53,
       9,    54,    -1,     9,    53,     9,    54,    53,    59,    54,
      -1,     9,    53,    59,    54,    53,    59,    54,    -1,     9,
      53,    54,    53,    59,    54,    -1,     9,    53,     9,    54,
      53,    54,    -1,     9,    53,    59,    54,    53,    54,    -1,
       9,    53,    54,    53,    54,    -1,    94,    -1,    94,    36,
      72,    -1,    -1,    74,    73,    -1,    76,    73,    -1,    79,
      73,    -1,    81,    73,    -1,    83,    -1,    -1,    39,    42,
      86,    43,    44,    75,    45,    -1,    39,    42,    86,    43,
      69,    -1,    74,    46,    74,    -1,    74,    46,    44,    75,
      45,    -1,    74,    46,    75,    -1,    75,    69,    -1,    75,
      89,    92,    35,    -1,    75,    88,    -1,    75,    74,    -1,
      75,    76,    -1,    75,    79,    -1,    75,    81,    -1,    75,
      34,    87,    35,    -1,    -1,    38,    42,    78,    35,    86,
      35,    87,    43,    44,    77,    45,    -1,    77,    69,    -1,
      77,    89,    92,    35,    -1,    77,    88,    -1,    77,    74,
      -1,    77,    76,    -1,    77,    79,    -1,    77,    81,    -1,
      77,    34,    87,    35,    -1,    -1,     9,    23,    89,    -1,
      93,     9,    23,    89,    -1,    40,    42,    86,    43,    44,
      80,    45,    -1,    80,    69,    -1,    80,    89,    92,    35,
      -1,    80,    88,    -1,    80,    74,    -1,    80,    76,    -1,
      80,    79,    -1,    80,    81,    -1,    80,    34,    87,    35,
      -1,    -1,    41,    44,    82,    45,    40,    42,    86,    43,
      35,    -1,    82,    69,    -1,    82,    89,    92,    35,    -1,
      82,    88,    -1,    82,    74,    -1,    82,    76,    -1,    82,
      79,    -1,    82,    81,    -1,    82,    34,    87,    35,    -1,
      -1,    50,    42,     9,    43,    44,    84,    45,    -1,    49,
      94,    37,    85,    84,    -1,    48,    37,    85,    -1,    -1,
      85,    69,    -1,    85,    89,    92,    35,    -1,    85,    88,
      -1,    85,    74,    -1,    85,    76,    -1,    85,    79,    -1,
      85,    81,    -1,    85,    47,    35,    -1,    85,    51,    35,
      -1,    85,    34,    87,    35,    -1,    -1,    87,    95,    87,
      -1,    24,     9,    -1,    89,    -1,    89,    92,    -1,    87,
      90,    87,    -1,    89,    90,    89,    -1,    52,    42,    62,
      36,     9,    43,    35,    -1,    52,    42,    62,    43,    35,
      -1,    94,    -1,     9,    -1,    10,    -1,    11,    -1,    12,
      -1,    13,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    21,    -1,    22,    -1,     8,    -1,     7,    -1,     6,
      -1,     3,    -1,     4,    -1,    55,    -1,    56,    -1,    29,
      -1,    30,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    14,    -1,    15,    -1,    16,    -1,    18,    -1,    17,
      -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    59,    60,    69,    70,    76,    77,
      78,    79,    84,    85,    86,    87,    88,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   107,   108,
     109,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     122,   123,   124,   127,   128,   129,   130,   131,   132,   136,
     137,   138,   139,   140,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   158,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   173,   174,   178,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   194,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   209,   211,   212,   213,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     231,   232,   238,   239,   240,   241,   245,   246,   251,   252,
     258,   258,   258,   258,   260,   260,   260,   260,   262,   262,
     267,   267,   267,   267,   267,   273,   274,   275,   276,   277,
     278,   279,   280,   286,   286,   286,   286,   286,   286
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CHAR", "STRING", "CONST", "BOOL", "INT",
  "FLOAT", "IDF", "PLUS", "MINUS", "MULT", "DIV", "EG", "SUP", "LES",
  "LESE", "SUPE", "AND", "OR", "INCR", "DECR", "ASSIG", "NOT", "AddAff",
  "MinAff", "MulAff", "DivAff", "_TRUE", "_FALSE", "NOTEG", "BEG", "END",
  "RETURN", "SEMI", "SEP", "DeuxPoints", "FOR", "IF", "WHILE", "DO",
  "OPAR", "CPAR", "OPEN", "CLOSE", "ELSE", "BREAK", "DEFAULT", "CASE",
  "SWITCH", "CONTINUE", "PRINTF", "SBRA", "CBRA", "neg_FLOAT_val",
  "FLOAT_val", "BOOL_val", "neg_INT_val", "INT_val", "STRING_val",
  "CHAR_val", "FORMAT_STRING", "$accept", "input", "Sinput", "decline",
  "IDFSEP", "affline", "AFFECTATION", "TABLE", "TABLED", "inside_tab",
  "BOUCLE", "IFCOND", "inside_if", "FORCOND", "inside_for", "INIT",
  "WHILECOND", "inside_while", "DOWCOND", "inside_dowhile", "SWITCHCOMD",
  "inside_switch", "inside_case", "comparaison", "OPERATION", "STMT",
  "EXPRESSION", "Opp", "AFFOP", "DecInc", "type", "VALUES", "cmp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    67,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    70,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    74,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    78,    78,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    84,    84,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      86,    86,    87,    87,    87,    87,    88,    88,    89,    89,
      90,    90,    90,    90,    91,    91,    91,    91,    92,    92,
      93,    93,    93,    93,    93,    94,    94,    94,    94,    94,
      94,    94,    94,    95,    95,    95,    95,    95,    95
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     2,     3,     2,     3,
       5,     1,     1,     3,     1,     3,     1,     4,     5,     4,
       2,     6,     3,     7,     2,     9,     3,    10,     4,     4,
       3,     7,     7,     6,     7,     7,     6,     6,     6,     5,
       1,     3,     0,     2,     2,     2,     2,     1,     0,     7,
       5,     3,     5,     3,     2,     4,     2,     2,     2,     2,
       2,     4,     0,    11,     2,     4,     2,     2,     2,     2,
       2,     4,     0,     3,     4,     7,     2,     4,     2,     2,
       2,     2,     2,     4,     0,     9,     2,     4,     2,     2,
       2,     2,     2,     4,     0,     7,     5,     3,     0,     2,
       4,     2,     2,     2,     2,     2,     3,     3,     4,     0,
       3,     2,     1,     2,     3,     3,     7,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   134,     0,   132,   131,   130,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     3,     0,    12,     0,     0,    14,    48,    48,    48,
      48,    47,    16,     1,     2,     0,     6,    11,     0,     7,
     128,   129,     0,   124,   125,   126,   127,     0,     0,     0,
     119,   137,   138,   135,   136,   139,   140,   141,   142,     0,
     112,   118,     0,     0,     0,    94,     0,     0,     4,     0,
      20,     0,     0,    24,     0,    62,    43,    44,    45,    46,
       0,     8,     0,     0,     0,    30,     0,     0,    13,   120,
     121,   122,   123,    15,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    22,    42,
      26,    62,    51,    53,     0,     9,    17,     0,    28,     0,
      29,    19,   114,   115,     0,     0,     0,   111,     0,   143,
     144,   145,   147,   146,   148,     0,     0,   119,     0,     0,
      86,    89,    90,    91,    92,    88,     0,     0,     0,     0,
       0,    40,     0,     0,     0,    54,    57,    58,    59,    60,
      56,     0,     0,    18,     0,     0,    39,     0,     0,    73,
       0,     0,    62,    50,   110,    84,     0,     0,     0,    98,
       0,   117,     0,    42,     0,    52,     0,     0,    10,    11,
       0,    37,     0,    33,    36,     0,    38,     0,     0,    74,
       0,     0,    93,     0,    87,     0,     0,     0,     0,    21,
       0,    41,    42,    61,    55,    31,    34,    32,    35,     0,
      49,     0,    75,    76,    79,    80,    81,    82,    78,     0,
       0,   109,     0,    95,   116,    23,     0,     0,     0,     0,
       0,    97,   109,     0,    72,    83,    77,    85,     0,     0,
       0,    99,   102,   103,   104,   105,   101,     0,    98,    25,
       0,     0,     0,   106,   107,     0,    96,    27,     0,    63,
      64,    67,    68,    69,    70,    66,     0,   108,   100,     0,
       0,    71,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,    21,     9,    36,    22,    37,    24,    25,   150,
      26,    27,   113,    28,   261,    98,    29,   201,    30,   104,
      31,   207,   241,   101,   102,   160,    60,    94,    48,    49,
      10,    61,   135
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -104
static const yytype_int16 yypact[] =
{
     198,  -104,  -104,   257,  -104,  -104,  -104,   462,    16,   198,
      13,    15,   483,  -104,   433,   -16,   -11,    -9,     0,    10,
      29,  -104,   462,  -104,    19,    59,  -104,   171,   539,   539,
     539,  -104,  -104,  -104,  -104,   126,  -104,  -104,    22,  -104,
    -104,  -104,   433,  -104,  -104,  -104,  -104,     5,   433,    23,
    -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,  -104,   122,
     563,  -104,   334,    32,    32,  -104,    28,     1,  -104,    35,
    -104,    13,    61,  -104,    13,    21,  -104,  -104,  -104,  -104,
     433,  -104,    13,   463,    54,    20,    82,   155,  -104,  -104,
    -104,  -104,  -104,  -104,   433,   433,  -104,    90,   105,   133,
     135,   102,   552,   107,   186,   120,   -18,   315,  -104,   315,
    -104,  -104,   123,   426,   505,  -104,  -104,    15,   117,    42,
     121,  -104,   396,  -104,   433,    32,   159,  -104,     2,  -104,
    -104,  -104,  -104,  -104,  -104,   433,   139,    22,   433,   146,
    -104,   123,  -104,  -104,  -104,  -104,    56,   143,   180,   157,
     152,   163,   162,   294,   433,  -104,   123,  -104,  -104,  -104,
    -104,    56,    13,  -104,    44,   160,  -104,   164,    48,  -104,
     178,   433,  -104,  -104,   396,  -104,   509,   181,   187,    36,
     185,  -104,    76,   315,   188,  -104,   513,   194,  -104,  -104,
     179,  -104,   189,  -104,  -104,   195,  -104,   196,   433,  -104,
     327,   360,  -104,    32,  -104,   202,   315,   203,   205,  -104,
      13,  -104,   315,  -104,  -104,  -104,  -104,  -104,  -104,   116,
    -104,   433,  -104,  -104,   123,  -104,  -104,  -104,  -104,    56,
     209,  -104,   222,  -104,  -104,  -104,   233,   237,   517,   247,
     250,   261,  -104,   103,  -104,  -104,  -104,  -104,   433,   258,
     259,  -104,   123,  -104,  -104,  -104,  -104,    56,   228,  -104,
      13,   393,   521,  -104,  -104,   262,  -104,  -104,   433,  -104,
    -104,   123,  -104,  -104,  -104,  -104,    56,  -104,  -104,   547,
     263,  -104,  -104
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -104,   283,   274,  -104,   -62,  -104,    -7,  -104,  -104,  -103,
     244,   -70,   -98,   -83,  -104,  -104,   -81,  -104,   -77,  -104,
    -104,    46,    63,   -56,   -13,    -5,   -85,   246,  -104,   -57,
       4,   -69,  -104
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      23,    59,    32,    96,    39,   112,   152,    11,   103,   108,
     123,    38,   110,   153,    84,    23,    33,    32,   148,   146,
     115,   142,    35,   143,    38,   149,    62,   144,   161,    83,
     157,    63,   158,    64,   141,    87,   159,   105,   151,   169,
     151,    50,    69,   156,    65,    42,   172,    43,    44,    45,
      46,   165,    66,   190,    70,    71,   100,   195,    88,    85,
      16,    51,    52,   106,    86,   111,    99,   114,   161,   170,
     157,    67,   158,   119,   200,    47,   159,    40,    41,   107,
     211,   122,    72,   156,   205,   206,   199,    53,    54,   178,
      55,    56,    57,    58,    73,    74,   166,   140,   191,   145,
     188,   167,   196,   192,   187,   109,   155,   197,   118,   236,
     163,   209,   210,   124,   151,   161,   229,   157,   225,   158,
     226,   173,   174,   159,   227,   176,    89,    90,    91,    92,
     156,   224,    89,    90,    91,    92,   120,   232,   259,   260,
     125,   186,   126,   151,   127,   128,   155,   230,   235,    80,
     136,    43,    44,    45,    46,   189,   257,    93,   253,   237,
     254,    81,    82,   147,   255,    89,    90,    91,    92,    75,
     164,   252,   239,   257,   168,   253,   276,   254,   272,    47,
     273,   255,   171,   175,   274,   219,   177,   179,   252,   180,
     121,   271,   181,   155,   223,   137,   228,   182,   267,   183,
     265,     1,     2,     3,     4,     5,     6,   184,   238,    15,
      16,    17,    18,   198,   193,    51,    52,    75,   194,   280,
     138,    19,   204,   203,    15,    16,    17,    18,   208,   214,
       7,   139,   212,   215,   251,   262,   256,   137,    20,   231,
     234,    53,    54,   216,    55,    56,    57,    58,   233,   217,
     218,   251,   240,   256,   270,   279,   275,    51,    52,   242,
       1,     2,   248,     4,     5,     6,    15,    16,    17,    18,
     137,    76,    77,    78,    79,   249,   205,   206,   243,   250,
      20,   244,   246,    53,    54,   247,    55,    56,    57,    58,
      51,    52,    34,   263,   264,   248,    68,   278,   282,    15,
      16,    17,    18,   137,   266,   258,    95,     0,   249,     0,
       0,     0,   250,    20,     0,     0,    53,    54,     0,    55,
      56,    57,    58,    51,    52,     0,     0,     0,   154,     0,
       0,     0,    15,    16,    17,    18,   137,     1,     2,   185,
       4,     5,     6,    97,    51,    52,    20,     0,     0,    53,
      54,     0,    55,    56,    57,    58,    51,    52,     0,     0,
       0,   154,     0,     0,     0,    15,    16,    17,    18,   137,
      53,    54,   220,    55,    56,    57,    58,     0,     0,    20,
       0,     0,    53,    54,     0,    55,    56,    57,    58,    51,
      52,     0,     0,     0,   221,     0,     0,     0,    15,    16,
      17,    18,   137,     0,     0,   222,    89,    90,    91,    92,
       0,     0,    20,     0,     0,    53,    54,     0,    55,    56,
      57,    58,    51,    52,     0,     0,     0,   268,     0,     0,
       0,    15,    16,    17,    18,   137,     0,     0,   269,     0,
       0,     0,    50,     0,     0,    20,     0,     0,    53,    54,
       0,    55,    56,    57,    58,    51,    52,     0,     0,     0,
     154,     0,    51,    52,    15,    16,    17,    18,     0,     0,
       0,    12,     0,    89,    90,    91,    92,     0,    20,     0,
       0,    53,    54,     0,    55,    56,    57,    58,    53,    54,
       0,    55,    56,    57,    58,    13,    14,     0,   116,   117,
      15,    16,    17,    18,    40,    41,    42,     0,    43,    44,
      45,    46,    19,     0,    20,    89,    90,    91,    92,    89,
      90,    91,    92,    89,    90,    91,    92,    89,    90,    91,
      92,    89,    90,    91,    92,     0,    47,     0,     0,     0,
     116,   162,     0,     0,   202,     0,     0,     0,   213,     0,
       0,     0,   245,     0,     0,     0,   277,    89,    90,    91,
      92,     0,    89,    90,    91,    92,   129,   130,   131,   132,
     133,     0,     0,    89,    90,    91,    92,    15,    16,    17,
      18,     0,   281,   134,    40,    41,     0,     0,     0,    19
};

static const yytype_int16 yycheck[] =
{
       7,    14,     7,    60,    11,    75,   109,     3,    64,    71,
      95,     9,    74,   111,     9,    22,     0,    22,    36,   104,
      82,   104,     9,   104,     9,    43,    42,   104,   113,    42,
     113,    42,   113,    42,   104,    48,   113,     9,   107,   124,
     109,     9,    23,   113,    44,    23,    44,    25,    26,    27,
      28,     9,    42,     9,    35,    36,    24,     9,    35,    54,
      39,    29,    30,    62,    59,    44,    62,    80,   153,   125,
     153,    42,   153,    53,   172,    53,   153,    21,    22,    44,
     183,    94,    23,   153,    48,    49,   171,    55,    56,   146,
      58,    59,    60,    61,    35,    36,    54,   104,    54,   104,
     162,    59,    54,    59,   161,    44,   113,    59,    54,   212,
     117,    35,    36,    23,   183,   200,   201,   200,   201,   200,
     201,   128,   135,   200,   201,   138,    10,    11,    12,    13,
     200,   201,    10,    11,    12,    13,    54,   206,    35,    36,
      35,   154,     9,   212,     9,    43,   153,   203,   210,    23,
      43,    25,    26,    27,    28,   162,   241,    35,   241,    43,
     241,    35,    36,    43,   241,    10,    11,    12,    13,    46,
      53,   241,   229,   258,    53,   258,   261,   258,   261,    53,
     261,   258,    23,    44,   261,   198,    40,    44,   258,     9,
      35,   261,    35,   200,   201,     9,   201,    45,   260,    36,
     257,     3,     4,     5,     6,     7,     8,    45,   221,    38,
      39,    40,    41,    35,    54,    29,    30,    46,    54,   276,
      34,    50,    35,    42,    38,    39,    40,    41,    43,    35,
      32,    45,    44,    54,   241,   248,   241,     9,    52,    37,
      35,    55,    56,    54,    58,    59,    60,    61,    45,    54,
      54,   258,    43,   258,   261,   268,   261,    29,    30,    37,
       3,     4,    34,     6,     7,     8,    38,    39,    40,    41,
       9,    27,    28,    29,    30,    47,    48,    49,    45,    51,
      52,    44,    35,    55,    56,    35,    58,    59,    60,    61,
      29,    30,     9,    35,    35,    34,    22,    35,    35,    38,
      39,    40,    41,     9,   258,   242,    60,    -1,    47,    -1,
      -1,    -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,
      59,    60,    61,    29,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    40,    41,     9,     3,     4,    45,
       6,     7,     8,     9,    29,    30,    52,    -1,    -1,    55,
      56,    -1,    58,    59,    60,    61,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    40,    41,     9,
      55,    56,    45,    58,    59,    60,    61,    -1,    -1,    52,
      -1,    -1,    55,    56,    -1,    58,    59,    60,    61,    29,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,
      40,    41,     9,    -1,    -1,    45,    10,    11,    12,    13,
      -1,    -1,    52,    -1,    -1,    55,    56,    -1,    58,    59,
      60,    61,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    38,    39,    40,    41,     9,    -1,    -1,    45,    -1,
      -1,    -1,     9,    -1,    -1,    52,    -1,    -1,    55,    56,
      -1,    58,    59,    60,    61,    29,    30,    -1,    -1,    -1,
      34,    -1,    29,    30,    38,    39,    40,    41,    -1,    -1,
      -1,     9,    -1,    10,    11,    12,    13,    -1,    52,    -1,
      -1,    55,    56,    -1,    58,    59,    60,    61,    55,    56,
      -1,    58,    59,    60,    61,    33,    34,    -1,    35,    36,
      38,    39,    40,    41,    21,    22,    23,    -1,    25,    26,
      27,    28,    50,    -1,    52,    10,    11,    12,    13,    10,
      11,    12,    13,    10,    11,    12,    13,    10,    11,    12,
      13,    10,    11,    12,    13,    -1,    53,    -1,    -1,    -1,
      35,    36,    -1,    -1,    35,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    35,    10,    11,    12,
      13,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    -1,    10,    11,    12,    13,    38,    39,    40,
      41,    -1,    35,    31,    21,    22,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    32,    64,    66,
      93,    93,     9,    33,    34,    38,    39,    40,    41,    50,
      52,    65,    68,    69,    70,    71,    73,    74,    76,    79,
      81,    83,    88,     0,    64,     9,    67,    69,     9,    69,
      21,    22,    23,    25,    26,    27,    28,    53,    91,    92,
       9,    29,    30,    55,    56,    58,    59,    60,    61,    87,
      89,    94,    42,    42,    42,    44,    42,    42,    65,    23,
      35,    36,    23,    35,    36,    46,    73,    73,    73,    73,
      23,    35,    36,    87,     9,    54,    59,    87,    35,    10,
      11,    12,    13,    35,    90,    90,    92,     9,    78,    93,
      24,    86,    87,    86,    82,     9,    62,    44,    67,    44,
      67,    44,    74,    75,    87,    67,    35,    36,    54,    53,
      54,    35,    87,    89,    23,    35,     9,     9,    43,    14,
      15,    16,    17,    18,    31,    95,    43,     9,    34,    45,
      69,    74,    76,    79,    81,    88,    89,    43,    36,    43,
      72,    94,    72,    75,    34,    69,    74,    76,    79,    81,
      88,    89,    36,    69,    53,     9,    54,    59,    53,    89,
      86,    23,    44,    69,    87,    44,    87,    40,    92,    44,
       9,    35,    45,    36,    45,    45,    87,    92,    67,    69,
       9,    54,    59,    54,    54,     9,    54,    59,    35,    89,
      75,    80,    35,    42,    35,    48,    49,    84,    43,    35,
      36,    72,    44,    35,    35,    54,    54,    54,    54,    87,
      45,    34,    45,    69,    74,    76,    79,    81,    88,    89,
      86,    37,    94,    45,    35,    67,    72,    43,    87,    92,
      43,    85,    37,    45,    44,    35,    35,    35,    34,    47,
      51,    69,    74,    76,    79,    81,    88,    89,    85,    35,
      36,    77,    87,    35,    35,    92,    84,    67,    34,    45,
      69,    74,    76,    79,    81,    88,    89,    35,    35,    87,
      92,    35,    35
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {printf("\n\n Checker done you can run your program \n\n"); break;;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {operationIndex = 0;;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {operationIndex = 1;;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {operationIndex = 2;;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 258 "parser.y"
    {operationIndex = 3;;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    {OperationCalcule(float_value,operationIndex);;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    {OperationCalcule(float_value,operationIndex); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    {OperationCalcule(float_value,operationIndex);;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    {OperationCalcule(float_value,operationIndex);;}
    break;



/* Line 1455 of yacc.c  */
#line 1792 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 288 "parser.y"


// main pour pouvoir tester directement un fichier si il est valide ou pas
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *file = freopen(argv[1], "r", stdin);
    if (file == NULL) {
        perror("Error");
        return 1;
    }

    yyparse();

    fclose(file);
    return 0;
}

int yyerror(char* s){
    printf("%s  line :%d  col :%d \n",s,yylineo,col - LastLeng);

    return 0;
}


