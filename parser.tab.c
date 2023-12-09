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


extern int yylineo; // Les lignes
extern int col ; // Les colonnes
extern char currentType[20];
extern int currentConst  ;
extern int part_index;
extern char assignType[20];
extern char assignValue[20];
extern char tp[20];
extern int s;
int LastLeng =0; // Le length du dernier token trouvé
int int_value = 0;
float float_value = 1;
char string_value[20] ;
 
// Operation semantique
extern char op;
char currentOp = '+';
Node* op_tree;  


// Inserer les donnees dans l'arbre

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
#define YYLAST   543

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

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
       0,    86,    86,    86,    94,    95,    95,    96,   102,   103,
     103,   104,   104,   104,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   124,   125,   125,   138,   139,   140,   141,
     142,   148,   163,   163,   163,   176,   176,   195,   196,   197,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   212,
     213,   215,   220,   221,   222,   223,   224,   230,   231,   232,
     233,   234,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   253,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   268,   269,   276,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   294,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   312,   315,   316,   317,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   338,   339,
     346,   347,   348,   349,   349,   350,   350,   351,   351,   352,
     352,   358,   359,   371,   371,   371,   371,   371,   371,   375,
     381,   387,   393,   401,   401,   407,   408,   409,   410,   411,
     417,   422,   427,   431,   435,   440,   445,   449,   457,   458
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDF", "CHAR", "STRING", "CONST", "BOOL",
  "INT", "FLOAT", "MINUS", "MULT", "DIV", "EG", "SUP", "LES", "LESE",
  "SUPE", "AND", "NOTEG", "OR", "INCR", "DECR", "ASSIG", "NOT", "AddAff",
  "MinAff", "MulAff", "DivAff", "BEG", "END", "RETURN", "SEMI", "SEP",
  "DeuxPoints", "SBRA", "CBRA", "FOR", "IF", "WHILE", "DO", "OPAR", "CPAR",
  "OPEN", "CLOSE", "ELSE", "BREAK", "DEFAULT", "CASE", "SWITCH",
  "CONTINUE", "PRINTF", "neg_FLOAT_val", "FLOAT_val", "BOOL_val",
  "neg_INT_val", "INT_val", "STRING_val", "CHAR_val", "_TRUE", "_FALSE",
  "PLUS", "$accept", "input", "$@1", "decline", "$@2", "IDFSEP", "$@3",
  "$@4", "$@5", "affline", "$@6", "AFFECTATION", "$@7", "$@8", "$@9",
  "TABLE", "TABLED", "inside_tab", "BOUCLE", "IFCOND", "inside_if",
  "FORCOND", "inside_for", "INIT", "WHILECOND", "inside_while", "DOWCOND",
  "inside_dowhile", "SWITCHCOMD", "inside_switch", "inside_case",
  "comparaison", "OPERATION", "$@10", "$@11", "$@12", "$@13", "EXPRESSION",
  "cmp", "AFFOP", "DecInc", "type", "VALUES", "STMT", YY_NULLPTR
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

#define YYPACT_NINF (-118)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-130)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     362,  -118,  -118,  -118,  -118,  -118,  -118,    17,     4,    38,
     528,  -118,  -118,   477,   362,  -118,   142,   208,    53,   457,
     134,  -118,  -118,  -118,  -118,  -118,  -118,    22,   161,  -118,
      21,  -118,    38,    27,  -118,    38,   515,   362,   431,   134,
      19,    34,    49,    64,    51,    76,    36,   457,   457,   442,
       6,     6,     6,  -118,   457,  -118,   115,  -118,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,    73,     2,  -118,    38,    78,
      93,    94,  -118,   471,  -118,   471,  -118,   134,  -118,  -118,
    -118,   104,    84,   430,   412,   412,  -118,   135,    83,  -118,
    -118,  -118,    -3,  -118,  -118,  -118,  -118,  -118,  -118,  -118,
     108,   110,    88,   158,   132,   162,  -118,  -118,   143,    23,
     147,   152,   144,   167,   157,    73,  -118,   457,   187,   183,
     227,   229,   191,   503,   192,   281,   204,   -13,  -118,   203,
     391,  -118,  -118,   161,   161,   161,   161,    31,   214,  -118,
     217,    33,  -118,    48,   471,   222,   457,  -118,   161,   412,
     228,   -14,    11,  -118,  -118,  -118,  -118,  -118,  -118,   134,
     240,   515,   134,   231,  -118,   203,  -118,  -118,  -118,     2,
    -118,   242,   272,   254,   291,   134,  -118,   203,  -118,  -118,
    -118,     2,  -118,    38,    53,  -118,  -118,  -118,  -118,   256,
    -118,   257,  -118,  -118,   259,  -118,   260,  -118,    38,  -118,
     471,  -118,  -118,   255,   161,  -118,  -118,   111,  -118,   151,
     258,   266,    25,   263,  -118,  -118,   197,   268,  -118,  -118,
    -118,  -118,  -118,  -118,  -118,   269,   134,  -118,   321,   351,
    -118,   412,  -118,   280,   471,   271,   284,  -118,  -118,    66,
      40,  -118,   134,  -118,  -118,   203,  -118,  -118,  -118,     2,
    -118,   275,  -118,   289,  -118,  -118,  -118,    38,   283,   215,
     295,   313,   251,  -118,  -118,  -118,  -118,  -118,  -118,   134,
     323,   324,  -118,   203,  -118,  -118,  -118,     2,  -118,   221,
     361,   225,  -118,  -118,   325,  -118,   134,  -118,  -118,   203,
    -118,  -118,  -118,     2,  -118,  -118,  -118,   232,   330,  -118,
    -118
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,   148,   149,     5,   147,   146,   145,     0,     0,     0,
       0,     1,     2,     0,     7,    14,     0,     0,     0,    30,
       0,   139,   140,   141,   142,     8,     9,     0,     0,     4,
       0,    15,     0,     0,    19,     0,     0,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    30,    30,
      56,    56,    56,    55,    30,   132,     0,   150,   151,   154,
     155,   156,   157,   152,   153,    11,   120,   131,     0,     0,
      39,     0,    35,    51,    17,    51,    21,     0,     6,   143,
     144,     0,   123,     0,     0,     0,   102,     0,     0,     3,
      23,    26,    70,    29,    52,    53,    54,    28,   121,    31,
       0,     0,     0,     0,     0,     0,   122,    10,    37,     0,
      38,     0,     0,    49,     0,    32,    24,    30,     0,     0,
       0,     0,     0,   123,     0,     0,     0,     0,    70,    59,
      61,    12,    33,     0,     0,     0,     0,     0,     0,    48,
       0,     0,    36,     0,    51,     0,    30,    27,     0,     0,
       0,   121,     0,   133,   134,   135,   137,   136,   138,     0,
       0,   132,     0,     0,    94,    97,    98,    99,   100,     0,
      96,     0,     0,     0,     0,     0,    62,    65,    66,    67,
      68,     0,    64,     0,     0,   124,   126,   128,   130,     0,
      46,     0,    42,    45,     0,    47,     0,    16,     0,    50,
      51,    25,    81,     0,     0,    70,    58,   118,    92,   123,
       0,     0,   106,     0,   159,    60,   123,     0,    13,    34,
      40,    43,    41,    44,    18,     0,     0,    82,     0,     0,
     101,     0,    95,     0,     0,     0,     0,    69,    63,     0,
     123,    57,     0,    83,    84,    87,    88,    89,    90,     0,
      86,     0,   117,     0,   103,   158,    20,     0,     0,   123,
       0,     0,   105,   117,    22,    80,    91,    85,    93,     0,
       0,     0,   107,   110,   111,   112,   113,     0,   109,   106,
       0,   123,   114,   115,     0,   104,     0,    71,    72,    75,
      76,    77,    78,     0,    74,   116,   108,   123,     0,    79,
      73
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -118,  -118,  -118,     1,  -118,   -29,  -118,  -118,  -118,    14,
    -118,   -17,  -118,  -118,  -118,  -118,  -118,   -67,    52,   -83,
    -117,  -109,  -118,  -118,  -103,  -118,   -81,  -118,  -118,    74,
     100,   -75,   -20,  -118,  -118,  -118,  -118,   -24,  -118,  -118,
     -54,     3,   -68,   -77
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    19,     8,    10,    14,    68,   100,   183,    46,
     146,    15,   101,   184,   111,    16,    17,   112,    48,    49,
     130,    50,   280,   119,    51,   229,    52,   125,    53,   235,
     262,   122,   123,   102,   103,   104,   105,    66,   159,    28,
      81,     9,    67,    54
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,    37,    47,    74,    72,   113,    76,   113,   114,   129,
     124,   174,   106,    18,    36,    29,   166,    11,  -119,    82,
     172,   178,   167,    79,    80,    69,   138,   179,  -119,   173,
      47,    47,    47,    12,   189,    41,   194,    47,    78,   107,
     128,    13,   165,    40,   168,    42,    43,   177,   170,   180,
    -125,  -129,  -127,   182,   205,    44,    36,   115,    70,   139,
      83,    90,    91,    93,    73,   178,    89,   190,    97,   195,
      75,   179,   233,   234,   203,    84,   113,   199,    71,   140,
     197,   198,   258,  -125,  -129,  -127,   120,   191,   228,   196,
      85,   177,    87,   180,  -125,  -129,  -127,   182,   256,   257,
      47,   169,    94,    95,    96,    99,   181,    86,   164,   185,
     186,   187,   188,   176,   108,   211,   117,    88,    98,   178,
     246,  -125,  -129,  -127,   202,   179,   247,   217,   109,    47,
     110,   147,   113,   225,  -123,   206,   116,    55,   126,   207,
     127,   131,   209,   132,   135,   177,   245,   180,   248,   133,
     181,   182,   250,   274,   218,   216,   251,   176,    56,   275,
     201,  -125,  -129,  -127,    55,    30,   253,   219,   134,   224,
     274,   290,  -123,   136,    31,    32,   275,   291,   137,   273,
     227,   276,   141,   230,   142,   278,    57,    58,   143,    59,
      60,    61,    62,    63,    64,   260,   273,   289,   276,   292,
     144,   145,   278,   294,   181,   249,   240,  -125,  -129,  -127,
     148,   176,   244,    57,    58,   149,    59,    60,    61,    62,
      63,    64,   259,   284,   161,  -125,  -129,  -127,   264,   237,
     150,    33,   151,   152,   160,  -125,  -129,  -127,   277,   298,
      34,    35,  -125,  -129,  -127,   272,   171,   266,    92,   281,
     192,   204,   269,   193,   161,   277,   293,   295,    40,    41,
      42,    43,   272,   288,   299,   200,   297,   270,   233,   234,
     210,   271,    45,    57,    58,   213,    59,    60,    61,    62,
      63,    64,   269,   208,   161,   212,   214,   226,    40,    41,
      42,    43,   220,   221,   161,   222,   223,   270,   232,   231,
     238,   271,    45,    57,    58,   236,    59,    60,    61,    62,
      63,    64,   162,   239,   252,   254,   255,   261,    40,    41,
      42,    43,   175,   263,   161,   163,   265,   267,    40,    41,
      42,    43,    45,    57,    58,   215,    59,    60,    61,    62,
      63,    64,    45,    57,    58,   268,    59,    60,    61,    62,
      63,    64,   175,   285,   161,   282,   283,   296,    40,    41,
      42,    43,   300,   279,   161,   241,     1,     2,     3,     4,
       5,     6,    45,    57,    58,     0,    59,    60,    61,    62,
      63,    64,   242,     0,     0,     0,     0,     0,    40,    41,
      42,    43,   286,     0,   161,   243,     0,     0,    40,    41,
      42,    43,    45,    57,    58,   287,    59,    60,    61,    62,
      63,    64,    45,    57,    58,    55,    59,    60,    61,    62,
      63,    64,   175,     0,     0,     0,     0,     0,    40,    41,
      42,    43,     0,   118,     1,     2,   121,     4,     5,     6,
       0,     0,    45,    57,    58,    38,    59,    60,    61,    62,
      63,    64,    79,    80,    77,     0,    21,    22,    23,    24,
      38,     0,     0,     0,    57,    58,     0,    59,    60,    61,
      62,    63,    64,    39,     0,     0,     0,     0,     0,    40,
      41,    42,    43,     0,     0,     0,     0,    92,    39,     0,
       0,    44,     0,    45,    40,    41,    42,    43,     0,     0,
      20,     0,    21,    22,    23,    24,    44,     0,    45,    25,
      26,     0,    27,  -125,  -129,  -127,   153,   154,   155,   156,
     157,     0,   158,    57,    58,     0,    59,    60,    61,    62,
      63,    64,     1,     2,     0,     4,     5,     6,    77,     0,
      21,    22,    23,    24
};

static const yytype_int16 yycheck[] =
{
      20,    18,    19,    32,    28,    73,    35,    75,    75,    92,
      85,   128,    66,    10,     3,    14,   125,     0,    32,    39,
      33,   130,   125,    21,    22,     3,     3,   130,    42,    42,
      47,    48,    49,    29,     3,    38,     3,    54,    37,    68,
      43,     3,   125,    37,   125,    39,    40,   130,   125,   130,
      10,    11,    12,   130,    43,    49,     3,    77,    36,    36,
      41,    47,    48,    49,    43,   174,    30,    36,    54,    36,
      43,   174,    47,    48,   149,    41,   144,   144,    56,    56,
      32,    33,    42,    10,    11,    12,    83,    56,   205,    56,
      41,   174,    41,   174,    10,    11,    12,   174,    32,    33,
     117,   125,    50,    51,    52,    32,   130,    43,   125,   133,
     134,   135,   136,   130,    36,   169,    32,    41,     3,   228,
     229,    10,    11,    12,   148,   228,   229,   181,    35,   146,
      36,   117,   200,   200,    61,   152,    32,     3,     3,   159,
      57,    33,   162,    33,    12,   228,   229,   228,   229,    61,
     174,   228,   229,   262,   183,   175,   231,   174,    24,   262,
     146,    10,    11,    12,     3,    23,   234,   184,    10,   198,
     279,   280,    61,    11,    32,    33,   279,   280,    35,   262,
     204,   262,    35,    32,    32,   262,    52,    53,    44,    55,
      56,    57,    58,    59,    60,   249,   279,   280,   279,   280,
      33,    44,   279,   280,   228,   229,   226,    10,    11,    12,
      23,   228,   229,    52,    53,    32,    55,    56,    57,    58,
      59,    60,   242,   277,     3,    10,    11,    12,   257,    32,
       3,    23,     3,    42,    42,    10,    11,    12,   262,   293,
      32,    33,    10,    11,    12,   262,    42,    32,    45,   269,
      36,    23,    31,    36,     3,   279,   280,    32,    37,    38,
      39,    40,   279,   280,    32,    43,   286,    46,    47,    48,
      39,    50,    51,    52,    53,     3,    55,    56,    57,    58,
      59,    60,    31,    43,     3,    43,    32,    32,    37,    38,
      39,    40,    36,    36,     3,    36,    36,    46,    32,    41,
      32,    50,    51,    52,    53,    42,    55,    56,    57,    58,
      59,    60,    31,    44,    34,    44,    32,    42,    37,    38,
      39,    40,    31,    34,     3,    44,    43,    32,    37,    38,
      39,    40,    51,    52,    53,    44,    55,    56,    57,    58,
      59,    60,    51,    52,    53,    32,    55,    56,    57,    58,
      59,    60,    31,   279,     3,    32,    32,    32,    37,    38,
      39,    40,    32,   263,     3,    44,     4,     5,     6,     7,
       8,     9,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    31,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    31,    -1,     3,    44,    -1,    -1,    37,    38,
      39,    40,    51,    52,    53,    44,    55,    56,    57,    58,
      59,    60,    51,    52,    53,     3,    55,    56,    57,    58,
      59,    60,    31,    -1,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    -1,     3,     4,     5,    24,     7,     8,     9,
      -1,    -1,    51,    52,    53,     3,    55,    56,    57,    58,
      59,    60,    21,    22,    23,    -1,    25,    26,    27,    28,
       3,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    45,    31,    -1,
      -1,    49,    -1,    51,    37,    38,    39,    40,    -1,    -1,
      23,    -1,    25,    26,    27,    28,    49,    -1,    51,    32,
      33,    -1,    35,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,     4,     5,    -1,     7,     8,     9,    23,    -1,
      25,    26,    27,    28
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    63,    65,   103,
      66,     0,    29,     3,    67,    73,    77,    78,   103,    64,
      23,    25,    26,    27,    28,    32,    33,    35,   101,    65,
      23,    32,    33,    23,    32,    33,     3,    73,     3,    31,
      37,    38,    39,    40,    49,    51,    71,    73,    80,    81,
      83,    86,    88,    90,   105,     3,    24,    52,    53,    55,
      56,    57,    58,    59,    60,    94,    99,   104,    68,     3,
      36,    56,    99,    43,    67,    43,    67,    23,    65,    21,
      22,   102,    94,    41,    41,    41,    43,    41,    41,    30,
      71,    71,    45,    71,    80,    80,    80,    71,     3,    32,
      69,    74,    95,    96,    97,    98,   102,    67,    36,    35,
      36,    76,    79,   104,    79,    94,    32,    32,     3,    85,
     103,    24,    93,    94,    93,    89,     3,    57,    43,    81,
      82,    33,    33,    61,    10,    12,    11,    35,     3,    36,
      56,    35,    32,    44,    33,    44,    72,    71,    23,    32,
       3,     3,    42,    13,    14,    15,    16,    17,    19,   100,
      42,     3,    31,    44,    73,    81,    83,    86,    88,    99,
     105,    42,    33,    42,    82,    31,    73,    81,    83,    86,
      88,    99,   105,    70,    75,    99,    99,    99,    99,     3,
      36,    56,    36,    36,     3,    36,    56,    32,    33,    79,
      43,    71,    99,    93,    23,    43,    73,    94,    43,    94,
      39,   102,    43,     3,    32,    44,    94,   102,    67,    73,
      36,    36,    36,    36,    67,    79,    32,    99,    82,    87,
      32,    41,    32,    47,    48,    91,    42,    32,    32,    44,
      94,    44,    31,    44,    73,    81,    83,    86,    88,    99,
     105,    93,    34,   104,    44,    32,    32,    33,    42,    94,
     102,    42,    92,    34,    67,    43,    32,    32,    32,    31,
      46,    50,    73,    81,    83,    86,    88,    99,   105,    92,
      84,    94,    32,    32,   102,    91,    31,    44,    73,    81,
      83,    86,    88,    99,   105,    32,    32,    94,   102,    32,
      32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    64,    63,    65,    66,    65,    65,    67,    68,
      67,    69,    70,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    71,    72,    71,    71,    71,    71,    71,
      71,    73,    74,    75,    73,    76,    73,    77,    77,    77,
      78,    78,    78,    78,    78,    78,    78,    78,    78,    79,
      79,    79,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    86,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    90,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    93,    93,
      94,    94,    94,    95,    94,    96,    94,    97,    94,    98,
      94,    99,    99,   100,   100,   100,   100,   100,   100,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   103,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     5,     3,     0,     5,     0,     2,     0,
       4,     0,     0,     7,     1,     2,     6,     3,     7,     2,
       9,     3,    10,     2,     0,     5,     2,     4,     2,     2,
       0,     4,     0,     0,     7,     0,     5,     4,     4,     3,
       7,     7,     6,     7,     7,     6,     6,     6,     5,     1,
       3,     0,     2,     2,     2,     1,     0,     7,     5,     3,
       5,     3,     2,     4,     2,     2,     2,     2,     2,     4,
       0,    11,     2,     4,     2,     2,     2,     2,     2,     4,
       0,     3,     4,     7,     2,     4,     2,     2,     2,     2,
       2,     4,     0,     9,     2,     4,     2,     2,     2,     2,
       2,     4,     0,     7,     5,     3,     0,     2,     4,     2,
       2,     2,     2,     2,     3,     3,     4,     0,     3,     2,
       1,     2,     2,     0,     4,     0,     4,     0,     4,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     5
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
#line 86 "parser.y"
            {part_index = 1;}
#line 1677 "parser.tab.c"
    break;

  case 3:
#line 86 "parser.y"
                                          {
                                                printf("\n CHECKER DONE !!\n"); 
                                                afficherTS();}
#line 1685 "parser.tab.c"
    break;

  case 5:
#line 95 "parser.y"
       {currentConst = 1;}
#line 1691 "parser.tab.c"
    break;

  case 8:
#line 102 "parser.y"
          {insertTS((yyvsp[-1].sym),currentType,currentConst,currentType,"0");}
#line 1697 "parser.tab.c"
    break;

  case 9:
#line 103 "parser.y"
         {insertTS((yyvsp[-1].sym),currentType,currentConst,currentType,"0");}
#line 1703 "parser.tab.c"
    break;

  case 11:
#line 104 "parser.y"
                      {/*printtree(op_tree);*/}
#line 1709 "parser.tab.c"
    break;

  case 12:
#line 104 "parser.y"
                                                     {
                                                    sprintf(assignValue,"%f",SumArbre(&op_tree)); 
                                                    s = 1;
                                                    insertTS((yyvsp[-4].sym),currentType,currentConst,assignType,assignValue);deleteTree(&op_tree);
                                                    currentOp ='+';
                                                    s=0;}
#line 1720 "parser.tab.c"
    break;

  case 24:
#line 125 "parser.y"
                  {  // Operation d'incrementation et decrementation a revoir!!!
                                            if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
                                                SendToCalculator(atof(searchTS((yyvsp[-2].sym))->value),'+');
                                                SendToCalculator(1,currentOp);
                                                
                                                sprintf(assignValue,"%f",SumArbre(&op_tree));
                                                }
                                            s = 1;
                                            insertTS((yyvsp[-2].sym) ,currentType,currentConst,assignType,assignValue); 
                                            s=0;
                                            deleteTree(&op_tree); 
                                            currentOp = '+';}
#line 1737 "parser.tab.c"
    break;

  case 31:
#line 148 "parser.y"
                          {
                                                    if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
                                                        sprintf(assignValue,"%f",SumArbre(&op_tree));
                                                        
                                                        int calculedType = getTypeFromCalcule(assignValue);
                                                        if(calculedType == 1)strcpy(assignType,"float");
                                                        if(calculedType == 0)strcpy(assignType,"int");

                                                    }
                                                    s = 1; 
                                                    insertTS((yyvsp[-3].sym) ,currentType,currentConst,assignType,assignValue); 
                                                    currentConst = 0;
                                                    s=0;
                                                    deleteTree(&op_tree); 
                                                    currentOp = '+';}
#line 1757 "parser.tab.c"
    break;

  case 32:
#line 163 "parser.y"
                     {/*/*printtree(op_tree);*/}
#line 1763 "parser.tab.c"
    break;

  case 33:
#line 163 "parser.y"
                                                      {
                                                    if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
                                                        sprintf(assignValue,"%f",SumArbre(&op_tree));
                                                        int calculedType = getTypeFromCalcule(assignValue);
                                                        if(calculedType == 1)strcpy(assignType,"float");
                                                        if(calculedType == 0)strcpy(assignType,"int");
                                                    }
                                                   

                                                    insertTS((yyvsp[-4].sym),currentType,currentConst,assignType,assignValue );
                                                    deleteTree(&op_tree); 
                                                    currentOp = '+';}
#line 1780 "parser.tab.c"
    break;

  case 35:
#line 176 "parser.y"
                      {/*printtree(op_tree);*/}
#line 1786 "parser.tab.c"
    break;

  case 36:
#line 176 "parser.y"
                                                     { 
                                                    s=0;
                                                    if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
                                                        SendToCalculator(atof(searchTS((yyvsp[-4].sym))->value),'+');
                                                        sprintf(assignValue,"%f",SumArbre(&op_tree));
                                                        int calculedType = getTypeFromCalcule(assignValue);
                                                        if(calculedType == 1)strcpy(assignType,"float");
                                                        if(calculedType == 0)strcpy(assignType,"int");

                                                    }
                                                    s = 1;
                                                    insertTS((yyvsp[-4].sym),currentType,currentConst,assignType,assignValue );
                                                    s = 0;
                                                    deleteTree(&op_tree); 
                                                    currentOp = '+';}
#line 1806 "parser.tab.c"
    break;

  case 37:
#line 195 "parser.y"
                  {insertTS((yyvsp[-3].sym),currentType,currentConst,currentType,"0");}
#line 1812 "parser.tab.c"
    break;

  case 38:
#line 196 "parser.y"
                       {insertTS((yyvsp[-3].sym),currentType,currentConst,currentType,"0");}
#line 1818 "parser.tab.c"
    break;

  case 39:
#line 197 "parser.y"
               {insertTS((yyvsp[-2].sym),currentType,currentConst,currentType,"0");}
#line 1824 "parser.tab.c"
    break;

  case 40:
#line 200 "parser.y"
                                {insertTS((yyvsp[-6].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1830 "parser.tab.c"
    break;

  case 41:
#line 201 "parser.y"
                                     {insertTS((yyvsp[-6].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1836 "parser.tab.c"
    break;

  case 42:
#line 202 "parser.y"
                             {insertTS((yyvsp[-5].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1842 "parser.tab.c"
    break;

  case 43:
#line 203 "parser.y"
                                     {insertTS((yyvsp[-6].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1848 "parser.tab.c"
    break;

  case 44:
#line 204 "parser.y"
                                         {insertTS((yyvsp[-6].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1854 "parser.tab.c"
    break;

  case 45:
#line 205 "parser.y"
                                 {insertTS((yyvsp[-5].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1860 "parser.tab.c"
    break;

  case 46:
#line 206 "parser.y"
                             {insertTS((yyvsp[-5].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1866 "parser.tab.c"
    break;

  case 47:
#line 207 "parser.y"
                                 {insertTS((yyvsp[-5].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1872 "parser.tab.c"
    break;

  case 48:
#line 208 "parser.y"
                         {insertTS((yyvsp[-4].sym),currentType,currentConst,currentType,"0"); deleteTree(&op_tree); }
#line 1878 "parser.tab.c"
    break;

  case 82:
#line 269 "parser.y"
                           {part_index = 0; insertTS((yyvsp[-2].sym) ,currentType,currentConst,assignType,assignValue); part_index = 1;}
#line 1884 "parser.tab.c"
    break;

  case 123:
#line 349 "parser.y"
           {op = '+';currentOp = '+';}
#line 1890 "parser.tab.c"
    break;

  case 125:
#line 350 "parser.y"
           {op = '+';currentOp = '-';}
#line 1896 "parser.tab.c"
    break;

  case 127:
#line 351 "parser.y"
           {op = '*';currentOp = '/';}
#line 1902 "parser.tab.c"
    break;

  case 129:
#line 352 "parser.y"
           {op = '*';currentOp = '*';}
#line 1908 "parser.tab.c"
    break;

  case 132:
#line 359 "parser.y"
     {
        strcpy(assignType,tp);
        verif((yyvsp[0].sym));
        if(!strcmp(assignType,"float") || !strcmp(assignType,"int")){
            SendToCalculator(atof(searchTS((yyvsp[0].sym))->value),currentOp);
        }else{
                printf("\n ERREUR SYNTAXIQUE: Le type assigne a %s  a la ligne %d colonne %d n'est pas le bon !! \n", (yyvsp[0].sym), yylineo, col);}}
#line 1920 "parser.tab.c"
    break;

  case 139:
#line 375 "parser.y"
       {
            s = 1;
            verif((yyvsp[0].sym));
            s = 0; 
            op = '+';
            currentOp = '+';}
#line 1931 "parser.tab.c"
    break;

  case 140:
#line 381 "parser.y"
        {
            s = 1; 
            verif((yyvsp[0].sym));
            s = 0; 
            op = '+';
            currentOp = '-';}
#line 1942 "parser.tab.c"
    break;

  case 141:
#line 387 "parser.y"
        {
            s = 1;
            verif((yyvsp[0].sym));
            s = 0; 
            op = '*';
            currentOp = '*';}
#line 1953 "parser.tab.c"
    break;

  case 142:
#line 393 "parser.y"
        {   
            s = 1;
            verif((yyvsp[0].sym));
            s = 0; 
            op = '*';
            currentOp = '/';}
#line 1964 "parser.tab.c"
    break;

  case 143:
#line 401 "parser.y"
     {s = 0; verif((yyvsp[0].sym)); op = '+';currentOp = '+';}
#line 1970 "parser.tab.c"
    break;

  case 144:
#line 401 "parser.y"
                                                        {s = 0; verif((yyvsp[0].sym)); op = '+';currentOp = '-';}
#line 1976 "parser.tab.c"
    break;

  case 145:
#line 407 "parser.y"
      {strcpy(currentType,"float");}
#line 1982 "parser.tab.c"
    break;

  case 146:
#line 408 "parser.y"
     {strcpy(currentType,"int");}
#line 1988 "parser.tab.c"
    break;

  case 147:
#line 409 "parser.y"
      {strcpy(currentType,"bool");}
#line 1994 "parser.tab.c"
    break;

  case 148:
#line 410 "parser.y"
      {strcpy(currentType,"char");}
#line 2000 "parser.tab.c"
    break;

  case 149:
#line 411 "parser.y"
        {strcpy(currentType,"string");}
#line 2006 "parser.tab.c"
    break;

  case 150:
#line 417 "parser.y"
              {
                strcpy(assignType,"float");
                SendToCalculator((yyvsp[0].real),currentOp);
                sprintf(assignValue,"%f",(yyvsp[0].real));}
#line 2015 "parser.tab.c"
    break;

  case 151:
#line 422 "parser.y"
           {
                strcpy(assignType,"float");
                SendToCalculator((yyvsp[0].real),currentOp);
                sprintf(assignValue,"%f",(yyvsp[0].real));}
#line 2024 "parser.tab.c"
    break;

  case 152:
#line 427 "parser.y"
       {
                strcpy(assignType,"bool");
                strcpy(assignValue,(yyvsp[0].sym));}
#line 2032 "parser.tab.c"
    break;

  case 153:
#line 431 "parser.y"
       {
                strcpy(assignType,"bool");
                strcpy(assignValue,(yyvsp[0].sym));}
#line 2040 "parser.tab.c"
    break;

  case 154:
#line 435 "parser.y"
             {
                strcpy(assignType,"int");
                SendToCalculator((yyvsp[0].num),currentOp);
                sprintf(assignValue,"%d",(yyvsp[0].num));}
#line 2049 "parser.tab.c"
    break;

  case 155:
#line 440 "parser.y"
         {
                strcpy(assignType,"int");
                SendToCalculator((yyvsp[0].num),currentOp); 
                sprintf(assignValue,"%d",(yyvsp[0].num));}
#line 2058 "parser.tab.c"
    break;

  case 156:
#line 445 "parser.y"
            {
                strcpy(assignType,"string");
                strcpy(assignValue,(yyvsp[0].sym));}
#line 2066 "parser.tab.c"
    break;

  case 157:
#line 449 "parser.y"
         {
                strcpy(assignType,"char");
                strcpy(assignValue,(yyvsp[0].sym));}
#line 2074 "parser.tab.c"
    break;


#line 2078 "parser.tab.c"

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
#line 460 "parser.y"


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
