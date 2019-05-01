/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "intermediate.h"

char *input_filename = NULL;
char *output_filename = "a.c";
int yylex();
int yyerror(struct ast **astree, char *s);

int debug = 1;
extern char *yytext;

#line 82 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    CONSTANT = 258,
    STRING_LITERAL = 259,
    SIZEOF = 260,
    IDENTIFIER = 261,
    PTR_OP = 262,
    INC_OP = 263,
    DEC_OP = 264,
    LEFT_OP = 265,
    RIGHT_OP = 266,
    LE_OP = 267,
    GE_OP = 268,
    EQ_OP = 269,
    NE_OP = 270,
    AND_OP = 271,
    OR_OP = 272,
    MUL_ASSIGN = 273,
    DIV_ASSIGN = 274,
    MOD_ASSIGN = 275,
    ADD_ASSIGN = 276,
    SUB_ASSIGN = 277,
    LEFT_ASSIGN = 278,
    RIGHT_ASSIGN = 279,
    AND_ASSIGN = 280,
    XOR_ASSIGN = 281,
    OR_ASSIGN = 282,
    TYPE_NAME = 283,
    TYPEDEF = 284,
    EXTERN = 285,
    STATIC = 286,
    AUTO = 287,
    REGISTER = 288,
    CHAR = 289,
    SHORT = 290,
    INT = 291,
    LONG = 292,
    SIGNED = 293,
    UNSIGNED = 294,
    FLOAT = 295,
    DOUBLE = 296,
    CONST = 297,
    VOLATILE = 298,
    VOID = 299,
    STRUCT = 300,
    UNION = 301,
    ENUM = 302,
    ELLIPSIS = 303,
    CASE = 304,
    DEFAULT = 305,
    IF = 306,
    ELSE = 307,
    SWITCH = 308,
    WHILE = 309,
    DO = 310,
    FOR = 311,
    GOTO = 312,
    CONTINUE = 313,
    BREAK = 314,
    RETURN = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "parser.y" /* yacc.c:355  */

  struct ast *astree;
  double d;
	char *id;

#line 189 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (struct ast **astree);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  62
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1294

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  351

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,     2,     2,     2,    74,    67,     2,
      61,    62,    68,    69,    66,    70,    65,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    71,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    48,    48,    49,    50,    51,    55,    56,    57,    58,
      59,    60,    61,    62,    66,    67,    71,    72,    73,    74,
      75,    76,    80,    81,    82,    83,    84,    85,    89,    90,
      94,    95,    96,    97,   101,   102,   103,   107,   108,   109,
     113,   114,   115,   116,   117,   121,   122,   123,   127,   128,
     132,   133,   137,   138,   142,   143,   147,   148,   152,   153,
     157,   158,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   176,   177,   181,   185,   186,   190,   191,
     192,   193,   194,   195,   199,   200,   204,   205,   209,   210,
     211,   212,   213,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   232,   233,   234,   238,   239,
     243,   244,   248,   252,   253,   254,   255,   259,   260,   264,
     265,   266,   270,   271,   272,   276,   277,   281,   282,   286,
     287,   291,   292,   296,   297,   298,   299,   300,   301,   302,
     306,   307,   308,   309,   313,   314,   319,   320,   324,   325,
     329,   330,   331,   335,   336,   340,   341,   345,   346,   347,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   363,
     364,   365,   369,   370,   374,   375,   376,   377,   378,   379,
     383,   384,   385,   389,   390,   391,   392,   396,   397,   401,
     402,   406,   407,   411,   412,   413,   417,   418,   419,   420,
     424,   425,   426,   427,   428,   432,   433,   437,   441,   442,
     446,   447,   448,   449
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT", "STRING_LITERAL", "SIZEOF",
  "IDENTIFIER", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "parse_tree", "function_definition", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    40,    41,    91,    93,    46,    44,    38,    42,    43,
      45,   126,    33,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -213

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-213)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     962,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,
    -213,     4,    83,    37,  -213,    47,  1247,  1247,  -213,    17,
    -213,  1247,  1094,   -12,    10,   878,  -213,  -213,  -213,   -69,
      31,    15,  -213,  -213,    37,  -213,    28,  -213,  1074,  -213,
    -213,    36,  1048,  -213,   277,  -213,    47,  -213,  1094,   407,
     665,   -12,  -213,  -213,    31,    65,   -26,  -213,  -213,  -213,
    -213,    83,  -213,   541,  -213,  1094,  1048,  1048,   997,  -213,
      56,  1048,  -213,  -213,   784,   -16,   805,   805,   829,    98,
     122,   129,   160,   523,   164,   191,   156,   170,   558,   644,
    -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,  -213,   178,
     273,   829,  -213,    33,    58,   203,     9,   230,   175,   171,
     179,   243,    24,  -213,  -213,    67,  -213,  -213,  -213,   347,
     417,  -213,  -213,  -213,  -213,   182,  -213,  -213,  -213,  -213,
      69,   206,   205,  -213,    76,  -213,  -213,  -213,  -213,   208,
     -19,   829,    31,  -213,  -213,   541,  -213,  -213,  -213,  1017,
    -213,  -213,  -213,   829,   111,  -213,   193,  -213,   644,  -213,
     523,   829,  -213,  -213,   194,   523,   829,   829,   829,   221,
     595,   195,  -213,  -213,  -213,   118,    79,   128,   214,   272,
    -213,  -213,   689,   829,   278,  -213,  -213,  -213,  -213,  -213,
    -213,  -213,  -213,  -213,  -213,  -213,   829,  -213,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,   829,   829,
     829,   829,   829,   829,   829,   829,   829,   829,  -213,  -213,
     453,  -213,  -213,   920,   714,  -213,    55,  -213,   165,  -213,
    1226,  -213,   281,  -213,  -213,  -213,  -213,  -213,   -14,  -213,
    -213,    56,  -213,   829,   217,  -213,   523,  -213,    86,   126,
     136,   227,   595,  -213,  -213,  -213,  1150,   168,  -213,   829,
    -213,  -213,   142,  -213,   166,  -213,  -213,  -213,  -213,  -213,
      33,    33,    58,    58,   203,   203,   203,   203,     9,     9,
     230,   175,   171,   179,   243,   -38,  -213,  -213,  -213,   228,
     239,  -213,   225,   165,  1191,   735,  -213,  -213,  -213,   487,
    -213,  -213,  -213,  -213,  -213,   523,   523,   523,   829,   759,
    -213,  -213,   829,  -213,   829,  -213,  -213,  -213,  -213,   240,
    -213,   261,  -213,  -213,   251,  -213,  -213,   144,   523,   145,
    -213,  -213,  -213,  -213,   523,   247,  -213,   523,  -213,  -213,
    -213
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   129,   130,    93,   108,
     109,     0,     0,   140,   209,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   208,   124,
       0,     0,   144,   142,   141,    76,     0,    84,    86,    79,
      81,   107,     0,    83,     0,   187,     0,   213,     0,     0,
       0,   131,     1,   206,     0,   127,     0,   125,   134,   145,
     143,     0,    77,     0,   211,     0,     0,   114,     0,   110,
       0,   116,     3,     4,     0,     2,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,   191,   183,     6,    16,
      28,     0,    30,    34,    37,    40,    45,    48,    50,    52,
      54,    56,    58,    60,    73,     0,   189,   174,   175,     0,
       0,   176,   177,   178,   179,    86,   188,   212,   153,   139,
     152,     0,   146,   148,     0,     2,   136,    28,    75,     0,
       0,     0,     0,   122,    85,     0,   169,    87,   210,     0,
     113,   106,   111,     0,     0,   117,   119,   115,     0,    20,
       0,     0,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   202,   203,     0,     0,   155,     0,     0,
      12,    13,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    62,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   185,
       0,   184,   190,     0,     0,   150,   157,   151,   158,   137,
       0,   138,     0,   135,   123,   128,   126,   172,     0,   105,
     120,     0,   112,     0,     0,   180,     0,   182,     0,     0,
       0,     0,     0,   200,   204,     5,     0,   157,   156,     0,
      11,     8,     0,    14,     0,    10,    61,    31,    32,    33,
      35,    36,    38,    39,    43,    44,    41,    42,    46,    47,
      49,    51,    53,    55,    57,     0,    74,   186,   165,     0,
       0,   161,     0,   159,     0,     0,   147,   149,   154,     0,
     170,   118,   121,    21,   181,     0,     0,     0,     0,     0,
      29,     9,     0,     7,     0,   166,   160,   162,   167,     0,
     163,     0,   171,   173,   193,   195,   196,     0,     0,     0,
      15,    59,   168,   164,     0,     0,   198,     0,   194,   197,
     199
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -213,  -213,  -213,  -213,   -54,  -213,   -96,    38,    41,     2,
      42,   119,   117,   120,   133,   116,  -213,   -59,   -53,  -213,
     -95,   -52,    11,     0,  -213,   271,  -213,   -33,  -213,  -213,
     282,   -66,   -21,  -213,   112,  -213,   298,   212,    44,   -17,
     -27,    -6,  -213,   -57,  -213,   125,  -213,   198,  -115,  -212,
    -137,  -213,   -80,  -213,   147,    20,   238,  -171,  -213,  -213,
    -213,  -213,   333,  -213,  -213
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   109,   272,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   206,
     125,   149,    55,    56,    46,    47,    26,    27,    28,    29,
      78,    79,    80,   164,   165,    30,    66,    67,    31,    32,
      33,    34,    44,   299,   142,   143,   144,   188,   300,   238,
     157,   248,   126,   127,   128,    58,   130,   131,   132,   133,
     134,    35,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,   148,   141,   185,   186,    41,   147,    61,    48,   262,
      39,    24,   162,   179,    64,   207,     1,    43,   247,    77,
     156,   215,   216,    51,   303,   237,    49,    50,   227,   148,
     169,    53,   172,   173,   147,    25,   174,    65,    70,   135,
     152,   225,   324,    77,    77,    77,    24,   152,    77,    59,
     232,    60,   309,     1,   135,   303,   160,   147,   153,   140,
     167,     1,     1,   166,   170,   244,    77,    42,    75,   136,
     310,    22,   268,   186,   129,     1,   186,    68,   187,    16,
      17,   258,   259,   260,   217,   218,   136,    40,    69,     1,
     255,   319,   148,   162,    71,   257,    81,   147,   274,   245,
      52,   208,   156,   226,   148,    23,   209,   210,    22,   147,
      72,   250,   277,   278,   279,    23,   233,    22,   234,    76,
      81,    81,    81,   235,    23,    81,    77,   211,   212,    45,
     233,   295,   234,   227,   236,    77,   163,    23,   241,   273,
     136,   265,   242,    81,    22,   227,   151,   187,   315,   228,
     232,    23,   227,   276,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   333,   320,   296,   148,   314,   251,   175,    57,
     147,   267,   302,   176,   227,   189,   190,   191,   316,   266,
     177,   234,   227,   252,   148,    74,    23,   181,   317,   147,
     264,   312,   227,    81,   321,   137,   345,   347,   322,    61,
     227,   227,    81,   213,   214,   147,    41,   284,   285,   286,
     287,   178,   158,   337,   339,   180,   304,   236,   305,   266,
     323,   234,   227,   140,   166,   334,   335,   336,   182,   192,
     140,   193,   221,   194,   219,   220,   148,   329,   222,   280,
     281,   147,   183,   331,   282,   283,   156,   223,   346,   224,
     267,   288,   289,    73,   348,   341,   140,   350,   239,   340,
     147,   240,   243,   253,   256,   261,   269,   263,   270,   313,
      82,    83,    84,    85,   275,    86,    87,   308,   318,   327,
     325,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   326,   342,   344,   140,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   343,    88,    89,    90,   349,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   291,
     290,   294,   154,   292,   100,   101,   102,   103,   104,   105,
      82,    83,    84,    85,   205,    86,    87,   293,   159,   106,
      54,   107,   150,   311,   246,   307,   254,   230,    63,     0,
       0,     0,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    88,    89,    90,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,   138,   100,   101,   102,   103,   104,   105,
      82,    83,    84,    85,     0,    86,    87,     0,     0,   106,
      54,   229,     0,     0,     0,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,    82,    83,    84,    85,
       0,    86,    87,     0,     0,     0,    88,    89,    90,   139,
      91,    92,    93,    94,    95,    96,    97,    98,    99,     0,
       0,     0,     0,     0,   100,   101,   102,   103,   104,   105,
      82,    83,    84,   145,     0,    86,    87,     0,     0,   106,
      54,   231,    88,    89,    90,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,    82,    83,    84,    85,
       0,    86,    87,     0,     0,   106,    54,   297,     0,     0,
       0,     0,     0,     0,    82,    83,    84,   145,    99,    86,
      87,     0,     0,     0,   100,   101,   102,   103,   104,   105,
       0,    82,    83,    84,   145,     0,    86,    87,     0,     0,
     155,   332,    88,    89,    90,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,    82,    83,
      84,   145,    99,    86,    87,   106,    54,     0,   100,   101,
     102,   103,   104,   105,     0,     0,     0,     0,     0,    99,
       0,     0,     0,     0,   155,   100,   101,   102,   103,   104,
     105,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     184,     0,     0,     0,     0,     0,     0,    82,    83,    84,
     145,     0,    86,    87,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,    82,    83,
      84,   145,     2,    86,    87,     0,     0,   106,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    82,    83,    84,   145,     0,    86,    87,     0,
       0,     0,     0,     0,     0,    99,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,    82,    83,    84,
     145,     0,    86,    87,     0,     0,    99,     0,     0,   146,
       0,     0,   100,   101,   102,   103,   104,   105,    82,    83,
      84,   145,     0,    86,    87,     0,     0,     0,     0,     0,
      99,   271,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    82,    83,    84,   145,     0,    86,    87,     0,
       0,     0,     0,     0,     0,    99,     0,     0,   301,     0,
       0,   100,   101,   102,   103,   104,   105,    82,    83,    84,
     145,     0,    86,    87,     0,     0,    99,     0,     0,   330,
       0,     0,   100,   101,   102,   103,   104,   105,    82,    83,
      84,   145,     0,    86,    87,     0,     0,     0,     0,     0,
      99,   338,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    82,    83,    84,   145,     0,    86,    87,     0,
       0,     0,     0,     0,     0,   168,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   171,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,    62,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
      99,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,     0,    23,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,   298,   234,     0,     0,     0,     0,    23,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     2,     0,     0,     0,     0,
      23,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     2,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,   161,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,   249,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   266,   298,   234,     0,     0,     0,     0,    23,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   328,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   306,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    60,    59,    98,    99,    22,    60,    34,    25,   180,
       6,     0,    78,    93,    83,   111,     6,    23,   155,    52,
      73,    12,    13,     6,   236,   140,    26,    27,    66,    88,
      84,    31,    86,    87,    88,    35,    88,     6,    44,    56,
      66,    17,    80,    76,    77,    78,    35,    66,    81,    61,
     130,    63,    66,     6,    71,   267,    77,   111,    84,    59,
      81,     6,     6,    80,    80,    84,    99,    23,    48,    58,
      84,    61,   187,   168,    54,     6,   171,    62,    99,    42,
      43,   176,   177,   178,    75,    76,    75,    83,    44,     6,
     170,   262,   151,   159,    66,   175,    52,   151,   193,   151,
      83,    68,   155,    79,   163,    68,    73,    74,    61,   163,
      82,   163,   208,   209,   210,    68,    61,    61,    63,    83,
      76,    77,    78,   140,    68,    81,   159,    69,    70,    82,
      61,   226,    63,    66,   140,   168,    80,    68,    62,   192,
     129,    62,    66,    99,    61,    66,    81,   168,    62,    82,
     230,    68,    66,   206,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   309,   269,   227,   234,   256,    66,    80,    32,
     234,   187,   234,    61,    66,     7,     8,     9,    62,    61,
      61,    63,    66,    82,   253,    48,    68,     6,    62,   253,
      82,   253,    66,   159,    62,    58,    62,    62,    66,   236,
      66,    66,   168,    10,    11,   269,   233,   215,   216,   217,
     218,    61,    75,   318,   319,    61,    61,   233,    63,    61,
      64,    63,    66,   233,   251,   315,   316,   317,    82,    61,
     240,    63,    67,    65,    14,    15,   305,   304,    77,   211,
     212,   305,    82,   305,   213,   214,   309,    78,   338,    16,
     266,   219,   220,    81,   344,   324,   266,   347,    62,   322,
     324,    66,    64,    80,    80,    54,    62,    82,     6,    62,
       3,     4,     5,     6,     6,     8,     9,     6,    61,    64,
      62,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    62,    62,    52,   304,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    64,    49,    50,    51,    82,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   222,
     221,   225,    71,   223,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,    81,     8,     9,   224,    76,    82,
      83,    84,    64,   251,   152,   240,   168,   129,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,     6,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    82,
      83,    84,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    49,    50,    51,    62,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    82,
      83,    84,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    61,     8,
       9,    -1,    -1,    -1,    67,    68,    69,    70,    71,    72,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      83,    84,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,     3,     4,
       5,     6,    61,     8,     9,    82,    83,    -1,    67,    68,
      69,    70,    71,    72,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    83,    67,    68,    69,    70,    71,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    28,     8,     9,    -1,    -1,    82,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    61,    -1,    -1,    64,
      -1,    -1,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,     0,    -1,
      -1,    -1,    -1,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    68,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    28,    -1,    -1,    -1,    -1,
      68,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    84,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    84,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    -1,    -1,    -1,    -1,    68,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    68,   107,   108,   111,   112,   113,   114,
     120,   123,   124,   125,   126,   146,   147,   148,   149,     6,
      83,   124,   123,   126,   127,    82,   109,   110,   124,   108,
     108,     6,    83,   108,    83,   107,   108,   139,   140,    61,
      63,   125,     0,   147,    83,     6,   121,   122,    62,   123,
     126,    66,    82,    81,   139,   140,    83,   112,   115,   116,
     117,   123,     3,     4,     5,     6,     8,     9,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      67,    68,    69,    70,    71,    72,    82,    84,    86,    87,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   105,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   124,   107,   139,     6,    62,
     108,   128,   129,   130,   131,     6,    64,    89,   102,   106,
     121,    81,    66,    84,   110,    83,   103,   135,   139,   115,
     117,    84,   116,    80,   118,   119,   124,   117,    61,    89,
      80,    61,    89,    89,   106,    80,    61,    61,    61,   137,
      61,     6,    82,    82,    82,   105,   105,   117,   132,     7,
       8,     9,    61,    63,    65,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    81,   104,    91,    68,    73,
      74,    69,    70,    10,    11,    12,    13,    75,    76,    14,
      15,    67,    77,    78,    16,    17,    79,    66,    82,    84,
     141,    84,   137,    61,    63,   124,   126,   133,   134,    62,
      66,    62,    66,    64,    84,   106,   122,   135,   136,    84,
     106,    66,    82,    80,   132,   137,    80,   137,   105,   105,
     105,    54,   142,    82,    82,    62,    61,   126,   133,    62,
       6,    62,    88,   103,   105,     6,   103,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      96,    97,    98,    99,   100,   105,   103,    84,    62,   128,
     133,    64,   106,   134,    61,    63,    48,   130,     6,    66,
      84,   119,   106,    62,   137,    62,    62,    62,    61,   142,
      91,    62,    66,    64,    80,    62,    62,    64,    62,   128,
      64,   106,    84,   135,   137,   137,   137,   105,    62,   105,
     103,   102,    62,    64,    52,    62,   137,    62,   137,    82,
     137
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    93,    93,    93,    94,    94,    94,
      95,    95,    95,    95,    95,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   111,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   117,   117,   118,   118,   119,
     119,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   133,   133,   133,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   135,
     135,   135,   136,   136,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   143,   143,   143,   144,   144,   144,   144,
     145,   145,   145,   145,   145,   146,   146,   147,   148,   148,
     149,   149,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     1,     2,
       1,     2,     1,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     3,     4,     5,     2,     1,     3,     1,     3,     1,
       1,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     3,     1,     2,     1,     1,     2,
       3,     2,     3,     3,     4,     2,     3,     3,     4,     1,
       3,     4,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     1,
       4,     3,     3,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (astree, YY_("syntax error: cannot back up")); \
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
                  Type, Value, astree); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct ast **astree)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (astree);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, struct ast **astree)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, astree);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule, struct ast **astree)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              , astree);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, astree); \
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, struct ast **astree)
{
  YYUSE (yyvaluep);
  YYUSE (astree);
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
yyparse (struct ast **astree)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
#line 48 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); 						if(debug)printf(" line:46 (primary_expression : IDENTIFIER)\n"); }
#line 1757 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 49 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newnum((yyvsp[0].d));    				if(debug)printf(" line:47 (primary_expression : CONSTANT)\n"); }
#line 1763 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 50 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newnum((yyvsp[0].d)); 						if(debug)printf(" line:48 (primary_expression : STRING_LITERAL)\n"); }
#line 1769 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 51 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); 										if(debug)printf(" line:49 (primary_expression : '(' expression ')')\n"); }
#line 1775 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 66 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:64 (argument_expression_list : assignment_expression)\n"); }
#line 1781 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 67 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:65 (argument_expression_list : argument_expression_list ',' assignment_expression)\n"); }
#line 1787 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 89 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:87 (cast_expression : unary_expression)\n"); }
#line 1793 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:86 (cast_expression : '(' type_name ')' cast_expression)\n"); }
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:92 (multiplicative_expression : cast_expression\n"); }
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 95 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast('*', (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" line:93 (multiplicative_expression : multiplicative_expression '*' cast_expression\n"); }
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 96 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast('/', (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" line:94 (multiplicative_expression : multiplicative_expression '/' cast_expression\n"); }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 97 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast('%', (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" line:95 (multiplicative_expression : multiplicative_expression 'prozent' cast_expression\n"); }
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 101 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:99 (additive_expression : multiplicative_expression\n");}
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 102 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast('+', (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" line:100 (additive_expression : additive_expression '+' multiplicative_expression\n"); }
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 103 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast('-', (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" line:101 (additive_expression : additive_expression '-' multiplicative_expression\n"); }
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:105 (shift_expression : additive_expression)\n"); }
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 108 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:106 (shift_expression : shift_expression LEFT_OP additive_expression)\n"); }
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 109 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:107 (shift_expression : shift_expression RIGHT_OP additive_expression)\n"); }
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 157 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:155 (assignment_expression : conditional_expression)\n"); }
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 158 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:156 (assignment_expression : unary_expression assignment_operator assignment_expression)\n"); }
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 176 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:174 (expression : assignment_expression)\n"); }
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 177 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:175 (expression : expression ',' assignment_expression)\n"); }
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 181 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:179 (constant_expression : conditional_expression)\n"); }
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 363 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:361 (initializer : assignment_expression)\n"); }
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 364 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:362 (initializer : '{' initializer_list '}')\n"); }
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 365 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:363 (initializer : '{' initializer_list ',' '}')\n"); }
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 369 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:367 (initializer_list : initializer)\n"); }
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 370 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:368 (initializer_list : initializer_list ',' initializer)\n"); }
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 374 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:372 (statement : labeled_statement)\n"); }
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:373 (statement : compound_statement)\n"); }
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:374 (statement : expression_statement)\n"); }
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:375 (statement : selection_statement)\n"); }
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:376 (statement : iteration_statement)\n"); }
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:377 (statement : jump_statement)\n"); }
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 389 "parser.y" /* yacc.c:1646  */
    {					 if(debug)printf(" line:387 (compound_statement : '{' '}')\n"); }
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 390 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); if(debug)printf(" line:388 (compound_statement : '{' statement_list '}')\n"); }
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); if(debug)printf(" line:389 (compound_statement : '{' declaration_list '}')\n"); }
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-2].astree); if(debug)printf(" line:390 (compound_statement : '{' declaration_list statement_list '}')\n"); }
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:399 (statement_list : statement)\n"); }
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(';', (yyvsp[-1].astree), (yyvsp[0].astree)); if(debug)printf(" line:400 (statement_list : statement_list statement)\n"); }
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 406 "parser.y" /* yacc.c:1646  */
    {					 if(debug)printf(" line:404 (expression_statement : ;)\n"); }
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 407 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); if(debug)printf(" line:405 (expression_statement : expression ';')\n"); }
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 424 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" line:426 (jump_statement : GOTO IDENTIFIER ';')\n"); }
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 425 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" line:426 (jump_statement : CONTINUE ';')\n"); }
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 426 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" line:426 (jump_statement : BREAK ';')\n"); }
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 427 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" line:426 (jump_statement : RETURN ';')\n"); }
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 428 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree);	if(debug)printf(" line:426 (jump_statement : RETURN expression ';')\n"); }
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 432 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:430 (translation_unit : external_declaration)\n"); }
#line 2039 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 433 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:431 (translation_unit : translation_unit external_declaration)\n"); }
#line 2045 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 437 "parser.y" /* yacc.c:1646  */
    { *astree = (yyvsp[0].astree); if(debug)printf(" line:435 (external_declaration : parsetree)\n"); }
#line 2051 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 441 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:439 (parse_tree : function_definition)\n"); }
#line 2057 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 442 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" line:440 (parse_tree : declaration)\n"); }
#line 2063 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 446 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:444 (function_definition : declaration_specifiers declarator declaration_list compound_statement)\n"); }
#line 2069 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 447 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:445 (function_definition : declaration_specifiers declarator compound_statement)\n"); }
#line 2075 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 448 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:446 (function_definition : declarator declaration_list compound_statement)\n"); }
#line 2081 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 449 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" line:447 (function_definition : declarator compound_statement)\n"); }
#line 2087 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2091 "parser.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
      yyerror (astree, YY_("syntax error"));
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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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
        yyerror (astree, yymsgp);
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
                      yytoken, &yylval, astree);
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
                  yystos[yystate], yyvsp, astree);
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
  yyerror (astree, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, astree);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, astree);
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
#line 452 "parser.y" /* yacc.c:1906  */

#include <stdio.h>

//extern char yytext[];
extern int column;

int yyerror(struct ast **astree, char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

void write_node(struct ast *e, FILE *dotfile, int node, int parent){
	printf("NODE\n");
  fprintf(dotfile, " %d -> %d;\n", parent, node);
  write_tree(e, dotfile, node);
}

void write_tree(struct ast *e, FILE *dotfile, int node){
	printf("TREE\n");
	if (e->nodetype == 'K')
		fprintf(dotfile, " %d [label=\"%.2f\"];\n", node, e->d);
	else if (e->nodetype == 'I')
		fprintf(dotfile, " %d [label=\"%s\"];\n", node, e->id);
	else
		fprintf(dotfile, " %d [label=\"%c\"];\n", node, (char)e->nodetype);
		
  if (e->l != NULL)
		write_node(e->l, dotfile, 2*node, node);
  if (e->r != NULL)
		write_node(e->r, dotfile, 2*node+1, node);
}

void write_graphviz(struct ast *e){
  FILE *dotfile = fopen("file.dot", "w");
  fprintf(dotfile, "digraph tree {\n");
  write_tree(e, dotfile, 1);
  fprintf(dotfile, "}\n");
  fclose(dotfile);
}

int main(int argc, char **argv)
{
	int i, yyresult;
	
	for(i=1;i<argc;i++) {
		if (*argv[i]=='-') {
			switch(*(argv[i]+1)) {
			/* output option */
				case 'o':
					output_filename=argv[i]+2;
          break;

       /********************************/
       /* specify your own option here */
       /********************************/

       default:
          fprintf(stderr,"%s: unknown argument option\n",argv[0]);
          exit(1);
       }
    } else {
      if (input_filename != NULL) {
         fprintf(stderr,"%s: only one input file allowed\n",argv[0]);
         exit(1);
      }
      input_filename = argv[i];
		}
	}

	if (input_filename != NULL) {
		if ((freopen(input_filename, "r",stdin))==NULL) {
			fprintf(stdout,"%s: cannot open input file %s\n",argv[0],input_filename);
			
			exit(1);
		}
	}
	
	struct ast *astree;
	
	yyresult = yyparse(&astree);
		
	if (yyresult)
		fprintf(stdout,"\n\nErrors detected.\n");
	else
		fprintf(stdout,"\n\nNo errors detected.\n");

	write_graphviz(astree);	

	exit(yyresult);
}

