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
#include <stdlib.h>
#include <string.h>
#include "Sem.h"
extern int yylineo; // les lignes
extern int col ; // les colonnes
int LastLeng =0; // le leng du dernier token trouvé
char* cal = 0;
int int_value = 0;
float float_value = 1;
char string_value[20] ;
 
//operation semantique
extern char op;
char currentOp = '+';
Node* op_tree;  
// _____________
extern char currentType[20];
extern int currentConst  ;
extern int part_index;
extern char assignType[20];
extern char assignValue[20];

//deep shit
extern char aaa[20];

void SendToCalculator(float i, char op) {
    switch (op) {
        case '+':
        case '*':
            insert(&op_tree, i);
            break;
        case '-':
            insert(&op_tree, -i);
            break;
        case '/':
            insert(&op_tree, 1 / i);
            break;
        default:
            // Gérer le cas par défaut ici
            break;
    }
}



#line 118 "parser.tab.c"

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
    IDF = 258,
    CHAR = 259,
    STRING = 260,
    CONST = 261,
    BOOL = 262,
    INT = 263,
    FLOAT = 264,
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
#line 49 "parser.y"

    
int num;
float real;
char* sym;

#line 239 "parser.tab.c"

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
typedef yytype_uint8 yy_state_t;

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
#define YYLAST   497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

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
       0,    80,    80,    80,    85,    86,    86,    87,    92,    93,
      93,    94,    94,    94,    95,    99,   100,   101,   102,   103,
     104,   105,   111,   111,   118,   118,   118,   125,   158,   159,
     160,   161,   162,   166,   167,   168,   169,   170,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   188,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   203,   204,   208,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   224,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   239,
     241,   242,   243,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   261,   262,   268,   269,   270,   270,
     271,   271,   272,   272,   273,   273,   277,   278,   283,   284,
     293,   293,   293,   293,   295,   295,   300,   301,   302,   303,
     304,   310,   315,   320,   324,   328,   333,   338,   342,   351,
     351,   351,   351,   351,   351
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDF", "CHAR", "STRING", "CONST", "BOOL",
  "INT", "FLOAT", "PLUS", "MINUS", "MULT", "DIV", "EG", "SUP", "LES",
  "LESE", "SUPE", "AND", "OR", "INCR", "DECR", "ASSIG", "NOT", "AddAff",
  "MinAff", "MulAff", "DivAff", "_TRUE", "_FALSE", "NOTEG", "BEG", "END",
  "RETURN", "SEMI", "SEP", "DeuxPoints", "FOR", "IF", "WHILE", "DO",
  "OPAR", "CPAR", "OPEN", "CLOSE", "ELSE", "BREAK", "DEFAULT", "CASE",
  "SWITCH", "CONTINUE", "PRINTF", "SBRA", "CBRA", "neg_FLOAT_val",
  "FLOAT_val", "BOOL_val", "neg_INT_val", "INT_val", "STRING_val",
  "CHAR_val", "$accept", "input", "$@1", "decline", "$@2", "IDFSEP", "$@3",
  "$@4", "$@5", "affline", "AFFECTATION", "$@6", "$@7", "$@8", "BOUCLE",
  "IFCOND", "inside_if", "FORCOND", "inside_for", "INIT", "WHILECOND",
  "inside_while", "DOWCOND", "inside_dowhile", "SWITCHCOMD",
  "inside_switch", "inside_case", "comparaison", "OPERATION", "$@9",
  "$@10", "$@11", "$@12", "STMT", "EXPRESSION", "AFFOP", "DecInc", "type",
  "VALUES", "cmp", YY_NULLPTR
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

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-105)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     482,   -99,   -99,   -99,   -99,   -99,   -99,    21,    -1,    31,
      80,   -99,   -99,   449,   482,   -99,    41,   430,   258,   -99,
     -99,   -99,   -99,   -99,   -99,   258,   -99,   469,   482,   357,
     258,    26,    54,    61,     7,    72,    74,    23,   430,   430,
      20,   100,   100,   100,   -99,   430,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,    64,    -3,   -99,    31,    82,
     258,   -99,   -99,   -99,    92,   109,   408,   133,   133,   -99,
     129,   104,   -99,   -99,   -99,     6,   -99,   -99,   -99,   -99,
     -99,    98,   110,   131,   160,   161,   162,   164,   -99,   -99,
     -99,    28,   430,   430,   159,   155,   192,   193,   163,   434,
     170,   237,   174,    12,   -99,   152,   402,   -99,   -99,   -99,
     258,   258,   258,   258,   -99,   -99,   258,   133,   179,   -99,
       9,   -99,   -99,   -99,   -99,   -99,   -99,   258,   177,   469,
     258,   184,   -99,   152,   -99,   -99,   -99,   -99,    -3,   181,
     201,   200,   270,   258,   -99,   152,   -99,   -99,   -99,   -99,
      -3,    31,    41,   -99,   -99,   -99,   -99,   -99,   202,   258,
     -99,   -99,   273,   -99,   148,   186,   206,    42,   196,   -99,
     -99,   168,   214,   -99,   -99,   258,   -99,   303,   336,   -99,
     133,   -99,   199,   291,   205,   217,   -99,   -99,    14,   -99,
     258,   -99,   -99,   152,   -99,   -99,   -99,   -99,    -3,   210,
     -99,   220,   -99,   -99,   224,   173,   219,   223,   204,   -99,
     -99,   -99,   -99,   -99,   258,   234,   239,   -99,   152,   -99,
     -99,   -99,   -99,    -3,   171,   369,   235,   -99,   -99,   255,
     -99,   258,   -99,   -99,   152,   -99,   -99,   -99,   -99,    -3,
     -99,   -99,   268,   256,   -99,   -99
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,   119,   120,     5,   118,   117,   116,     0,     0,     0,
       0,     1,     2,     0,     7,    14,     0,    21,     0,   110,
     111,   112,   113,     8,     9,     0,     4,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    21,
      21,    32,    32,    32,    31,    21,   109,   123,   124,   121,
     122,   125,   126,   127,   128,    11,    96,   108,     0,    98,
       0,     6,   114,   115,     0,    98,     0,     0,     0,    78,
       0,     0,     3,    15,    17,    46,    20,    28,    29,    30,
      19,     0,     0,     0,     0,     0,     0,     0,    97,    10,
      27,    22,    21,    21,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,    46,    35,    37,    12,    23,    25,
       0,     0,     0,     0,    16,    18,     0,     0,     0,    95,
       0,   129,   130,   131,   133,   132,   134,     0,     0,   109,
       0,     0,    70,    73,    74,    75,    76,    72,     0,     0,
       0,     0,     0,     0,    38,    41,    42,    43,    44,    40,
       0,     0,     0,    99,   101,   103,   105,    57,     0,     0,
      46,    34,    94,    68,    98,     0,     0,    82,     0,   107,
      36,    98,     0,    13,    26,     0,    58,     0,     0,    77,
       0,    71,     0,     0,     0,     0,    45,    39,    98,    33,
       0,    59,    60,    63,    64,    65,    66,    62,     0,     0,
      93,     0,    79,   106,     0,    98,     0,     0,    81,    93,
      56,    67,    61,    69,     0,     0,     0,    83,    86,    87,
      88,    89,    85,     0,    82,     0,    98,    90,    91,     0,
      80,     0,    47,    48,    51,    52,    53,    54,    50,     0,
      92,    84,    98,     0,    55,    49
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -99,   -99,   -99,     8,   -99,   -49,   -99,   -99,   -99,    85,
      -9,   -99,   -99,   -99,    37,   -73,   -98,   -77,   -99,   -99,
     -71,   -99,   -69,   -99,   -99,    48,    93,   -65,   -17,   -99,
     -99,   -99,   -99,   -59,   -96,   -99,   -52,     1,   111,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    17,     8,    10,    14,    58,    81,   151,    37,
      38,    82,    83,   152,    39,    40,   106,    41,   225,    95,
      42,   178,    43,   101,    44,   184,   208,    98,    99,    84,
      85,    86,    87,    45,    56,    25,    64,     9,    57,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,    55,   105,   100,    88,   138,   142,    28,    59,    89,
     150,    16,    27,    65,   153,   154,   155,   156,    62,    63,
     157,    11,    26,    29,   134,  -100,  -104,  -102,   133,   146,
     135,    12,   136,   145,    13,   147,    61,   148,   -98,  -100,
    -104,  -102,   137,    91,    27,    32,   150,   149,   140,    15,
     104,    69,   158,   160,    30,   141,    72,   204,    31,    32,
      33,    34,   177,   176,   -24,   146,    75,    96,    66,   145,
      35,   147,    36,   148,   -98,  -100,  -104,  -102,    77,    78,
      79,   150,   198,   149,     1,     2,   166,     4,     5,     6,
     182,   183,   132,  -100,  -104,  -102,    67,   144,   172,   -22,
     146,   194,   173,    68,   145,   193,   147,   195,   148,   196,
     162,   161,   223,   164,    70,   199,    71,    90,   149,   197,
    -100,  -104,  -102,    73,    74,    76,   171,    92,   223,   239,
      80,   219,   102,   144,   107,   218,    46,   220,    31,   221,
      33,    34,    15,   174,    93,   108,   206,   219,   235,   222,
      35,   218,   234,   220,   236,   221,   237,    97,   188,  -100,
    -104,  -102,    47,    48,   103,   222,   238,   109,   144,   192,
     110,   229,   111,   205,   129,   112,   113,   114,   115,  -100,
    -104,  -102,   116,   179,  -100,  -104,  -102,   243,    49,    50,
     117,    51,    52,    53,    54,   118,   119,   226,    75,   217,
      47,    48,   159,   186,   168,   214,   120,   129,   211,    31,
      32,    33,    34,   128,   242,   217,   233,   139,   215,   182,
     183,   163,   216,    36,   165,   167,    49,    50,   180,    51,
      52,    53,    54,    47,    48,   169,   200,   175,   214,   185,
     129,   181,    31,    32,    33,    34,  -100,  -104,  -102,   187,
     202,   215,   203,   207,   212,   216,    36,   209,   213,    49,
      50,    46,    51,    52,    53,    54,    47,    48,   210,   227,
     240,   130,   230,   129,   228,    31,    32,    33,    34,  -100,
    -104,  -102,   131,   -98,  -100,  -104,  -102,    47,    48,    36,
     241,   245,    49,    50,   201,    51,    52,    53,    54,    47,
      48,     0,   224,   244,   143,     0,   129,     0,    31,    32,
      33,    34,     0,    49,    50,   170,    51,    52,    53,    54,
      47,    48,    36,     0,     0,    49,    50,     0,    51,    52,
      53,    54,    47,    48,     0,     0,     0,   143,     0,   129,
       0,    31,    32,    33,    34,     0,    49,    50,   189,    51,
      52,    53,    54,     0,     0,    36,     0,     0,    49,    50,
       0,    51,    52,    53,    54,    47,    48,     0,     0,     0,
     190,     0,   129,     0,    31,    32,    33,    34,    62,    63,
      60,   191,    19,    20,    21,    22,     0,     0,    36,     0,
       0,    49,    50,     0,    51,    52,    53,    54,    47,    48,
       0,     0,     0,   231,     0,   129,     0,    31,    32,    33,
      34,    94,     1,     2,   232,     4,     5,     6,     0,     0,
       0,    36,     0,     0,    49,    50,     0,    51,    52,    53,
      54,    47,    48,    29,     0,     0,   143,     0,     0,     0,
      31,    32,    33,    34,     0,  -100,  -104,  -102,   121,   122,
     123,   124,   125,     0,    36,     0,     0,    49,    50,     0,
      51,    52,    53,    54,    30,   126,     0,     0,    31,    32,
      33,    34,    18,     0,    19,    20,    21,    22,     0,     0,
      35,     0,    36,     0,    23,    24,     1,     2,     3,     4,
       5,     6,    60,     0,    19,    20,    21,    22
};

static const yytype_int16 yycheck[] =
{
       9,    18,    75,    68,    56,   101,   104,    16,    25,    58,
     106,    10,     3,    30,   110,   111,   112,   113,    21,    22,
     116,     0,    14,     3,   101,    11,    12,    13,   101,   106,
     101,    32,   101,   106,     3,   106,    28,   106,    10,    11,
      12,    13,   101,    60,     3,    39,   142,   106,    36,    58,
      44,    44,   117,    44,    34,    43,    33,    43,    38,    39,
      40,    41,   160,   159,    36,   142,    46,    66,    42,   142,
      50,   142,    52,   142,    10,    11,    12,    13,    41,    42,
      43,   177,   178,   142,     4,     5,   138,     7,     8,     9,
      48,    49,   101,    11,    12,    13,    42,   106,   150,    35,
     177,   178,   151,    42,   177,   178,   177,   178,   177,   178,
     127,   120,   208,   130,    42,   180,    42,    35,   177,   178,
      11,    12,    13,    38,    39,    40,   143,    35,   224,   225,
      45,   208,     3,   142,    36,   208,     3,   208,    38,   208,
      40,    41,   151,   152,    35,    35,   198,   224,   225,   208,
      50,   224,   225,   224,   225,   224,   225,    24,   175,    11,
      12,    13,    29,    30,    60,   224,   225,    36,   177,   178,
      10,   223,    11,   190,     3,    13,    12,    92,    93,    11,
      12,    13,    23,    35,    11,    12,    13,   239,    55,    56,
      35,    58,    59,    60,    61,     3,     3,   214,    46,   208,
      29,    30,    23,    35,     3,    34,    43,     3,    35,    38,
      39,    40,    41,    43,   231,   224,   225,    43,    47,    48,
      49,    44,    51,    52,    40,    44,    55,    56,    42,    58,
      59,    60,    61,    29,    30,    35,    37,    35,    34,    43,
       3,    35,    38,    39,    40,    41,    11,    12,    13,    35,
      45,    47,    35,    43,    35,    51,    52,    37,    35,    55,
      56,     3,    58,    59,    60,    61,    29,    30,    44,    35,
      35,    34,   224,     3,    35,    38,    39,    40,    41,    11,
      12,    13,    45,    10,    11,    12,    13,    29,    30,    52,
      35,    35,    55,    56,   183,    58,    59,    60,    61,    29,
      30,    -1,   209,    35,    34,    -1,     3,    -1,    38,    39,
      40,    41,    -1,    55,    56,    45,    58,    59,    60,    61,
      29,    30,    52,    -1,    -1,    55,    56,    -1,    58,    59,
      60,    61,    29,    30,    -1,    -1,    -1,    34,    -1,     3,
      -1,    38,    39,    40,    41,    -1,    55,    56,    45,    58,
      59,    60,    61,    -1,    -1,    52,    -1,    -1,    55,    56,
      -1,    58,    59,    60,    61,    29,    30,    -1,    -1,    -1,
      34,    -1,     3,    -1,    38,    39,    40,    41,    21,    22,
      23,    45,    25,    26,    27,    28,    -1,    -1,    52,    -1,
      -1,    55,    56,    -1,    58,    59,    60,    61,    29,    30,
      -1,    -1,    -1,    34,    -1,     3,    -1,    38,    39,    40,
      41,     3,     4,     5,    45,     7,     8,     9,    -1,    -1,
      -1,    52,    -1,    -1,    55,    56,    -1,    58,    59,    60,
      61,    29,    30,     3,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    40,    41,    -1,    11,    12,    13,    14,    15,
      16,    17,    18,    -1,    52,    -1,    -1,    55,    56,    -1,
      58,    59,    60,    61,    34,    31,    -1,    -1,    38,    39,
      40,    41,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      50,    -1,    52,    -1,    35,    36,     4,     5,     6,     7,
       8,     9,    23,    -1,    25,    26,    27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    63,    65,    99,
      66,     0,    32,     3,    67,    72,    99,    64,    23,    25,
      26,    27,    28,    35,    36,    97,    65,     3,    72,     3,
      34,    38,    39,    40,    41,    50,    52,    71,    72,    76,
      77,    79,    82,    84,    86,    95,     3,    29,    30,    55,
      56,    58,    59,    60,    61,    90,    96,   100,    68,    90,
      23,    65,    21,    22,    98,    90,    42,    42,    42,    44,
      42,    42,    33,    71,    71,    46,    71,    76,    76,    76,
      71,    69,    73,    74,    91,    92,    93,    94,    98,    67,
      35,    90,    35,    35,     3,    81,    99,    24,    89,    90,
      89,    85,     3,    60,    44,    77,    78,    36,    35,    36,
      10,    11,    13,    12,    71,    71,    23,    35,     3,     3,
      43,    14,    15,    16,    17,    18,    31,   101,    43,     3,
      34,    45,    72,    77,    79,    82,    84,    95,    96,    43,
      36,    43,    78,    34,    72,    77,    79,    82,    84,    95,
      96,    70,    75,    96,    96,    96,    96,    96,    89,    23,
      44,    72,    90,    44,    90,    40,    98,    44,     3,    35,
      45,    90,    98,    67,    72,    35,    96,    78,    83,    35,
      42,    35,    48,    49,    87,    43,    35,    35,    90,    45,
      34,    45,    72,    77,    79,    82,    84,    95,    96,    89,
      37,   100,    45,    35,    43,    90,    98,    43,    88,    37,
      44,    35,    35,    35,    34,    47,    51,    72,    77,    79,
      82,    84,    95,    96,    88,    80,    90,    35,    35,    98,
      87,    34,    45,    72,    77,    79,    82,    84,    95,    96,
      35,    35,    90,    98,    35,    35
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    64,    63,    65,    66,    65,    65,    67,    68,
      67,    69,    70,    67,    67,    71,    71,    71,    71,    71,
      71,    71,    73,    72,    74,    75,    72,    72,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    78,    78,    78,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    84,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    86,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    91,    90,
      92,    90,    93,    90,    94,    90,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    99,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   101,   101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     3,     0,     5,     0,     2,     0,
       4,     0,     0,     7,     1,     2,     4,     2,     4,     2,
       2,     0,     0,     5,     0,     0,     7,     4,     2,     2,
       2,     1,     0,     7,     5,     3,     5,     3,     2,     4,
       2,     2,     2,     2,     2,     4,     0,    11,     2,     4,
       2,     2,     2,     2,     2,     4,     0,     3,     4,     7,
       2,     4,     2,     2,     2,     2,     2,     4,     0,     9,
       2,     4,     2,     2,     2,     2,     2,     4,     0,     7,
       5,     3,     0,     2,     4,     2,     2,     2,     2,     2,
       3,     3,     4,     0,     3,     2,     1,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     7,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1
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
#line 80 "parser.y"
            {part_index = 1;}
#line 1641 "parser.tab.c"
    break;

  case 3:
#line 80 "parser.y"
                                          {printf("\n checker done !!\n"); afficherIDF();}
#line 1647 "parser.tab.c"
    break;

  case 5:
#line 86 "parser.y"
       {currentConst = 1;}
#line 1653 "parser.tab.c"
    break;

  case 8:
#line 92 "parser.y"
          {insertTS((yyvsp[-1].sym),currentType,currentConst,currentType,"0");}
#line 1659 "parser.tab.c"
    break;

  case 9:
#line 93 "parser.y"
         {insertTS((yyvsp[-1].sym),currentType,currentConst,currentType,"0");}
#line 1665 "parser.tab.c"
    break;

  case 11:
#line 94 "parser.y"
                      {printTree(op_tree);}
#line 1671 "parser.tab.c"
    break;

  case 12:
#line 94 "parser.y"
                                                 {sprintf(assignValue,"%f",SumArbre(&op_tree)); insertTS((yyvsp[-4].sym),currentType,currentConst,assignType,assignValue);deleteTree(&op_tree);currentOp ='+';}
#line 1677 "parser.tab.c"
    break;

  case 22:
#line 111 "parser.y"
                    {printTree(op_tree);}
#line 1683 "parser.tab.c"
    break;

  case 23:
#line 111 "parser.y"
                                               {
    if(!strcmp(assignType,"float") || !strcmp(assignType,"int"))
        sprintf(assignValue,"%f",SumArbre(&op_tree));
        
    insertTS((yyvsp[-4].sym) ,currentType,currentConst,assignType,assignValue);
    deleteTree(&op_tree); 
    currentOp = '+';}
#line 1695 "parser.tab.c"
    break;

  case 24:
#line 118 "parser.y"
                     {printTree(op_tree);}
#line 1701 "parser.tab.c"
    break;

  case 25:
#line 118 "parser.y"
                                                {
    if(!strcmp(assignType,"float") || !strcmp(assignType,"int"))
         sprintf(assignValue,"%f",SumArbre(&op_tree));

    insertTS((yyvsp[-4].sym),currentType,currentConst,assignType,assignValue );
    deleteTree(&op_tree); 
    currentOp = '+';}
#line 1713 "parser.tab.c"
    break;

  case 98:
#line 270 "parser.y"
           {op = '+';currentOp = '+';}
#line 1719 "parser.tab.c"
    break;

  case 100:
#line 271 "parser.y"
           {op = '+';currentOp = '-';}
#line 1725 "parser.tab.c"
    break;

  case 102:
#line 272 "parser.y"
           {op = '*';currentOp = '/';}
#line 1731 "parser.tab.c"
    break;

  case 104:
#line 273 "parser.y"
           {op = '*';currentOp = '*';}
#line 1737 "parser.tab.c"
    break;

  case 109:
#line 284 "parser.y"
     {strcpy(assignType,aaa);
if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
SendToCalculator(atof(searchTS((yyvsp[0].sym))->value),currentOp);
}else{
    printf("\n ERREUR : Le type assigné n'est pas le bon !! \n");
}}
#line 1748 "parser.tab.c"
    break;

  case 116:
#line 300 "parser.y"
      {strcpy(currentType,"float");}
#line 1754 "parser.tab.c"
    break;

  case 117:
#line 301 "parser.y"
     {strcpy(currentType,"int");}
#line 1760 "parser.tab.c"
    break;

  case 118:
#line 302 "parser.y"
      {strcpy(currentType,"bool");}
#line 1766 "parser.tab.c"
    break;

  case 119:
#line 303 "parser.y"
      {strcpy(currentType,"char");}
#line 1772 "parser.tab.c"
    break;

  case 120:
#line 304 "parser.y"
        {strcpy(currentType,"string");}
#line 1778 "parser.tab.c"
    break;

  case 121:
#line 310 "parser.y"
              {
        strcpy(assignType,"float");
        SendToCalculator((yyvsp[0].real),currentOp);
    sprintf(assignValue,"%f",(yyvsp[0].real));
    }
#line 1788 "parser.tab.c"
    break;

  case 122:
#line 315 "parser.y"
           {
        strcpy(assignType,"float");
        SendToCalculator((yyvsp[0].real),currentOp);
    sprintf(assignValue,"%f",(yyvsp[0].real));
    }
#line 1798 "parser.tab.c"
    break;

  case 123:
#line 320 "parser.y"
       {
        strcpy(assignType,"bool");
    strcpy(assignValue,(yyvsp[0].sym));
    }
#line 1807 "parser.tab.c"
    break;

  case 124:
#line 324 "parser.y"
       {
        strcpy(assignType,"bool");
    strcpy(assignValue,(yyvsp[0].sym));
    }
#line 1816 "parser.tab.c"
    break;

  case 125:
#line 328 "parser.y"
             {
        strcpy(assignType,"int");
        SendToCalculator((yyvsp[0].num),currentOp);
    sprintf(assignValue,"%d",(yyvsp[0].num));
    }
#line 1826 "parser.tab.c"
    break;

  case 126:
#line 333 "parser.y"
         {
        strcpy(assignType,"int");
        SendToCalculator((yyvsp[0].num),currentOp); 
    sprintf(assignValue,"%d",(yyvsp[0].num));
    }
#line 1836 "parser.tab.c"
    break;

  case 127:
#line 338 "parser.y"
            {
        strcpy(assignType,"string");
    strcpy(assignValue,(yyvsp[0].sym));
    }
#line 1845 "parser.tab.c"
    break;

  case 128:
#line 342 "parser.y"
         {
        strcpy(assignType,"char");
    strcpy(assignValue,(yyvsp[0].sym));
    }
#line 1854 "parser.tab.c"
    break;


#line 1858 "parser.tab.c"

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
#line 353 "parser.y"


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

