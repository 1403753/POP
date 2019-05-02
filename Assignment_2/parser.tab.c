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
#define YYLAST   1281

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
       0,    50,    50,    51,    52,    53,    57,    58,    59,    60,
      61,    62,    63,    64,    68,    69,    73,    74,    75,    76,
      77,    78,    82,    83,    84,    85,    86,    87,    91,    92,
      96,    97,    98,    99,   103,   104,   105,   109,   110,   111,
     115,   116,   117,   118,   119,   123,   124,   125,   129,   130,
     134,   135,   139,   140,   144,   145,   149,   150,   154,   155,
     159,   160,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   178,   179,   183,   187,   188,   192,   193,
     194,   195,   196,   197,   201,   202,   206,   207,   211,   212,
     213,   214,   215,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   234,   235,   236,   240,   241,
     245,   246,   250,   254,   255,   256,   257,   261,   262,   266,
     267,   268,   272,   273,   274,   278,   279,   283,   284,   288,
     289,   293,   294,   298,   299,   300,   301,   302,   303,   304,
     308,   309,   310,   311,   315,   316,   321,   322,   326,   327,
     331,   332,   333,   337,   338,   342,   343,   347,   348,   349,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   365,
     366,   367,   371,   372,   376,   377,   378,   379,   380,   381,
     385,   386,   387,   391,   392,   393,   394,   398,   399,   403,
     404,   408,   409,   413,   414,   415,   419,   420,   421,   422,
     426,   427,   428,   429,   430,   434,   435,   439,   443,   444,
     448,   449,   450,   451
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

#define YYPACT_NINF -223

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-223)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     949,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,     6,    12,     8,  -223,     9,  1234,  1234,  -223,    13,
    -223,  1234,  1081,   -38,    20,   861,  -223,  -223,  -223,   -65,
      54,    -1,  -223,  -223,     8,  -223,    37,  -223,  1061,  -223,
    -223,   -15,  1035,  -223,   303,  -223,     9,  -223,  1081,   433,
     249,   -38,  -223,  -223,    54,    73,   -17,  -223,  -223,  -223,
    -223,    12,  -223,   549,  -223,  1081,  1035,  1035,   984,  -223,
      17,  1035,  -223,   100,  -223,   764,   788,   788,   813,   109,
      66,   151,   165,   515,   170,   230,   183,   185,   585,   673,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,   572,
     125,   813,  -223,    25,   169,   191,    35,   269,   181,   174,
     194,   253,    26,  -223,  -223,    46,  -223,  -223,  -223,   373,
     443,  -223,  -223,  -223,  -223,   193,  -223,  -223,  -223,  -223,
      11,   214,   221,  -223,    -9,  -223,  -223,  -223,  -223,   228,
      22,   813,    54,  -223,  -223,   549,  -223,  -223,  -223,  1004,
    -223,  -223,  -223,   813,    47,  -223,   215,  -223,   515,   673,
    -223,   813,  -223,  -223,   216,   515,   813,   813,   813,   243,
     603,   217,  -223,  -223,  -223,    60,    38,   132,   236,   296,
    -223,  -223,   622,   813,   297,  -223,  -223,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,   813,  -223,   813,   813,
     813,   813,   813,   813,   813,   813,   813,   813,   813,   813,
     813,   813,   813,   813,   813,   813,   813,   813,  -223,  -223,
     479,  -223,  -223,   905,   694,  -223,    62,  -223,    77,  -223,
    1213,  -223,   298,  -223,  -223,  -223,  -223,  -223,    49,  -223,
    -223,    17,  -223,   813,  -223,   241,   515,  -223,    91,   128,
     130,   261,   603,  -223,  -223,  -223,  1137,   147,  -223,   813,
    -223,  -223,   145,  -223,   180,  -223,  -223,  -223,  -223,  -223,
      25,    25,   169,   169,   191,   191,   191,   191,    35,    35,
     269,   181,   174,   194,   253,   -20,  -223,  -223,  -223,   252,
     262,  -223,   259,    77,  1178,   718,  -223,  -223,  -223,   210,
    -223,  -223,  -223,  -223,  -223,   515,   515,   515,   813,   743,
    -223,  -223,   813,  -223,   813,  -223,  -223,  -223,  -223,   263,
    -223,   266,  -223,  -223,   274,  -223,  -223,   159,   515,   166,
    -223,  -223,  -223,  -223,   515,   245,  -223,   515,  -223,  -223,
    -223
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
       0,   116,     3,     2,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,    23,    24,    25,    26,    27,   191,   183,     6,    16,
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
    -223,  -223,  -223,  -223,   -49,  -223,   -78,    74,    75,    44,
      71,   134,   129,   142,   143,   141,  -223,   -56,   -72,  -223,
      10,   -76,     7,     0,  -223,   309,  -223,   146,  -223,  -223,
     292,   -73,   -47,  -223,   118,  -223,   319,   232,    40,   -16,
     -31,    -3,  -223,   -57,  -223,   148,  -223,   220,  -118,  -222,
    -126,  -223,   -74,  -223,    -4,    87,   264,  -172,  -223,  -223,
    -223,  -223,   355,  -223,  -223
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
      25,   156,   141,    61,   148,   162,    41,    24,   262,    48,
      39,   147,   174,     1,   303,     1,     1,    51,    64,   179,
      43,     1,   237,    59,     1,    60,    49,    50,    57,   247,
     160,    53,   148,   207,   167,    25,   170,   172,   173,   147,
     135,    70,    24,   225,    74,   303,   227,   215,   216,   152,
      16,    17,   187,   241,   137,   135,   232,   242,    65,   140,
     324,    68,   147,    42,   166,   136,     1,   153,    76,   268,
      22,   158,   233,    22,   234,   245,    23,    23,    22,    23,
      23,    22,   136,   156,    69,    23,   162,   250,   152,    40,
     319,    45,    81,   208,   254,   148,    52,   163,   209,   210,
     265,   257,   147,    71,   227,   226,   244,   148,   185,   186,
     217,   218,   227,   251,   147,   309,    81,    81,    81,    72,
     273,    81,   187,   233,   235,   234,   227,   176,   228,   252,
     277,   278,   279,   310,   276,    75,   136,   236,   304,    81,
     305,   129,   264,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   315,   151,   296,   232,   227,   302,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   312,   148,   186,
     168,   186,   314,   333,   267,   147,   258,   259,   260,   175,
     316,   320,   317,   266,   227,   234,   227,   148,    77,    81,
      23,   213,   214,   274,   147,    61,   205,   321,   266,    81,
     234,   322,   177,    82,   145,    84,    85,    41,    86,    87,
     147,   345,    77,    77,    77,   227,   178,    77,   347,   331,
     236,   180,   227,   140,   181,   166,   295,   156,   211,   212,
     140,   334,   335,   336,   323,    77,   227,   329,   221,   148,
     340,   222,    82,   145,    84,    85,   147,    86,    87,   284,
     285,   286,   287,   267,   346,   182,   140,   183,   341,   224,
     348,    99,   223,   350,    73,   147,   239,   100,   101,   102,
     103,   104,   105,   219,   220,   280,   281,   240,   282,   283,
     288,   289,   243,   155,   332,   253,   256,   261,   269,   263,
     270,   275,   308,   313,   140,    77,    82,    83,    84,    85,
      99,    86,    87,   146,   325,    77,   100,   101,   102,   103,
     104,   105,   318,   327,   326,   342,   344,   349,   337,   339,
     343,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   291,    88,    89,    90,   290,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   292,   294,   293,   159,   311,
     100,   101,   102,   103,   104,   105,    82,    83,    84,    85,
     154,    86,    87,   150,   246,   106,    54,   107,   307,   255,
      63,     0,     0,   230,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    88,    89,    90,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,   138,     0,     0,
     100,   101,   102,   103,   104,   105,    82,    83,    84,    85,
       0,    86,    87,     0,     0,   106,    54,   229,     0,     0,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,    82,    83,    84,    85,     0,    86,    87,     0,
       0,     0,    88,    89,    90,   139,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,    82,    83,
      84,    85,     0,    86,    87,   106,    54,   231,    88,    89,
      90,     0,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,     0,   100,   101,   102,   103,
     104,   105,    82,   145,    84,    85,     0,    86,    87,     0,
       0,   106,    54,   297,    88,    89,    90,     0,    91,    92,
      93,    94,    95,    96,    97,    98,    99,     0,     0,   189,
     190,   191,   100,   101,   102,   103,   104,   105,    82,   145,
      84,    85,     0,    86,    87,     0,     0,   106,    54,     0,
       0,     0,     0,     0,     0,     0,    82,   145,    84,    85,
      99,    86,    87,     0,     0,     0,   100,   101,   102,   103,
     104,   105,     0,     0,     0,    82,   145,    84,    85,     0,
      86,    87,   155,   192,     0,   193,     0,   194,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,   100,   101,   102,   103,   104,   105,     0,     0,
       0,     0,     0,     0,    99,     0,     0,   184,     0,     0,
     100,   101,   102,   103,   104,   105,    82,   145,    84,    85,
       0,    86,    87,    99,   271,   106,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,    82,   145,    84,
      85,     2,    86,    87,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    82,   145,    84,    85,     0,    86,    87,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,    82,   145,    84,    85,
       0,    86,    87,     0,     0,    99,     0,     0,   301,     0,
       0,   100,   101,   102,   103,   104,   105,    82,   145,    84,
      85,     0,    86,    87,     0,     0,     0,     0,     0,    99,
       0,     0,   330,     0,     0,   100,   101,   102,   103,   104,
     105,    82,   145,    84,    85,     0,    86,    87,     0,     0,
       0,     0,     0,     0,    99,   338,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,    82,   145,    84,    85,
       0,    86,    87,     0,     0,   169,     0,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   171,
       0,     0,     0,     0,     0,   100,   101,   102,   103,   104,
     105,    62,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     1,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,    23,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   233,   298,   234,     0,
       0,     0,     0,    23,     0,     0,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     2,     0,     0,     0,     0,    23,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     2,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,     0,     0,   161,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,   249,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,   298,
     234,     0,     0,     0,     0,    23,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     328,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   306,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    73,    59,    34,    60,    78,    22,     0,   180,    25,
       4,    60,    88,     4,   236,     4,     4,     4,    83,    93,
      23,     4,   140,    61,     4,    63,    26,    27,    32,   155,
      77,    31,    88,   111,    81,    35,    85,    86,    87,    88,
      56,    44,    35,    17,    48,   267,    66,    12,    13,    66,
      42,    43,    99,    62,    58,    71,   130,    66,     4,    59,
      80,    62,   111,    23,    80,    58,     4,    84,    83,   187,
      61,    75,    61,    61,    63,   151,    68,    68,    61,    68,
      68,    61,    75,   155,    44,    68,   159,   163,    66,    83,
     262,    82,    52,    68,   168,   151,    83,    80,    73,    74,
      62,   175,   151,    66,    66,    79,    84,   163,    98,    99,
      75,    76,    66,    66,   163,    66,    76,    77,    78,    82,
     192,    81,   169,    61,   140,    63,    66,    61,    82,    82,
     208,   209,   210,    84,   206,    48,   129,   140,    61,    99,
      63,    54,    82,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    62,    81,   227,   230,    66,   234,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   253,   234,   169,
      80,   171,   256,   309,   187,   234,   176,   177,   178,    80,
      62,   269,    62,    61,    66,    63,    66,   253,    52,   159,
      68,    10,    11,   193,   253,   236,    81,    62,    61,   169,
      63,    66,    61,     3,     4,     5,     6,   233,     8,     9,
     269,    62,    76,    77,    78,    66,    61,    81,    62,   305,
     233,    61,    66,   233,     4,   251,   226,   309,    69,    70,
     240,   315,   316,   317,    64,    99,    66,   304,    67,   305,
     322,    77,     3,     4,     5,     6,   305,     8,     9,   215,
     216,   217,   218,   266,   338,    82,   266,    82,   324,    16,
     344,    61,    78,   347,    81,   324,    62,    67,    68,    69,
      70,    71,    72,    14,    15,   211,   212,    66,   213,   214,
     219,   220,    64,    83,    84,    80,    80,    54,    62,    82,
       4,     4,     4,    62,   304,   159,     3,     4,     5,     6,
      61,     8,     9,    64,    62,   169,    67,    68,    69,    70,
      71,    72,    61,    64,    62,    62,    52,    82,   318,   319,
      64,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   222,    49,    50,    51,   221,    53,    54,    55,    56,
      57,    58,    59,    60,    61,   223,   225,   224,    76,   251,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      71,     8,     9,    64,   152,    82,    83,    84,   240,   169,
      35,    -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,     4,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    82,    83,    84,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    49,    50,    51,    62,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    82,    83,    84,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    82,    83,    84,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    -1,     7,
       8,     9,    67,    68,    69,    70,    71,    72,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      61,     8,     9,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
       8,     9,    83,    61,    -1,    63,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    82,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    61,    62,    82,    -1,    -1,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,     3,     4,     5,
       6,    28,     8,     9,    -1,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    61,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    70,    71,
      72,     0,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    28,    -1,    -1,    -1,    -1,    68,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    84,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    84,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      63,    -1,    -1,    -1,    -1,    68,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    61,    68,   107,   108,   111,   112,   113,   114,
     120,   123,   124,   125,   126,   146,   147,   148,   149,     4,
      83,   124,   123,   126,   127,    82,   109,   110,   124,   108,
     108,     4,    83,   108,    83,   107,   108,   139,   140,    61,
      63,   125,     0,   147,    83,     4,   121,   122,    62,   123,
     126,    66,    82,    81,   139,   140,    83,   112,   115,   116,
     117,   123,     3,     4,     5,     6,     8,     9,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      67,    68,    69,    70,    71,    72,    82,    84,    86,    87,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   105,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   124,   107,   139,     4,    62,
     108,   128,   129,   130,   131,     4,    64,    89,   102,   106,
     121,    81,    66,    84,   110,    83,   103,   135,   139,   115,
     117,    84,   116,    80,   118,   119,   124,   117,    80,    61,
      89,    61,    89,    89,   106,    80,    61,    61,    61,   137,
      61,     4,    82,    82,    82,   105,   105,   117,   132,     7,
       8,     9,    61,    63,    65,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    81,   104,    91,    68,    73,
      74,    69,    70,    10,    11,    12,    13,    75,    76,    14,
      15,    67,    77,    78,    16,    17,    79,    66,    82,    84,
     141,    84,   137,    61,    63,   124,   126,   133,   134,    62,
      66,    62,    66,    64,    84,   106,   122,   135,   136,    84,
     106,    66,    82,    80,   137,   132,    80,   137,   105,   105,
     105,    54,   142,    82,    82,    62,    61,   126,   133,    62,
       4,    62,    88,   103,   105,     4,   103,    91,    91,    91,
      92,    92,    93,    93,    94,    94,    94,    94,    95,    95,
      96,    97,    98,    99,   100,   105,   103,    84,    62,   128,
     133,    64,   106,   134,    61,    63,    48,   130,     4,    66,
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
#line 50 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); 						if(debug)printf(" --primary_expression : IDENTIFIER\n"); }
#line 1755 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 51 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newnum((yyvsp[0].d));    				if(debug)printf(" --primary_expression : CONSTANT\n"); }
#line 1761 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 52 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newid((yyvsp[0].id)); 						if(debug)printf(" --primary_expression : STRING_LITERAL\n"); }
#line 1767 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 53 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); 										if(debug)printf(" --primary_expression : '(' expression ')'\n"); }
#line 1773 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 57 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --postfix_expression : primary_expression\n"); }
#line 1779 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 68 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --argument_expression_list : assignment_expression\n"); }
#line 1785 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 69 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(",", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --argument_expression_list : argument_expression_list ',' assignment_expression\n"); }
#line 1791 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : postfix_expression\n"); }
#line 1797 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 74 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : INC_OP unary_expression\n"); }
#line 1803 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 75 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : DEC_OP unary_expression\n"); }
#line 1809 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("unary/cast", (yyvsp[-1].astree), (yyvsp[0].astree)); }
#line 1815 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --unary_expression : SIZEOF unary_expression\n");}
#line 1821 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 78 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree); if(debug)printf(" --unary_expression : SIZEOF '(' type_name ')'\n");}
#line 1827 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 91 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --cast_expression : unary_expression\n"); }
#line 1833 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 92 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --cast_expression : '(' type_name ')' cast_expression\n"); }
#line 1839 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 96 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --multiplicative_expression : cast_expression\n"); }
#line 1845 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 97 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("*", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --multiplicative_expression : multiplicative_expression '*' cast_expression\n"); }
#line 1851 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 98 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("/", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --multiplicative_expression : multiplicative_expression '/' cast_expression\n"); }
#line 1857 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 99 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("%", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --multiplicative_expression : multiplicative_expression 'prozent' cast_expression\n"); }
#line 1863 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 103 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --additive_expression : multiplicative_expression\n");}
#line 1869 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("+", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --additive_expression : additive_expression '+' multiplicative_expression\n"); }
#line 1875 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 105 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree) = newast("-", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --additive_expression : additive_expression '-' multiplicative_expression\n"); }
#line 1881 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 109 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --shift_expression : additive_expression\n"); }
#line 1887 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 110 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --shift_expression : shift_expression LEFT_OP additive_expression\n"); }
#line 1893 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 111 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --shift_expression : shift_expression RIGHT_OP additive_expression\n"); }
#line 1899 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 115 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --relational_expression : shift_expression\n"); }
#line 1905 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 116 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("<", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --relational_expression : relational_expression '<' shift_expression\n"); }
#line 1911 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 117 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(">", (yyvsp[-2].astree), (yyvsp[0].astree)); if(debug)printf(" --relational_expression : relational_expression '>' shift_expression\n"); }
#line 1917 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 123 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --equality_expression : relational_expression\n"); }
#line 1923 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 129 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --and_expression : equality_expression\n"); }
#line 1929 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 134 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --exclusive_or_expression : and_expression\n"); }
#line 1935 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 139 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --inclusive_or_expression : exclusive_or_expression\n"); }
#line 1941 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 144 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --logical_and_expression : inclusive_or_expression\n"); }
#line 1947 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 149 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --logical_or_expression : logical_and_expression\n"); }
#line 1953 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 154 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --conditional_expression : logical_or_expression\n"); }
#line 1959 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 159 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --assignment_expression : conditional_expression\n"); }
#line 1965 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 160 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --assignment_expression : unary_expression assignment_operator assignment_expression\n"); }
#line 1971 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 178 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --expression : assignment_expression\n"); }
#line 1977 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 179 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --expression : expression ',' assignment_expression\n"); }
#line 1983 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 183 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --constant_expression : conditional_expression\n"); }
#line 1989 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 365 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer : assignment_expression\n"); }
#line 1995 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 366 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer : '{' initializer_list '}'\n"); }
#line 2001 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 367 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer : '{' initializer_list ',' '}'\n"); }
#line 2007 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 371 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --initializer_list : initializer\n"); }
#line 2013 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 372 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(",", (yyvsp[-2].astree), (yyvsp[0].astree));  if(debug)printf(" --initializer_list : initializer_list ',' initializer\n"); }
#line 2019 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : labeled_statement\n"); }
#line 2025 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : compound_statement\n"); }
#line 2031 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 378 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : expression_statement\n"); }
#line 2037 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 379 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : selection_statement\n"); }
#line 2043 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 380 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : iteration_statement\n"); }
#line 2049 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement : jump_statement\n"); }
#line 2055 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 391 "parser.y" /* yacc.c:1646  */
    {														if(debug)printf(" --compound_statement : '{' '}'\n"); }
#line 2061 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 392 "parser.y" /* yacc.c:1646  */
    {	(yyval.astree)=(yyvsp[-1].astree); 										if(debug)printf(" --compound_statement : '{' statement_list '}'\n"); }
#line 2067 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 393 "parser.y" /* yacc.c:1646  */
    { (yyval.astree)=(yyvsp[-1].astree); 										if(debug)printf(" --compound_statement : '{' declaration_list '}'\n"); }
#line 2073 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("stmt", (yyvsp[-2].astree), (yyvsp[-1].astree)); if(debug)printf(" --compound_statement : '{' declaration_list statement_list '}'\n"); }
#line 2079 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 403 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --statement_list : statement\n"); }
#line 2085 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 404 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("stmt", (yyvsp[-1].astree), (yyvsp[0].astree)); if(debug)printf(" --statement_list : statement_list statement\n"); }
#line 2091 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 408 "parser.y" /* yacc.c:1646  */
    {						if(debug)printf(" --expression_statement : ;\n"); }
#line 2097 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 409 "parser.y" /* yacc.c:1646  */
    {						if(debug)printf(" --expression_statement : expression ';'\n"); }
#line 2103 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 419 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --iteration_statement : WHILE '(' expression ')' statement\n"); }
#line 2109 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 420 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --iteration_statement : DO statement WHILE '(' expression ')' ';'\n"); }
#line 2115 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 421 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("for", (yyvsp[0].astree), NULL); if(debug)printf(" --iteration_statement : FOR '(' expression_statement expression_statement ')' statement\n"); }
#line 2121 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 422 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast("for", (yyvsp[0].astree), NULL); if(debug)printf(" --iteration_statement : FOR '(' expression_statement expression_statement expression ')' statement\n"); }
#line 2127 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 426 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" --jump_statement : GOTO IDENTIFIER ';'\n"); }
#line 2133 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 427 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" --jump_statement : CONTINUE ';'\n"); }
#line 2139 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 428 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" --jump_statement : BREAK ';'\n"); }
#line 2145 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 429 "parser.y" /* yacc.c:1646  */
    { 					if(debug)printf(" --jump_statement : RETURN ';'\n"); }
#line 2151 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 430 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[-1].astree);	if(debug)printf(" --jump_statement : RETURN expression ';'\n"); }
#line 2157 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 434 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --translation_unit : external_declaration\n"); }
#line 2163 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 435 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = newast(";", (yyvsp[-1].astree), (yyvsp[0].astree)); if(debug)printf(" --translation_unit : translation_unit external_declaration\n"); }
#line 2169 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 439 "parser.y" /* yacc.c:1646  */
    { *astree = (yyvsp[0].astree); if(debug)printf(" --external_declaration : parse_tree\n"); }
#line 2175 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 443 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --parse_tree : function_definition\n"); }
#line 2181 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 444 "parser.y" /* yacc.c:1646  */
    { if(debug)printf(" --parse_tree : declaration\n"); }
#line 2187 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 448 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declaration_specifiers declarator declaration_list compound_statement\n"); }
#line 2193 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 449 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declaration_specifiers declarator compound_statement\n"); }
#line 2199 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 450 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declarator declaration_list compound_statement\n"); }
#line 2205 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 451 "parser.y" /* yacc.c:1646  */
    { (yyval.astree) = (yyvsp[0].astree); if(debug)printf(" --function_definition : declarator compound_statement\n"); }
#line 2211 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2215 "parser.tab.c" /* yacc.c:1646  */
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
#line 454 "parser.y" /* yacc.c:1906  */

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
	if (e->nodetype == 'C')
		fprintf(dotfile, " %d [label=\"%.2f\"];\n", node, e->d);
	else if (e->nodetype == 'I')
		fprintf(dotfile, " %d [label=\"%s\"];\n", node, e->id);
	else if (e->nodetype == 'D')
		fprintf(dotfile, " %d [label=\"%s\"];\n", node, e->id);
		
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

