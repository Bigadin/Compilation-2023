
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
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

extern int yylineo; // les lignes
extern int col; // les colonnes
int LastLeng =0; // le leng du dernier token trouvé
char* cal = 0;
int int_value = 0;
float float_value = 1;
char string_value[20] ;
union yylval;

//
extern int operationIndex;

extern char currentType[20];
extern int currentConst;
extern int part_index;
extern char currentValue[20];



/* Line 189 of yacc.c  */
#line 99 "parser.tab.c"

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
     CHAR_val = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 28 "parser.y"

int num;
float real;
char* sym;



/* Line 214 of yacc.c  */
#line 204 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 216 "parser.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNRULES -- Number of states.  */
#define YYNSTATES  291

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    10,    14,    15,    21,    22,    25,
      26,    31,    32,    39,    41,    44,    49,    52,    57,    60,
      63,    64,    69,    70,    77,    82,    85,    92,    96,   104,
     107,   117,   121,   132,   137,   142,   146,   154,   162,   169,
     177,   185,   192,   199,   206,   212,   214,   218,   219,   222,
     225,   228,   230,   231,   239,   245,   249,   255,   259,   262,
     267,   270,   273,   276,   279,   282,   287,   288,   300,   303,
     308,   311,   314,   317,   320,   323,   328,   329,   333,   338,
     346,   349,   354,   357,   360,   363,   366,   369,   374,   375,
     385,   388,   393,   396,   399,   402,   405,   408,   413,   414,
     422,   428,   432,   433,   436,   441,   444,   447,   450,   453,
     456,   460,   464,   469,   470,   474,   477,   479,   482,   486,
     490,   498,   504,   506,   508,   510,   512,   514,   516,   518,
     520,   522,   524,   526,   528,   530,   532,   534,   536,   538,
     540,   542,   544,   546,   548,   550,   552,   554,   556,   558,
     560,   562,   564
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    -1,    65,    32,    64,    70,    33,    -1,
      96,    67,    65,    -1,    -1,     5,    66,    96,    71,    65,
      -1,    -1,     9,    35,    -1,    -1,     9,    36,    68,    67,
      -1,    -1,     9,    23,    90,    36,    69,    67,    -1,    71,
      -1,    71,    70,    -1,     9,    95,    35,    70,    -1,    76,
      70,    -1,    34,    90,    35,    70,    -1,    91,    70,    -1,
      77,    70,    -1,    -1,     9,    23,    90,    35,    -1,    -1,
       9,    23,    90,    36,    72,    71,    -1,     9,    94,    90,
      35,    -1,    73,    35,    -1,    73,    23,    44,    75,    45,
      35,    -1,    73,    36,    67,    -1,    73,    23,    44,    75,
      45,    36,    67,    -1,    74,    35,    -1,    74,    23,    44,
      75,    45,    44,    75,    45,    35,    -1,    74,    36,    67,
      -1,    74,    23,    44,    75,    45,    44,    75,    45,    36,
      67,    -1,     9,    53,     9,    54,    -1,     9,    53,    59,
      54,    -1,     9,    53,    54,    -1,     9,    53,     9,    54,
      53,     9,    54,    -1,     9,    53,    59,    54,    53,     9,
      54,    -1,     9,    53,    54,    53,     9,    54,    -1,     9,
      53,     9,    54,    53,    59,    54,    -1,     9,    53,    59,
      54,    53,    59,    54,    -1,     9,    53,    54,    53,    59,
      54,    -1,     9,    53,     9,    54,    53,    54,    -1,     9,
      53,    59,    54,    53,    54,    -1,     9,    53,    54,    53,
      54,    -1,    97,    -1,    97,    36,    75,    -1,    -1,    79,
      76,    -1,    82,    76,    -1,    84,    76,    -1,    86,    -1,
      -1,    39,    42,    89,    43,    44,    78,    45,    -1,    39,
      42,    89,    43,    71,    -1,    77,    46,    77,    -1,    77,
      46,    44,    78,    45,    -1,    77,    46,    78,    -1,    78,
      71,    -1,    78,    92,    95,    35,    -1,    78,    91,    -1,
      78,    77,    -1,    78,    79,    -1,    78,    82,    -1,    78,
      84,    -1,    78,    34,    90,    35,    -1,    -1,    38,    42,
      81,    35,    89,    35,    90,    43,    44,    80,    45,    -1,
      80,    71,    -1,    80,    92,    95,    35,    -1,    80,    91,
      -1,    80,    77,    -1,    80,    79,    -1,    80,    82,    -1,
      80,    84,    -1,    80,    34,    90,    35,    -1,    -1,     9,
      23,    92,    -1,    96,     9,    23,    92,    -1,    40,    42,
      89,    43,    44,    83,    45,    -1,    83,    71,    -1,    83,
      92,    95,    35,    -1,    83,    91,    -1,    83,    77,    -1,
      83,    79,    -1,    83,    82,    -1,    83,    84,    -1,    83,
      34,    90,    35,    -1,    -1,    41,    44,    85,    45,    40,
      42,    89,    43,    35,    -1,    85,    71,    -1,    85,    92,
      95,    35,    -1,    85,    91,    -1,    85,    77,    -1,    85,
      79,    -1,    85,    82,    -1,    85,    84,    -1,    85,    34,
      90,    35,    -1,    -1,    50,    42,     9,    43,    44,    87,
      45,    -1,    49,    97,    37,    88,    87,    -1,    48,    37,
      88,    -1,    -1,    88,    71,    -1,    88,    92,    95,    35,
      -1,    88,    91,    -1,    88,    77,    -1,    88,    79,    -1,
      88,    82,    -1,    88,    84,    -1,    88,    47,    35,    -1,
      88,    51,    35,    -1,    88,    34,    90,    35,    -1,    -1,
      90,    98,    90,    -1,    24,     9,    -1,    92,    -1,    92,
      95,    -1,    90,    93,    90,    -1,    92,    93,    92,    -1,
      52,    42,    60,    36,     9,    43,    35,    -1,    52,    42,
      60,    43,    35,    -1,    97,    -1,     9,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    21,    -1,    22,    -1,     8,    -1,
       7,    -1,     6,    -1,     3,    -1,     4,    -1,    55,    -1,
      56,    -1,    29,    -1,    30,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    14,    -1,    15,    -1,    16,    -1,
      18,    -1,    17,    -1,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    60,    60,    60,    65,    66,    66,    67,    72,    73,
      73,    74,    74,    75,    79,    80,    81,    82,    83,    84,
      85,    91,    93,    93,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   106,   107,   108,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   121,   122,   123,   126,   127,
     128,   129,   130,   134,   135,   136,   137,   138,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   156,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   171,   172,   176,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   192,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   207,
     209,   210,   211,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   229,   230,   236,   237,   238,   239,
     243,   244,   249,   250,   256,   256,   256,   256,   258,   258,
     258,   258,   260,   260,   265,   266,   267,   268,   269,   275,
     279,   283,   287,   291,   295,   299,   303,   314,   314,   314,
     314,   314,   314
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
  "CHAR_val", "$accept", "input", "$@1", "decline", "$@2", "IDFSEP", "$@3",
  "$@4", "affline", "AFFECTATION", "$@5", "TABLE", "TABLED", "inside_tab",
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
     315,   316
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    64,    63,    65,    66,    65,    65,    67,    68,
      67,    69,    67,    67,    70,    70,    70,    70,    70,    70,
      70,    71,    72,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    73,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    75,    75,    75,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      91,    91,    92,    92,    93,    93,    93,    93,    94,    94,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     5,     3,     0,     5,     0,     2,     0,
       4,     0,     6,     1,     2,     4,     2,     4,     2,     2,
       0,     4,     0,     6,     4,     2,     6,     3,     7,     2,
       9,     3,    10,     4,     4,     3,     7,     7,     6,     7,
       7,     6,     6,     6,     5,     1,     3,     0,     2,     2,
       2,     1,     0,     7,     5,     3,     5,     3,     2,     4,
       2,     2,     2,     2,     2,     4,     0,    11,     2,     4,
       2,     2,     2,     2,     2,     4,     0,     3,     4,     7,
       2,     4,     2,     2,     2,     2,     2,     4,     0,     9,
       2,     4,     2,     2,     2,     2,     2,     4,     0,     7,
       5,     3,     0,     2,     4,     2,     2,     2,     2,     2,
       3,     3,     4,     0,     3,     2,     1,     2,     3,     3,
       7,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,   137,   138,     5,   136,   135,   134,     0,     0,     0,
       0,     1,     2,     0,     7,    13,     0,     0,     0,    20,
       0,   128,   129,   130,   131,     8,     9,     0,     0,     4,
       0,    25,     0,     0,    29,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    20,    20,
      52,    52,    52,    51,    20,   123,   141,   142,   139,   140,
     143,   144,   145,   146,     0,   116,   122,     0,     0,    35,
       0,     0,    47,    27,    47,    31,     0,     6,   132,   133,
       0,     0,     0,     0,     0,    98,     0,     0,     3,    14,
      16,    66,    19,    48,    49,    50,    18,   124,   125,   126,
     127,    21,    11,     0,     0,   117,    10,    33,     0,    34,
      24,     0,    45,     0,     0,    20,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    55,    57,
       0,     0,   118,   119,     0,     0,    44,     0,     0,     0,
      47,     0,    22,    15,    17,     0,     0,     0,   115,     0,
     147,   148,   149,   151,   150,   152,     0,     0,   123,     0,
       0,    90,    93,    94,    95,    96,    92,     0,     0,     0,
       0,     0,     0,    58,    61,    62,    63,    64,    60,     0,
      12,    23,     0,    42,     0,    38,    41,     0,    43,     0,
      26,     0,    46,    47,    77,     0,     0,    66,    54,   114,
      88,     0,     0,     0,   102,     0,   121,    56,     0,     0,
      36,    39,    37,    40,    28,     0,     0,    78,     0,     0,
      97,     0,    91,     0,     0,     0,     0,    65,    59,     0,
       0,    53,     0,    79,    80,    83,    84,    85,    86,    82,
       0,     0,   113,     0,    99,   120,    30,     0,     0,     0,
       0,     0,   101,   113,    32,    76,    87,    81,    89,     0,
       0,     0,   103,   106,   107,   108,   109,   105,     0,   102,
       0,     0,   110,   111,     0,   100,     0,    67,    68,    71,
      72,    73,    74,    70,     0,   112,   104,     0,     0,    75,
      69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    19,     8,    10,    14,    67,   130,    46,    15,
     131,    16,    17,   111,    48,    49,   129,    50,   270,   118,
      51,   219,    52,   124,    53,   225,   252,   121,   122,    54,
      65,   103,    28,    80,     9,    66,   156
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -117
static const yytype_int16 yypact[] =
{
     395,  -117,  -117,  -117,  -117,  -117,  -117,    18,    -5,    24,
     176,  -117,  -117,   500,   395,  -117,    29,    61,    27,    54,
     433,  -117,  -117,  -117,  -117,  -117,  -117,    15,   433,  -117,
      -6,  -117,    24,     0,  -117,    24,   342,   395,   494,   433,
       5,    35,    37,    13,    40,    47,    38,    54,    54,   462,
     115,   115,   115,  -117,    54,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,   519,   583,  -117,    24,    49,    -4,
      57,   197,   274,  -117,   274,  -117,   433,  -117,  -117,  -117,
      73,   455,   293,   425,   425,  -117,   104,    62,  -117,  -117,
    -117,   -22,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,  -117,  -117,   433,   433,  -117,  -117,    93,    16,    97,
    -117,    81,   126,   124,   527,    54,    54,   147,   137,   164,
     167,   134,   572,   144,   253,   151,    -1,  -117,   154,   418,
      24,    27,   180,  -117,    19,   143,  -117,   149,    32,   105,
     274,   160,  -117,  -117,  -117,   433,   425,   182,  -117,     7,
    -117,  -117,  -117,  -117,  -117,  -117,   433,   169,   342,   433,
     171,  -117,   154,  -117,  -117,  -117,  -117,    33,   170,   208,
     183,   286,   433,  -117,   154,  -117,  -117,  -117,  -117,    33,
    -117,  -117,   174,  -117,   177,  -117,  -117,   189,  -117,   194,
    -117,    24,  -117,   274,  -117,   188,   433,  -117,  -117,   180,
    -117,   531,   179,   195,    96,   191,  -117,  -117,   538,   201,
    -117,  -117,  -117,  -117,  -117,   206,   433,  -117,   319,   352,
    -117,   425,  -117,   203,   274,   210,   222,  -117,  -117,   123,
     108,  -117,   433,  -117,  -117,   154,  -117,  -117,  -117,  -117,
      33,   221,  -117,   226,  -117,  -117,  -117,    24,   229,   546,
     230,   231,   186,  -117,  -117,  -117,  -117,  -117,  -117,   433,
     235,   239,  -117,   154,  -117,  -117,  -117,  -117,    33,   220,
     385,   557,  -117,  -117,   242,  -117,   433,  -117,  -117,   154,
    -117,  -117,  -117,  -117,    33,  -117,  -117,   564,   249,  -117,
    -117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,     9,  -117,   -28,  -117,  -117,    12,   -17,
    -117,  -117,  -117,   -68,    79,   -81,  -116,  -109,  -117,  -117,
    -103,  -117,   -84,  -117,  -117,    17,    36,   -79,   -20,   -71,
     -95,   223,  -117,   -62,     3,   -60,  -117
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      64,    37,    47,   105,    73,   123,   113,    75,    71,   133,
     128,   171,   112,    18,   112,   163,    36,    41,    11,    81,
     175,   164,   127,    29,    68,   135,   176,    12,   182,   167,
      47,    47,    47,    13,   179,   169,    36,    47,    72,   106,
     165,   187,   170,   162,    74,   177,    77,    82,   174,   108,
     194,   197,    30,   166,    78,    79,   114,    85,   178,    89,
      90,    92,   175,    38,    31,    32,    96,   195,   176,    69,
     136,    88,   192,   183,    70,   137,   179,    83,   184,    84,
     112,   218,    86,   132,    33,   119,   188,   177,    39,    87,
     174,   189,    40,    41,    42,    43,    34,    35,    47,    47,
     178,   217,   180,   107,    44,   203,    45,   161,   115,   175,
     236,   109,   173,   125,   181,   176,   237,   209,    97,    98,
      99,   100,   126,   179,   240,   215,   139,   143,   144,    93,
      94,    95,   198,   112,   177,   238,   199,   174,   235,   201,
     190,   191,   241,   264,   223,   224,   134,   178,   239,   265,
     138,   248,   208,    40,   173,    42,    43,   268,   246,   247,
     264,   280,   140,   214,   243,    44,   265,   281,   266,   141,
     145,   263,   146,   147,   268,   284,   148,   149,   250,     1,
       2,   267,     4,     5,     6,   266,   282,   157,   263,   279,
      97,    98,    99,   100,   168,   158,   230,   185,   267,   283,
      91,   173,   234,   186,   193,   196,   274,    97,    98,    99,
     100,   202,   249,   200,   204,    56,    57,   205,   206,   254,
     259,   221,   288,   216,    40,    41,    42,    43,   210,   158,
     222,   211,   110,   260,   226,   262,   228,   261,    45,   271,
     242,    58,    59,   212,    60,    61,    62,    63,   213,    56,
      57,   229,   262,   278,   259,   244,   287,   245,    40,    41,
      42,    43,   158,   253,   251,   257,   258,   260,   223,   224,
     272,   261,    45,   255,   273,    58,    59,   286,    60,    61,
      62,    63,    56,    57,   290,     0,   275,   159,   104,   269,
       0,    40,    41,    42,    43,   158,     1,     2,   160,     4,
       5,     6,   117,    56,    57,    45,     0,     0,    58,    59,
       0,    60,    61,    62,    63,    56,    57,     0,     0,     0,
     172,     0,     0,     0,    40,    41,    42,    43,   158,    58,
      59,   207,    60,    61,    62,    63,     0,     0,    45,     0,
       0,    58,    59,     0,    60,    61,    62,    63,    56,    57,
       0,     0,     0,   172,     0,     0,     0,    40,    41,    42,
      43,   158,     0,     0,   231,    76,     0,    21,    22,    23,
      24,    45,     0,     0,    58,    59,     0,    60,    61,    62,
      63,    56,    57,     0,     0,     0,   232,     0,     0,     0,
      40,    41,    42,    43,   158,    27,     0,   233,     1,     2,
       3,     4,     5,     6,    45,     0,     0,    58,    59,     0,
      60,    61,    62,    63,    56,    57,     0,     0,     0,   276,
       0,     0,     0,    40,    41,    42,    43,   158,     0,     0,
     277,     0,     0,     0,    55,     0,     0,    45,     0,     0,
      58,    59,    55,    60,    61,    62,    63,    56,    57,   120,
       0,     0,   172,     0,    56,    57,    40,    41,    42,    43,
       0,     0,    56,    57,     0,    97,    98,    99,   100,     0,
      45,    38,     0,    58,    59,     0,    60,    61,    62,    63,
      58,    59,     0,    60,    61,    62,    63,     0,    58,    59,
     116,    60,    61,    62,    63,     0,    39,     0,     0,     0,
      40,    41,    42,    43,     0,     0,     0,     0,    91,     0,
       0,     0,    44,     0,    45,    78,    79,    76,     0,    21,
      22,    23,    24,    20,     0,    21,    22,    23,    24,    97,
      98,    99,   100,     0,     0,    25,    26,    97,    98,    99,
     100,    97,    98,    99,   100,     0,     0,    27,    97,    98,
      99,   100,     0,    27,   101,   102,    97,    98,    99,   100,
       0,     0,   101,   142,     0,     0,   220,    97,    98,    99,
     100,     0,     0,   227,    97,    98,    99,   100,     0,     0,
       0,   256,    97,    98,    99,   100,   150,   151,   152,   153,
     154,     0,   285,    97,    98,    99,   100,     0,     0,   289,
       0,     0,     0,   155,    78,    79
};

static const yytype_int16 yycheck[] =
{
      20,    18,    19,    65,    32,    84,    74,    35,    28,   104,
      91,   127,    72,    10,    74,   124,     9,    39,     0,    39,
     129,   124,    44,    14,     9,     9,   129,    32,     9,   124,
      47,    48,    49,     9,   129,    36,     9,    54,    44,    67,
     124,     9,    43,   124,    44,   129,    37,    42,   129,    53,
     145,    44,    23,   124,    21,    22,    76,    44,   129,    47,
      48,    49,   171,     9,    35,    36,    54,   146,   171,    54,
      54,    33,   140,    54,    59,    59,   171,    42,    59,    42,
     140,   197,    42,   103,    23,    82,    54,   171,    34,    42,
     171,    59,    38,    39,    40,    41,    35,    36,   115,   116,
     171,   196,   130,    54,    50,   167,    52,   124,    35,   218,
     219,    54,   129,     9,   131,   218,   219,   179,    10,    11,
      12,    13,    60,   218,   219,   193,    45,   115,   116,    50,
      51,    52,   149,   193,   218,   219,   156,   218,   219,   159,
      35,    36,   221,   252,    48,    49,    53,   218,   219,   252,
      53,    43,   172,    38,   171,    40,    41,   252,    35,    36,
     269,   270,    36,   191,   224,    50,   269,   270,   252,    45,
      23,   252,    35,     9,   269,   270,     9,    43,   240,     3,
       4,   252,     6,     7,     8,   269,   270,    43,   269,   270,
      10,    11,    12,    13,    43,     9,   216,    54,   269,   270,
      46,   218,   219,    54,    44,    23,   268,    10,    11,    12,
      13,    40,   232,    44,    44,    29,    30,     9,    35,   247,
      34,    42,   284,    35,    38,    39,    40,    41,    54,     9,
      35,    54,    35,    47,    43,   252,    35,    51,    52,   259,
      37,    55,    56,    54,    58,    59,    60,    61,    54,    29,
      30,    45,   269,   270,    34,    45,   276,    35,    38,    39,
      40,    41,     9,    37,    43,    35,    35,    47,    48,    49,
      35,    51,    52,    44,    35,    55,    56,    35,    58,    59,
      60,    61,    29,    30,    35,    -1,   269,    34,    65,   253,
      -1,    38,    39,    40,    41,     9,     3,     4,    45,     6,
       7,     8,     9,    29,    30,    52,    -1,    -1,    55,    56,
      -1,    58,    59,    60,    61,    29,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    40,    41,     9,    55,
      56,    45,    58,    59,    60,    61,    -1,    -1,    52,    -1,
      -1,    55,    56,    -1,    58,    59,    60,    61,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    40,
      41,     9,    -1,    -1,    45,    23,    -1,    25,    26,    27,
      28,    52,    -1,    -1,    55,    56,    -1,    58,    59,    60,
      61,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    41,     9,    53,    -1,    45,     3,     4,
       5,     6,     7,     8,    52,    -1,    -1,    55,    56,    -1,
      58,    59,    60,    61,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    40,    41,     9,    -1,    -1,
      45,    -1,    -1,    -1,     9,    -1,    -1,    52,    -1,    -1,
      55,    56,     9,    58,    59,    60,    61,    29,    30,    24,
      -1,    -1,    34,    -1,    29,    30,    38,    39,    40,    41,
      -1,    -1,    29,    30,    -1,    10,    11,    12,    13,    -1,
      52,     9,    -1,    55,    56,    -1,    58,    59,    60,    61,
      55,    56,    -1,    58,    59,    60,    61,    -1,    55,    56,
      35,    58,    59,    60,    61,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    50,    -1,    52,    21,    22,    23,    -1,    25,
      26,    27,    28,    23,    -1,    25,    26,    27,    28,    10,
      11,    12,    13,    -1,    -1,    35,    36,    10,    11,    12,
      13,    10,    11,    12,    13,    -1,    -1,    53,    10,    11,
      12,    13,    -1,    53,    35,    36,    10,    11,    12,    13,
      -1,    -1,    35,    36,    -1,    -1,    35,    10,    11,    12,
      13,    -1,    -1,    35,    10,    11,    12,    13,    -1,    -1,
      -1,    35,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    -1,    35,    10,    11,    12,    13,    -1,    -1,    35,
      -1,    -1,    -1,    31,    21,    22
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    63,    65,    96,
      66,     0,    32,     9,    67,    71,    73,    74,    96,    64,
      23,    25,    26,    27,    28,    35,    36,    53,    94,    65,
      23,    35,    36,    23,    35,    36,     9,    71,     9,    34,
      38,    39,    40,    41,    50,    52,    70,    71,    76,    77,
      79,    82,    84,    86,    91,     9,    29,    30,    55,    56,
      58,    59,    60,    61,    90,    92,    97,    68,     9,    54,
      59,    90,    44,    67,    44,    67,    23,    65,    21,    22,
      95,    90,    42,    42,    42,    44,    42,    42,    33,    70,
      70,    46,    70,    76,    76,    76,    70,    10,    11,    12,
      13,    35,    36,    93,    93,    95,    67,    54,    53,    54,
      35,    75,    97,    75,    90,    35,    35,     9,    81,    96,
      24,    89,    90,    89,    85,     9,    60,    44,    77,    78,
      69,    72,    90,    92,    53,     9,    54,    59,    53,    45,
      36,    45,    36,    70,    70,    23,    35,     9,     9,    43,
      14,    15,    16,    17,    18,    31,    98,    43,     9,    34,
      45,    71,    77,    79,    82,    84,    91,    92,    43,    36,
      43,    78,    34,    71,    77,    79,    82,    84,    91,    92,
      67,    71,     9,    54,    59,    54,    54,     9,    54,    59,
      35,    36,    75,    44,    92,    89,    23,    44,    71,    90,
      44,    90,    40,    95,    44,     9,    35,    45,    90,    95,
      54,    54,    54,    54,    67,    75,    35,    92,    78,    83,
      35,    42,    35,    48,    49,    87,    43,    35,    35,    45,
      90,    45,    34,    45,    71,    77,    79,    82,    84,    91,
      92,    89,    37,    97,    45,    35,    35,    36,    43,    90,
      95,    43,    88,    37,    67,    44,    35,    35,    35,    34,
      47,    51,    71,    77,    79,    82,    84,    91,    92,    88,
      80,    90,    35,    35,    95,    87,    34,    45,    71,    77,
      79,    82,    84,    91,    92,    35,    35,    90,    95,    35,
      35
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
        case 2:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {part_index = 1;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {printf("\n checker done !!\n"); afficherIDF();;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    {currentConst = 1;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    {insertTS(string_value,currentType,currentConst,currentValue);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 73 "parser.y"
    {insertTS(string_value,currentType,currentConst, currentValue);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 74 "parser.y"
    {insertTS(string_value,currentType,currentConst, currentValue);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    {Var_non_dec((yyvsp[(1) - (4)].sym));;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    {insertTS(string_value,currentType,currentConst, currentValue);
                            Var_non_dec((yyvsp[(1) - (4)].sym));;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    {insertTS(string_value,currentType,currentConst, currentValue);
                            Var_non_dec((yyvsp[(1) - (4)].sym));;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {Var_non_dec((yyvsp[(1) - (4)].sym));;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {Var_non_dec((yyvsp[(1) - (3)].sym));;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {part_index = 0; insertTS(string_value,currentType,currentConst,currentValue); part_index = 1;;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {Var_non_dec((yyvsp[(2) - (2)].sym));;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {Var_non_dec((yyvsp[(1) - (1)].sym));;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {strcpy(currentType,"float");;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {strcpy(currentType,"int");;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    {strcpy(currentType,"bool");;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 268 "parser.y"
    {strcpy(currentType,"char");;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {strcpy(currentType,"string");;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    {if(strcmp(currentType,"float") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%f|, a la ligne %d\n", currentType, (yyvsp[(1) - (1)].real), yylineo) ;
                    else
                        sprintf(currentValue, "%.3f", (yyvsp[(1) - (1)].real));;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {if(strcmp(currentType,"float")&& part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%f|, a la ligne %d\n", currentType, (yyvsp[(1) - (1)].real), yylineo) ;
                    else
                        sprintf(currentValue, "%.3f", (yyvsp[(1) - (1)].real));;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    {if(strcmp(currentType,"bool") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |true|, a la ligne %d\n", currentType, yylineo) ;
                    else
                        strcpy(currentValue, "true");;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { if(strcmp(currentType,"bool") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |false|, a la ligne %d\n", currentType, yylineo) ;
                    else
                        strcpy(currentValue, "false");;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    {if(strcmp(currentType,"int") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%d|, a la ligne %d\n", currentType, (yyvsp[(1) - (1)].num), yylineo) ;
                    else
                        sprintf(currentValue, "%d", (yyvsp[(1) - (1)].num));;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    {if(strcmp(currentType,"int") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%d|, a la ligne %d\n", currentType, (yyvsp[(1) - (1)].num), yylineo) ;
                    else
                        sprintf(currentValue, "%d", (yyvsp[(1) - (1)].num));;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {if(strcmp(currentType,"string") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%s|, a la ligne %d\n", currentType, (yyvsp[(1) - (1)].sym), yylineo) ;
                    else
                        strcpy(currentValue, (yyvsp[(1) - (1)].sym));;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {if(strcmp(currentType,"char") && part_index == 0) 
                        printf("Erreur Non compatibilité de type entre %s et |%c|, a la ligne %d\n", currentType, (yyvsp[(1) - (1)].sym), yylineo) ;
                    else
                        sprintf(currentValue, "'%c'", (yyvsp[(1) - (1)].sym));;}
    break;



/* Line 1455 of yacc.c  */
#line 1961 "parser.tab.c"
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
#line 316 "parser.y"


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


