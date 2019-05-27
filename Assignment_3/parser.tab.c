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

int debug = 0;
//extern char *yytext;

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
    IDENTIFIER = 259,
    STRING_LITERAL = 260,
    SIZEOF = 261,
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
	char id[50];

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
#define YYLAST   1162

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
       2,     2,     2,    66,     2,     2,     2,    74,    61,     2,
      67,    68,    62,    63,    72,    64,    71,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    82,
      75,    81,    76,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    83,    78,    84,    65,     2,     2,     2,
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
       0,    57,    57,    58,    59,    60,    64,    65,    66,    67,
      68,    69,    70,    71,    75,    76,    80,    81,    82,    83,
      84,    85,    89,    90,    91,    92,    93,    94,    98,    99,
     103,   104,   105,   106,   110,   111,   112,   116,   117,   118,
     122,   123,   124,   125,   126,   130,   131,   132,   136,   137,
     141,   142,   146,   147,   151,   152,   156,   157,   161,   162,
     166,   167,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   185,   186,   190,   194,   195,   199,   200,
     201,   202,   203,   204,   208,   209,   213,   214,   218,   219,
     220,   221,   222,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   241,   242,   243,   247,   248,
     252,   253,   257,   261,   262,   263,   264,   268,   269,   273,
     274,   275,   279,   280,   281,   285,   286,   290,   291,   295,
     296,   300,   301,   305,   306,   307,   308,   309,   310,   311,
     315,   316,   317,   318,   322,   323,   327,   328,   332,   333,
     337,   338,   339,   343,   344,   348,   349,   353,   354,   355,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   371,
     372,   373,   377,   378,   382,   383,   384,   385,   386,   387,
     391,   392,   393,   397,   398,   399,   400,   404,   405,   409,
     410,   414,   415,   419,   420,   421,   425,   426,   427,   428,
     432,   433,   434,   435,   436,   440,   441,   445,   449,   450,
     454,   455,   456,   457
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CONSTANT", "IDENTIFIER",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'",
  "'('", "')'", "'['", "']'", "'.'", "','", "'/'", "'%'", "'<'", "'>'",
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
     315,    38,    42,    43,    45,   126,    33,    40,    41,    91,
      93,    46,    44,    47,    37,    60,    62,    94,   124,    63,
      58,    61,    59,   123,   125
};
# endif

#define YYPACT_NINF -221

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-221)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     899,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,     2,    15,    86,  -221,    48,  1093,  1093,  -221,     8,
    -221,  1093,  1011,    54,    29,   613,  -221,  -221,  -221,   -58,
      46,  -221,  -221,    15,   -38,  -221,    53,  -221,   955,  -221,
    -221,    30,   738,  -221,   277,  -221,    48,  -221,  1011,   841,
     620,    54,  -221,  -221,    46,   -14,   -24,  -221,  -221,  -221,
    -221,    86,  -221,   515,  -221,  1011,   738,   738,   878,  -221,
      49,   738,  -221,    18,  -221,   785,   886,   886,   893,    64,
     139,   146,   152,   508,   160,   241,   164,   166,   538,  -221,
    -221,  -221,  -221,  -221,  -221,   797,  -221,  -221,  -221,    37,
     414,   893,  -221,    -8,    94,   180,   119,   211,   193,   178,
     179,   242,     3,  -221,  -221,    65,  -221,  -221,  -221,   342,
     407,  -221,  -221,  -221,  -221,   181,  -221,  -221,  -221,  -221,
      71,   191,   188,  -221,   -44,  -221,  -221,  -221,  -221,   197,
     -11,   893,    46,  -221,  -221,   515,  -221,  -221,  -221,   935,
    -221,  -221,  -221,   893,    69,  -221,   183,  -221,   508,   797,
    -221,   893,  -221,  -221,   189,   508,   893,   893,   893,   217,
     545,   190,  -221,  -221,  -221,    70,    77,     9,   206,   272,
    -221,  -221,   746,   893,   273,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   893,  -221,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   893,   893,   893,
     893,   893,   893,   893,   893,   893,   893,   893,  -221,  -221,
     443,  -221,  -221,   701,   630,  -221,     1,  -221,   112,  -221,
    1114,  -221,   274,  -221,  -221,  -221,  -221,  -221,    28,  -221,
    -221,    49,  -221,   893,  -221,   216,   508,  -221,    82,   116,
     121,   212,   545,  -221,  -221,  -221,  1031,   134,  -221,   893,
    -221,  -221,   124,  -221,   144,  -221,  -221,  -221,  -221,  -221,
      -8,    -8,    94,    94,   180,   180,   180,   180,   119,   119,
     211,   193,   178,   179,   242,   -29,  -221,  -221,  -221,   219,
     220,  -221,   221,   112,  1073,   658,  -221,  -221,  -221,   472,
    -221,  -221,  -221,  -221,  -221,   508,   508,   508,   893,   756,
    -221,  -221,   893,  -221,   893,  -221,  -221,  -221,  -221,   224,
    -221,   223,  -221,  -221,   237,  -221,  -221,   130,   508,   143,
    -221,  -221,  -221,  -221,   508,   213,  -221,   508,  -221,  -221,
    -221
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   133,   104,    88,    89,    90,    91,    92,    94,    95,
      96,    97,   100,   101,    98,    99,   129,   130,    93,   108,
     109,     0,   140,     0,   209,     0,    78,    80,   102,     0,
     103,    82,     0,   132,     0,     0,   205,   207,   208,   124,
       0,   144,   142,   141,     0,    76,     0,    84,    86,    79,
      81,   107,     0,    83,     0,   187,     0,   213,     0,     0,
       0,   131,     1,   206,     0,   127,     0,   125,   145,   143,
     134,     0,    77,     0,   211,     0,     0,   114,     0,   110,
       0,   116,     3,     2,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,    24,    25,    26,    27,     0,   191,   183,     6,    16,
      28,     0,    30,    34,    37,    40,    45,    48,    50,    52,
      54,    56,    58,    60,    73,     0,   189,   174,   175,     0,
       0,   176,   177,   178,   179,    86,   188,   212,   153,   139,
     152,     0,   146,   148,     0,     2,   136,    28,    75,     0,
       0,     0,     0,   122,    85,     0,   169,    87,   210,     0,
     113,   106,   111,     0,     0,   117,   119,   115,     0,     0,
      20,     0,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,   201,   202,   203,     0,     0,   155,     0,     0,
      12,    13,     0,     0,     0,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    62,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   192,   185,
       0,   184,   190,     0,     0,   150,   157,   151,   158,   137,
       0,   138,     0,   135,   123,   128,   126,   172,     0,   105,
     120,     0,   112,     0,   180,     0,     0,   182,     0,     0,
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
    -221,  -221,  -221,  -221,   -49,  -221,   -82,    19,    25,     6,
      33,    73,    74,    75,    78,    72,  -221,   -56,   -72,  -221,
     -90,   -54,    14,     0,  -221,   228,  -221,   131,  -221,  -221,
     225,   -60,   -64,  -221,    52,  -221,   261,   177,    41,   -16,
     -31,    -1,  -221,   -57,  -221,   109,  -221,   184,  -118,  -220,
    -132,  -221,   -74,  -221,   186,    26,   226,  -170,  -221,  -221,
    -221,  -221,   317,  -221,  -221
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   109,   272,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   206,
     125,   149,    55,    56,    46,    47,    26,    27,    28,    29,
      78,    79,    80,   164,   165,    30,    66,    67,    31,    32,
      33,    34,    43,   299,   142,   143,   144,   188,   300,   238,
     157,   248,   126,   127,   128,    58,   130,   131,   132,   133,
     134,    35,    36,    37,    38
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      25,   156,   141,    61,   148,     1,    39,    44,   185,    48,
     262,   147,    51,   160,    24,   186,   303,   167,   162,   179,
     225,    42,   237,   247,   241,    64,    49,    50,   242,   207,
      70,    53,   148,     1,   174,    25,   170,   172,   173,   147,
     135,   187,    69,   227,   189,   190,   191,   303,   152,    24,
      65,   324,     1,     1,   208,   135,   232,    16,    17,   140,
     153,   152,   147,    41,   166,   209,   210,   151,   233,   268,
     234,    22,   136,   244,    75,     1,   266,    22,   234,   186,
     129,   186,   226,   156,    68,    40,   258,   259,   260,   136,
       1,    52,   319,    81,   254,   148,    23,   245,   168,   162,
     309,   257,   147,   274,   192,   187,   193,   148,   194,   250,
      22,    22,   310,    76,   147,    23,    23,    81,    81,    81,
     273,    59,    81,    60,   235,    71,   277,   278,   279,   163,
      45,   215,   216,    22,   276,    72,   295,   227,   233,   236,
     234,   251,   227,   136,   175,   265,    81,   228,    22,   227,
     315,   252,   264,    23,   227,   296,   232,   211,   212,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   333,   148,   304,
     302,   305,   314,    77,   316,   147,   267,   320,   227,   317,
     213,   214,   321,   227,   217,   218,   322,   148,   345,   312,
      81,   266,   227,   234,   147,    61,   176,    77,    77,    77,
      81,   347,    77,   177,   323,   227,   227,    44,    57,   178,
     147,   284,   285,   286,   287,   219,   220,   180,   337,   339,
     280,   281,   236,   140,    74,   166,    77,   156,   282,   283,
     140,   334,   335,   336,   137,   181,   182,   329,   183,   148,
     340,   331,   288,   289,   221,   222,   147,   223,   224,   239,
     240,   158,    73,   253,   346,   267,   140,   243,   341,   256,
     348,   261,   263,   350,   269,   147,   270,   275,   308,   318,
      82,    83,    84,    85,   313,    86,    87,   325,   326,   344,
      77,   327,   342,   343,   290,   349,   291,   294,   292,   154,
      77,   159,   293,   311,   140,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   150,    88,    89,    90,   246,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    82,    83,    84,    85,   307,
      86,    87,    63,   255,     0,   230,     0,     0,     0,   106,
      54,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    88,    89,    90,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
      82,    83,    84,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,     0,   106,    54,   229,     0,     0,     0,
       0,     0,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,     0,     0,     0,     0,    82,    83,    84,    85,
       0,    86,    87,     0,     0,     0,    88,    89,    90,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    82,   145,    84,    85,     0,
      86,    87,     0,     0,     0,     0,     0,     0,     0,   106,
      54,   231,    88,    89,    90,   205,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    82,    83,    84,    85,     0,    86,    87,    82,   145,
      84,    85,     0,    86,    87,   106,    54,   297,     0,     0,
       0,     0,     0,    99,   100,   101,   102,   103,   104,   105,
       0,    82,   145,    84,    85,     0,    86,    87,    82,   145,
      84,    85,     0,    86,    87,   155,   332,    88,    89,    90,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    99,   100,   101,   102,
     103,   104,   105,     0,     0,     0,     0,     0,     0,     0,
     106,    54,     0,     0,     0,     0,     0,     0,   155,    99,
     100,   101,   102,   103,   104,   105,    99,   100,   101,   102,
     103,   104,   105,    62,     0,     0,     0,     1,     0,     0,
     184,     0,     0,    82,   145,    84,    85,   106,    86,    87,
       0,     0,     0,    82,   145,    84,    85,     0,    86,    87,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    82,   145,    84,    85,     0,    86,    87,     0,     0,
       0,     0,     0,     0,     0,    22,     0,     0,     0,     0,
      23,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     146,    99,   100,   101,   102,   103,   104,   105,     0,     0,
     301,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   105,     0,     0,   330,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    82,
     145,    84,    85,     0,    86,    87,     0,     0,     0,    82,
     145,    84,    85,    22,    86,    87,     2,     0,   233,   298,
     234,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,    82,   145,
      84,    85,     0,    86,    87,     0,     0,     0,     0,     0,
      82,   145,    84,    85,     0,    86,    87,    99,   100,   101,
     102,   103,   104,   105,   271,     0,     0,    99,   100,   101,
     102,   103,   104,   105,   338,     2,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   138,    99,   100,   101,   102,
     103,   104,   169,     0,     0,     0,     0,     0,    99,   100,
     101,   102,   103,   104,   105,     0,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    82,
     145,    84,    85,     0,    86,    87,    82,   145,    84,    85,
       0,    86,    87,     1,     0,     0,     2,     0,     0,   139,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    99,   100,   101,
     102,   103,   104,   171,    99,   100,   101,   102,   103,   104,
     105,    22,   161,     2,     0,     0,    23,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,    54,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    54,     0,     0,     0,   266,   298,
     234,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   328,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   306
};

static const yytype_int16 yycheck[] =
{
       0,    73,    59,    34,    60,     4,     4,    23,    98,    25,
     180,    60,     4,    77,     0,   105,   236,    81,    78,    93,
      17,    22,   140,   155,    68,    83,    26,    27,    72,   111,
      68,    31,    88,     4,    88,    35,    85,    86,    87,    88,
      56,   105,    43,    72,     7,     8,     9,   267,    72,    35,
       4,    80,     4,     4,    62,    71,   130,    42,    43,    59,
      84,    72,   111,    22,    80,    73,    74,    81,    67,   187,
      69,    62,    58,    84,    48,     4,    67,    62,    69,   169,
      54,   171,    79,   155,    43,    83,   176,   177,   178,    75,
       4,    83,   262,    52,   168,   151,    67,   151,    80,   159,
      72,   175,   151,   193,    67,   169,    69,   163,    71,   163,
      62,    62,    84,    83,   163,    67,    67,    76,    77,    78,
     192,    67,    81,    69,   140,    72,   208,   209,   210,    80,
      82,    12,    13,    62,   206,    82,   226,    72,    67,   140,
      69,    72,    72,   129,    80,    68,   105,    82,    62,    72,
      68,    82,    82,    67,    72,   227,   230,    63,    64,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   309,   234,    67,
     234,    69,   256,    52,    68,   234,   187,   269,    72,    68,
      10,    11,    68,    72,    75,    76,    72,   253,    68,   253,
     159,    67,    72,    69,   253,   236,    67,    76,    77,    78,
     169,    68,    81,    67,    70,    72,    72,   233,    32,    67,
     269,   215,   216,   217,   218,    14,    15,    67,   318,   319,
     211,   212,   233,   233,    48,   251,   105,   309,   213,   214,
     240,   315,   316,   317,    58,     4,    82,   304,    82,   305,
     322,   305,   219,   220,    61,    77,   305,    78,    16,    68,
      72,    75,    81,    80,   338,   266,   266,    70,   324,    80,
     344,    54,    82,   347,    68,   324,     4,     4,     4,    67,
       3,     4,     5,     6,    68,     8,     9,    68,    68,    52,
     159,    70,    68,    70,   221,    82,   222,   225,   223,    71,
     169,    76,   224,   251,   304,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    64,    49,    50,    51,   152,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,     3,     4,     5,     6,   240,
       8,     9,    35,   169,    -1,   129,    -1,    -1,    -1,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    49,    50,    51,    81,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,     3,     4,     5,     6,    -1,     8,     9,     3,     4,
       5,     6,    -1,     8,     9,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      -1,     3,     4,     5,     6,    -1,     8,     9,     3,     4,
       5,     6,    -1,     8,     9,    83,    84,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    83,    61,
      62,    63,    64,    65,    66,    67,    61,    62,    63,    64,
      65,    66,    67,     0,    -1,    -1,    -1,     4,    -1,    -1,
      82,    -1,    -1,     3,     4,     5,     6,    82,     8,     9,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      67,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      70,    61,    62,    63,    64,    65,    66,    67,    -1,    -1,
      70,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    -1,    -1,    70,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,     3,
       4,     5,     6,    62,     8,     9,    28,    -1,    67,    68,
      69,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    28,    -1,    -1,    -1,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,     4,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     3,
       4,     5,     6,    -1,     8,     9,     3,     4,     5,     6,
      -1,     8,     9,     4,    -1,    -1,    28,    -1,    -1,    68,
      -1,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    61,    62,    63,
      64,    65,    66,    67,    61,    62,    63,    64,    65,    66,
      67,    62,    84,    28,    -1,    -1,    67,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    83,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    83,    -1,    -1,    -1,    67,    68,
      69,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    68,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    62,    67,   107,   108,   111,   112,   113,   114,
     120,   123,   124,   125,   126,   146,   147,   148,   149,     4,
      83,   123,   126,   127,   124,    82,   109,   110,   124,   108,
     108,     4,    83,   108,    83,   107,   108,   139,   140,    67,
      69,   125,     0,   147,    83,     4,   121,   122,   123,   126,
      68,    72,    82,    81,   139,   140,    83,   112,   115,   116,
     117,   123,     3,     4,     5,     6,     8,     9,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    82,    84,    86,    87,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   105,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   124,   107,   139,     4,    68,
     108,   128,   129,   130,   131,     4,    70,    89,   102,   106,
     121,    81,    72,    84,   110,    83,   103,   135,   139,   115,
     117,    84,   116,    80,   118,   119,   124,   117,    80,    67,
      89,    67,    89,    89,   106,    80,    67,    67,    67,   137,
      67,     4,    82,    82,    82,   105,   105,   117,   132,     7,
       8,     9,    67,    69,    71,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    81,   104,    91,    62,    73,
      74,    63,    64,    10,    11,    12,    13,    75,    76,    14,
      15,    61,    77,    78,    16,    17,    79,    72,    82,    84,
     141,    84,   137,    67,    69,   124,   126,   133,   134,    68,
      72,    68,    72,    70,    84,   106,   122,   135,   136,    84,
     106,    72,    82,    80,   137,   132,    80,   137,   105,   105,
     105,    54,   142,    82,    82,    68,    67,   126,   133,    68,
       4,    68,    88,   103,   105,     4,   103,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      96,    97,    98,    99,   100,   105,   103,    84,    68,   128,
     133,    70,   106,   134,    67,    69,    48,   130,     4,    72,
      84,   119,   106,    68,   137,    68,    68,    68,    67,   142,
      91,    68,    72,    70,    80,    68,    68,    70,    68,   128,
      70,   106,    84,   135,   137,   137,   137,   105,    68,   105,
     103,   102,    68,    70,    52,    68,   137,    68,   137,    82,
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
#line 57 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); 						if(debug)printf(" --primary_expression : IDENTIFIER\n"); }
#line 1731 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newnum((yyvsp[0].d));    				if(debug)printf(" --primary_expression : CONSTANT\n"); }
#line 1737 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); 						if(debug)printf(" --primary_expression : STRING_LITERAL\n"); }
#line 1743 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 60 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); 										if(debug)printf(" --primary_expression : '(' expression ')'\n"); }
#line 1749 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 64 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --postfix_expression : primary_expression\n"); }
#line 1755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 75 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --argument_expression_list : assignment_expression\n"); }
#line 1761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(",", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --argument_expression_list : argument_expression_list ',' assignment_expression\n"); }
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 80 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : postfix_expression\n"); }
#line 1773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : INC_OP unary_expression\n"); }
#line 1779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 82 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : DEC_OP unary_expression\n"); }
#line 1785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 83 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("unary/cast", (yyvsp[-1].astree), (yyvsp[0].astree)); }
#line 1791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 84 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : SIZEOF unary_expression\n");}
#line 1797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); if(debug)printf(" --unary_expression : SIZEOF '(' type_name ')'\n");}
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); }
#line 1809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 90 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); }
#line 1815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); }
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); }
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); }
#line 1833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); }
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 98 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --cast_expression : unary_expression\n"); }
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 99 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --cast_expression : '(' type_name ')' cast_expression\n"); }
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 103 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --multiplicative_expression : cast_expression\n"); }
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 104 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("*", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --multiplicative_expression : multiplicative_expression '*' cast_expression\n"); }
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 105 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("/", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --multiplicative_expression : multiplicative_expression '/' cast_expression\n"); }
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 106 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("%", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --multiplicative_expression : multiplicative_expression 'prozent' cast_expression\n"); }
#line 1875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --additive_expression : multiplicative_expression\n");}
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 111 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("+", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --additive_expression : additive_expression '+' multiplicative_expression\n"); }
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 112 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("-", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --additive_expression : additive_expression '-' multiplicative_expression\n"); }
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 116 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --shift_expression : additive_expression\n"); }
#line 1899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 117 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --shift_expression : shift_expression LEFT_OP additive_expression\n"); }
#line 1905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 118 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --shift_expression : shift_expression RIGHT_OP additive_expression\n"); }
#line 1911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 122 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --relational_expression : shift_expression\n"); }
#line 1917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 123 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("<", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --relational_expression : relational_expression '<' shift_expression\n"); }
#line 1923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 124 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(">", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --relational_expression : relational_expression '>' shift_expression\n"); }
#line 1929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 125 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("<=", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --relational_expression : relational_expression LE_OP shift_expression\n"); }
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 126 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(">=", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --relational_expression : relational_expression GE_OP shift_expression\n"); }
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 130 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --equality_expression : relational_expression\n"); }
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 131 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("==", (yyvsp[-2].astree), (yyvsp[0].astree)); }
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 132 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("!=", (yyvsp[-2].astree), (yyvsp[0].astree)); }
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 136 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --and_expression : equality_expression\n"); }
#line 1965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 141 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --exclusive_or_expression : and_expression\n"); }
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 146 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --inclusive_or_expression : exclusive_or_expression\n"); }
#line 1977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 151 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --logical_and_expression : inclusive_or_expression\n"); }
#line 1983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 156 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --logical_or_expression : logical_and_expression\n"); }
#line 1989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 161 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --conditional_expression : logical_or_expression\n"); }
#line 1995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 166 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --assignment_expression : conditional_expression\n"); }
#line 2001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 167 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --assignment_expression : unary_expression assignment_operator assignment_expression\n"); }
#line 2007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 185 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --expression : assignment_expression\n"); }
#line 2013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 186 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(",", (yyvsp[-2].astree), (yyvsp[0].astree));	if(debug)printf(" --expression : expression ',' assignment_expression\n"); }
#line 2019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 190 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --constant_expression : conditional_expression\n"); }
#line 2025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 194 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declaration : declaration_specifiers ';'\n"); }
#line 2031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 195 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("DECL", (yyvsp[-2].astree), (yyvsp[-1].astree)); if(debug)printf(" --declaration : declaration_specifiers init_declarator_list ';'\n"); }
#line 2037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 199 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declaration_specifiers : storage_class_specifier\n"); }
#line 2043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 200 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declaration_specifiers : storage_class_specifier declaration_specifiers\n"); }
#line 2049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 201 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declaration_specifiers : type_specifier\n"); }
#line 2055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 202 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declaration_specifiers : type_specifier declaration_specifiers\n"); }
#line 2061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 203 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declaration_specifiers : type_qualifier\n"); }
#line 2067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 204 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declaration_specifiers : type_qualifier declaration_specifiers\n"); }
#line 2073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 208 "parser.y" /* yacc.c:1646  */
    { 														 if(debug)printf(" --init_declarator_list : init_declarator\n"); }
#line 2079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("DECL", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --init_declarator_list : init_declarator_list ',' init_declarator\n"); }
#line 2085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 213 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --init_declarator : declarator\n"); }
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 214 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("=", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --init_declarator : declarator '=' initializer\n"); }
#line 2097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 218 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("TYPEDEF"); }
#line 2103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 219 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("EXTERN"); }
#line 2109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 220 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("STATIC"); }
#line 2115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("AUTO"); }
#line 2121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("REGISTER"); }
#line 2127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 226 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newid("VOID"); if(debug)printf(" --type_specifier : VOID\n"); }
#line 2133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("CHAR"); if(debug)printf(" --type_specifier : CHAR\n"); }
#line 2139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 228 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("SHORT"); if(debug)printf(" --type_specifier : SHORT\n"); }
#line 2145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 229 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("INT"); if(debug)printf(" --type_specifier : INT\n"); }
#line 2151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 230 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("LONG"); if(debug)printf(" --type_specifier : LONG\n"); }
#line 2157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 231 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("FLOAT"); if(debug)printf(" --type_specifier : FLOAT\n"); }
#line 2163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("DOUBLE"); if(debug)printf(" --type_specifier : DOUBLE\n"); }
#line 2169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 233 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("SIGNED"); if(debug)printf(" --type_specifier : SIGNED\n"); }
#line 2175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 234 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("UNSIGNED"); if(debug)printf(" --type_specifier : UNSIGNED\n"); }
#line 2181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 235 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --type_specifier : struct_or_union_specifier\n"); }
#line 2187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --type_specifier : enum_specifier\n"); }
#line 2193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("TYPE_NAME"); if(debug)printf(" --type_specifier : TYPE_NAME\n"); }
#line 2199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 247 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("STRUCT"); }
#line 2205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("UNION"); }
#line 2211 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); }
#line 2217 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 280 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = (yyvsp[-1].astree); }
#line 2223 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 281 "parser.y" /* yacc.c:1646  */
    {					 }
#line 2229 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 290 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); }
#line 2235 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 291 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("=", newid((yyvsp[-2].id)), (yyvsp[0].astree)); }
#line 2241 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 295 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("CONST"); }
#line 2247 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("VOLATILE"); }
#line 2253 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 300 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declarator : pointer direct_declarator\n"); }
#line 2259 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 301 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --declarator : direct_declarator\n"); }
#line 2265 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 305 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); if(debug)printf(" --direct_declarator : IDENTIFIER\n"); }
#line 2271 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 306 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); }
#line 2277 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 307 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("[]", (yyvsp[-3].astree), (yyvsp[-1].astree)); }
#line 2283 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("*"); }
#line 2289 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); }
#line 2295 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 317 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); }
#line 2301 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 318 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); }
#line 2307 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 371 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer : assignment_expression\n"); }
#line 2313 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 372 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer : '{' initializer_list '}'\n"); }
#line 2319 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 373 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer : '{' initializer_list ',' '}'\n"); }
#line 2325 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 377 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer_list : initializer\n"); }
#line 2331 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(",", (yyvsp[-2].astree), (yyvsp[0].astree));  if(debug)printf(" --initializer_list : initializer_list ',' initializer\n"); }
#line 2337 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 382 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : labeled_statement\n"); }
#line 2343 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 383 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : compound_statement\n"); }
#line 2349 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : expression_statement\n"); }
#line 2355 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 385 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : selection_statement\n"); }
#line 2361 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 386 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : iteration_statement\n"); }
#line 2367 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 387 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : jump_statement\n"); }
#line 2373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 391 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); }
#line 2379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 392 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("CASE:", (yyvsp[-2].astree), (yyvsp[0].astree)); }
#line 2385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 393 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("DEFAULT:", (yyvsp[0].astree), NULL); }
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 397 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --compound_statement : '{' '}'\n"); }
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 398 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree)=(yyvsp[-1].astree); 										if(debug)printf(" --compound_statement : '{' statement_list '}'\n"); }
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.astree)=(yyvsp[-1].astree); 										if(debug)printf(" --compound_statement : '{' declaration_list '}'\n"); }
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("STMTLIST", (yyvsp[-2].astree), (yyvsp[-1].astree)); if(debug)printf(" --compound_statement : '{' declaration_list statement_list '}'\n"); }
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --declaration_list : declaration\n"); }
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 405 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("DECL", (yyvsp[-1].astree), (yyvsp[0].astree)); if(debug)printf(" --declaration_list : declaration_list declaration\n"); }
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 409 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement_list : statement\n"); }
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 410 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("STMT", (yyvsp[-1].astree), (yyvsp[0].astree)); if(debug)printf(" --statement_list : statement_list statement\n"); }
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 414 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newid(";");	if(debug)printf(" --expression_statement : ;\n"); }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 415 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = (yyvsp[-1].astree);					if(debug)printf(" --expression_statement : expression ';'\n"); }
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 419 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("IF", (yyvsp[-2].astree), (yyvsp[0].astree)); }
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 420 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("IF", (yyvsp[-4].astree), newast("<-IF | ELSE->", (yyvsp[-2].astree), (yyvsp[0].astree))); }
#line 2463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 421 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("SWITCH", (yyvsp[-2].astree), (yyvsp[0].astree)); }
#line 2469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 425 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("WHILE", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --iteration_statement : WHILE '(' expression ')' statement\n"); }
#line 2475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 426 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("DOWHILE", (yyvsp[-5].astree), (yyvsp[-2].astree)); if(debug)printf(" --iteration_statement : DO statement WHILE '(' expression ')' ';'\n"); }
#line 2481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 427 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("FOR", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --iteration_statement : FOR '(' expression_statement expression_statement ')' statement\n"); }
#line 2487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 428 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("FOR", (yyvsp[-3].astree), (yyvsp[0].astree)); if(debug)printf(" --iteration_statement : FOR '(' expression_statement expression_statement expression ')' statement\n"); }
#line 2493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 432 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" --jump_statement : GOTO IDENTIFIER ';'\n"); }
#line 2499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("CONTINUE");	if(debug)printf(" --jump_statement : CONTINUE ';'\n"); }
#line 2505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 434 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("BREAK");	if(debug)printf(" --jump_statement : BREAK ';'\n"); }
#line 2511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid("RETURN");	if(debug)printf(" --jump_statement : RETURN ';'\n"); }
#line 2517 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 436 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree);	if(debug)printf(" --jump_statement : RETURN expression ';'\n"); }
#line 2523 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 440 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --translation_unit : external_declaration\n"); }
#line 2529 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(";", (yyvsp[-1].astree), (yyvsp[0].astree)); if(debug)printf(" --translation_unit : translation_unit external_declaration\n"); }
#line 2535 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 445 "parser.y" /* yacc.c:1646  */
    { *astree = (yyvsp[0].astree); if(debug)printf(" --external_declaration : parse_tree\n"); }
#line 2541 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 449 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --parse_tree : function_definition\n"); }
#line 2547 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 450 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --parse_tree : declaration\n"); }
#line 2553 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 454 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declaration_specifiers declarator declaration_list compound_statement\n"); }
#line 2559 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 455 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declaration_specifiers declarator compound_statement\n"); }
#line 2565 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 456 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declarator declaration_list compound_statement\n"); }
#line 2571 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 457 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declarator compound_statement\n"); }
#line 2577 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2581 "parser.tab.c" /* yacc.c:1646  */
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
#line 460 "parser.y" /* yacc.c:1906  */

#include <stdio.h>

extern int column;

int yyerror(struct ast **astree, char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
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
				
				case 'd':
					debug = 1;
					break;
					
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
		
	if (yyresult) {
		fprintf(stdout,"\n\nErrors detected.\n");
		exit(yyresult);
	} else
		fprintf(stdout,"\n\nNo errors detected.\n");
		
	generate_dot(astree);	

	free_tree(astree);
	
	exit(yyresult);
}

