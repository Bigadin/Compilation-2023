/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define YYSTYPE float

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


#line 94 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "parser.y"

int num;
float real;
char* sym;

#line 214 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  291

#define YYUNDEFTOK  2
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    58,    63,    64,    64,    65,    70,    71,
      71,    72,    72,    73,    77,    78,    79,    80,    81,    82,
      83,    89,    90,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   102,   103,   104,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   117,   118,   119,   122,   123,
     124,   125,   126,   130,   131,   132,   133,   134,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   152,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   167,   168,   172,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   188,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   203,
     205,   206,   207,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   225,   226,   232,   233,   234,   235,
     239,   240,   245,   246,   252,   252,   252,   252,   254,   254,
     254,   254,   256,   256,   261,   262,   263,   264,   265,   271,
     272,   273,   274,   275,   276,   277,   278,   284,   284,   284,
     284,   284,   284
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "EXPRESSION", "Opp", "AFFOP", "DecInc", "type", "VALUES", "cmp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-117)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,     9,  -117,   -28,  -117,  -117,    12,   -17,
    -117,  -117,  -117,   -68,    79,   -81,  -116,  -109,  -117,  -117,
    -103,  -117,   -84,  -117,  -117,    17,    36,   -79,   -20,   -71,
     -95,   223,  -117,   -62,     3,   -60,  -117
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    19,     8,    10,    14,    67,   130,    46,    15,
     131,    16,    17,   111,    48,    49,   129,    50,   270,   118,
      51,   219,    52,   124,    53,   225,   252,   121,   122,    54,
      65,   103,    28,    80,     9,    66,   156
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
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
static const yytype_int8 yystos[] =
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 58 "parser.y"
            {part_index = 1;}
#line 1658 "parser.tab.c"
    break;

  case 3:
#line 58 "parser.y"
                                          {printf("\n checker done !!\n"); afficherIDF();}
#line 1664 "parser.tab.c"
    break;

  case 5:
#line 64 "parser.y"
       {currentConst = 1;}
#line 1670 "parser.tab.c"
    break;

  case 8:
#line 70 "parser.y"
          {insertTS(string_value,currentType,currentConst);}
#line 1676 "parser.tab.c"
    break;

  case 9:
#line 71 "parser.y"
         {insertTS(string_value,currentType,currentConst);}
#line 1682 "parser.tab.c"
    break;

  case 11:
#line 72 "parser.y"
                         {insertTS(string_value,currentType,currentConst);}
#line 1688 "parser.tab.c"
    break;

  case 21:
#line 89 "parser.y"
                         {insertTS(string_value,currentType,currentConst);}
#line 1694 "parser.tab.c"
    break;

  case 22:
#line 90 "parser.y"
                         {insertTS(string_value,currentType,currentConst);}
#line 1700 "parser.tab.c"
    break;

  case 134:
#line 261 "parser.y"
      {strcpy(currentType,"float");}
#line 1706 "parser.tab.c"
    break;

  case 135:
#line 262 "parser.y"
     {strcpy(currentType,"int");}
#line 1712 "parser.tab.c"
    break;

  case 136:
#line 263 "parser.y"
      {strcpy(currentType,"bool");}
#line 1718 "parser.tab.c"
    break;

  case 137:
#line 264 "parser.y"
      {strcpy(currentType,"char");}
#line 1724 "parser.tab.c"
    break;

  case 138:
#line 265 "parser.y"
        {strcpy(currentType,"string");}
#line 1730 "parser.tab.c"
    break;


#line 1734 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 286 "parser.y"


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

