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
#line 1 "lexer.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "tac.h"
#include "nodes.h"
int nl=0;
int yylex(void);
void yyerror (char *);
FILE *yyin;
char t[100];
FILE * f;
char* outputfilename;

#line 82 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    T_int64 = 258,
    Identifier = 259,
    T_string = 260,
    Op_add = 261,
    Single_line_comment = 262,
    Multi_line_comment = 263,
    T_bool = 264,
    T_int = 265,
    T_int8 = 266,
    T_int16 = 267,
    T_int32 = 268,
    T_uint = 269,
    T_uint16 = 270,
    T_uint32 = 271,
    T_uint64 = 272,
    T_uintptr = 273,
    T_float32 = 274,
    T_float64 = 275,
    T_complex64 = 276,
    T_complex128 = 277,
    Key_break = 278,
    Key_case = 279,
    Key_const = 280,
    Key_continue = 281,
    Key_default = 282,
    Key_else = 283,
    Key_fallthrough = 284,
    Key_for = 285,
    Key_func = 286,
    Key_if = 287,
    Key_import = 288,
    Key_interface = 289,
    Key_map = 290,
    Key_package = 291,
    Key_range = 292,
    Key_return = 293,
    Key_select = 294,
    Key_struct = 295,
    Key_switch = 296,
    Key_type = 297,
    Key_var = 298,
    Key_class = 299,
    Key_private = 300,
    Key_protected = 301,
    Key_public = 302,
    Key_static = 303,
    Key_try = 304,
    Key_catch = 305,
    Key_finally = 306,
    Imaginary_lit = 307,
    Float_lit = 308,
    Int_lit = 309,
    String_lit = 310,
    Op_greater_greater = 311,
    Op_less_less = 312,
    Op_greater = 313,
    Op_less = 314,
    Op_greater_eq = 315,
    Op_less_eq = 316,
    Op_not_equal = 317,
    Op_equality = 318,
    Op_assign = 319,
    Op_unary_add = 320,
    Op_unary_sub = 321,
    Op_sub = 322,
    Op_mult = 323,
    Op_divide = 324,
    Op_mod = 325,
    Op_pow = 326,
    Op_relational_and = 327,
    Op_relational_or = 328,
    Op_unary_and = 329,
    Op_unary_or = 330,
    Op_unary_not = 331,
    M_question = 332,
    M_semicolon = 333,
    M_colon = 334,
    M_comma = 335,
    M_lcurly = 336,
    M_rcurly = 337,
    M_lparan = 338,
    M_rparan = 339,
    M_lsqbracket = 340,
    M_rsqbracket = 341,
    M_dot = 342,
    M_doublequotes = 343,
    M_singlequotes = 344,
    M_underscore = 345,
    Bool_true = 346,
    Bool_false = 347
  };
#endif
/* Tokens.  */
#define T_int64 258
#define Identifier 259
#define T_string 260
#define Op_add 261
#define Single_line_comment 262
#define Multi_line_comment 263
#define T_bool 264
#define T_int 265
#define T_int8 266
#define T_int16 267
#define T_int32 268
#define T_uint 269
#define T_uint16 270
#define T_uint32 271
#define T_uint64 272
#define T_uintptr 273
#define T_float32 274
#define T_float64 275
#define T_complex64 276
#define T_complex128 277
#define Key_break 278
#define Key_case 279
#define Key_const 280
#define Key_continue 281
#define Key_default 282
#define Key_else 283
#define Key_fallthrough 284
#define Key_for 285
#define Key_func 286
#define Key_if 287
#define Key_import 288
#define Key_interface 289
#define Key_map 290
#define Key_package 291
#define Key_range 292
#define Key_return 293
#define Key_select 294
#define Key_struct 295
#define Key_switch 296
#define Key_type 297
#define Key_var 298
#define Key_class 299
#define Key_private 300
#define Key_protected 301
#define Key_public 302
#define Key_static 303
#define Key_try 304
#define Key_catch 305
#define Key_finally 306
#define Imaginary_lit 307
#define Float_lit 308
#define Int_lit 309
#define String_lit 310
#define Op_greater_greater 311
#define Op_less_less 312
#define Op_greater 313
#define Op_less 314
#define Op_greater_eq 315
#define Op_less_eq 316
#define Op_not_equal 317
#define Op_equality 318
#define Op_assign 319
#define Op_unary_add 320
#define Op_unary_sub 321
#define Op_sub 322
#define Op_mult 323
#define Op_divide 324
#define Op_mod 325
#define Op_pow 326
#define Op_relational_and 327
#define Op_relational_or 328
#define Op_unary_and 329
#define Op_unary_or 330
#define Op_unary_not 331
#define M_question 332
#define M_semicolon 333
#define M_colon 334
#define M_comma 335
#define M_lcurly 336
#define M_rcurly 337
#define M_lparan 338
#define M_rparan 339
#define M_lsqbracket 340
#define M_rsqbracket 341
#define M_dot 342
#define M_doublequotes 343
#define M_singlequotes 344
#define M_underscore 345
#define Bool_true 346
#define Bool_false 347

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 17 "lexer.y" /* yacc.c:355  */

    int ival;
    char *sval;
    Attr* attr;
    OpAttr* opattr;
    Codn* codn;
    ElIF* elif;

#line 315 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 332 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1089

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  383

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    47,    50,    54,    58,    61,    65,    66,
      70,    71,    72,    73,    74,    75,    77,    78,    81,    85,
      86,    88,    89,    90,    93,    99,   103,   104,   105,   106,
     110,   121,   122,   123,   124,   125,   126,   131,   139,   143,
     144,   145,   149,   150,   154,   155,   159,   160,   164,   165,
     169,   170,   171,   175,   176,   180,   184,   185,   189,   190,
     198,   202,   206,   207,   211,   215,   216,   217,   218,   219,
     220,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   243,   244,   245,
     249,   250,   251,   255,   259,   260,   261,   262,   263,   264,
     268,   272,   273,   277,   278,   282,   283,   287,   288,   292,
     293,   294,   298,   302,   303,   307,   308,   312,   313,   317,
     318,   319,   320,   321,   322,   326,   330,   334,   335,   336,
     337,   338,   348,   352,   353,   357,   358,   362,   363,   367,
     368,   369,   370,   375,   376,   377,   387,   388,   389,   390,
     391,   392,   396,   397,   398,   399,   400,   401,   406,   407,
     411,   412,   413,   414,   415,   416,   417,   421,   425,   426,
     427,   431,   435,   439,   440,   441,   442,   443,   444,   448,
     452,   456,   460,   461,   462,   466,   470,   471,   475,   479,
     480,   481,   482,   486,   487,   491,   492,   496,   500,   504,
     505,   509,   510,   511,   512,   513,   514,   518,   519,   520,
     521,   522,   523,   536,   540,   544,   545,   546,   550,   551,
     555,   556,   557,   561,   562,   563,   567
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_int64", "Identifier", "T_string",
  "Op_add", "Single_line_comment", "Multi_line_comment", "T_bool", "T_int",
  "T_int8", "T_int16", "T_int32", "T_uint", "T_uint16", "T_uint32",
  "T_uint64", "T_uintptr", "T_float32", "T_float64", "T_complex64",
  "T_complex128", "Key_break", "Key_case", "Key_const", "Key_continue",
  "Key_default", "Key_else", "Key_fallthrough", "Key_for", "Key_func",
  "Key_if", "Key_import", "Key_interface", "Key_map", "Key_package",
  "Key_range", "Key_return", "Key_select", "Key_struct", "Key_switch",
  "Key_type", "Key_var", "Key_class", "Key_private", "Key_protected",
  "Key_public", "Key_static", "Key_try", "Key_catch", "Key_finally",
  "Imaginary_lit", "Float_lit", "Int_lit", "String_lit",
  "Op_greater_greater", "Op_less_less", "Op_greater", "Op_less",
  "Op_greater_eq", "Op_less_eq", "Op_not_equal", "Op_equality",
  "Op_assign", "Op_unary_add", "Op_unary_sub", "Op_sub", "Op_mult",
  "Op_divide", "Op_mod", "Op_pow", "Op_relational_and", "Op_relational_or",
  "Op_unary_and", "Op_unary_or", "Op_unary_not", "M_question",
  "M_semicolon", "M_colon", "M_comma", "M_lcurly", "M_rcurly", "M_lparan",
  "M_rparan", "M_lsqbracket", "M_rsqbracket", "M_dot", "M_doublequotes",
  "M_singlequotes", "M_underscore", "Bool_true", "Bool_false", "$accept",
  "SourceFile", "Block", "OPENB", "CLOSEB", "BrkBlk", "BrkBlkEnd",
  "StatementList", "Statement", "SimpleStmt", "EmptyStmt",
  "ExpressionStmt", "IncDecStmt", "Assignment", "ASN_OP", "ShortVarDecl",
  "VarDecl", "VarSpec", "Declaration", "FunctionDecl", "Signature",
  "Result", "Parameters", "ParameterList", "ParameterDecl", "TypeList",
  "IdentifierList", "MethodDecl", "Receiver", "TopLevelDeclList",
  "CompositeLit", "LiteralType", "VarType", "Type", "Operand",
  "OperandName", "LiteralValue", "SliceType", "ElementList",
  "KeyedElement", "Key", "Element", "TopLevelDecl", "LabeledStmt",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "IfStmt", "EmptyExpr",
  "Empty", "ForStmt", "Expression", "Expression1", "Expression2",
  "Expression3", "Expression4", "Expression5", "REL_OP", "MUL_OP",
  "UnaryExpr", "PrimaryExpr", "StructLiteral", "KeyValList", "Selector",
  "Index", "Slice", "TypeDecl", "TypeSpec", "TypeAssertion", "Arguments",
  "DOTS", "ExpressionList", "MapType", "StructType", "FieldDeclList",
  "FieldDecl", "PointerType", "ArrayType", "Literal", "BasicLit",
  "UnaryOp", "String", "PackageClause", "ImportDeclList", "ImportDecl",
  "ImportSpecList", "ImportSpec", "ImportPath", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

#define YYPACT_NINF -324

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-324)))

#define YYTABLE_NINF -107

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    32,    37,   -18,  -324,  -324,    12,     7,   116,     4,
      69,  -324,    25,    69,  -324,  -324,  -324,    18,   157,   171,
    -324,  -324,  -324,  -324,   141,   114,  -324,   115,  -324,  -324,
      48,   132,  -324,  -324,     9,  -324,   183,  1004,  -324,  -324,
    -324,   848,   138,  -324,  -324,  -324,   144,  -324,   -10,  -324,
      85,  -324,   926,   -10,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,   148,   -23,  1004,    24,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,   174,  -324,  -324,  -324,   178,  1004,
    -324,  -324,   186,  -324,   192,   257,   764,   738,   196,  -324,
    -324,   187,   960,    30,  -324,  -324,  -324,  1004,    31,    39,
    -324,  -324,  -324,  -324,  -324,  -324,  1004,  -324,  -324,  -324,
     764,  1004,   185,  -324,  -324,  -324,   121,  -324,   195,   191,
     205,   207,   256,    81,   235,  -324,    54,   194,  -324,  -324,
     600,  -324,  -324,  -324,  -324,  -324,  -324,  -324,   202,  -324,
     764,  -324,  -324,  -324,  -324,  1004,  -324,  -324,  -324,  -324,
     197,  -324,   926,    43,   209,  -324,    49,   210,  -324,   208,
     364,   418,  -324,   764,  -324,  1004,   764,   764,  -324,  -324,
    -324,  -324,  -324,  -324,   764,   764,   764,   764,   600,   600,
     596,   622,    35,  -324,  -324,  -324,  -324,  -324,   600,    54,
     764,   202,   329,  -324,    97,  -324,  1004,    69,  -324,   211,
    -324,  -324,  -324,  -324,  -324,   218,    70,  -324,   220,  -324,
     223,  -324,   149,   227,   225,  -324,   207,   256,    81,   235,
     235,   235,    54,    54,  -324,   102,   680,   109,  -324,  1004,
    -324,  -324,  -324,   229,   316,   317,   241,  -324,   764,  -324,
     258,   245,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324,  -324,  -324,    79,   822,  1004,  -324,  -324,
    -324,  -324,   453,  -324,   542,   507,  -324,   764,  -324,  -324,
     240,  -324,   111,   706,  -324,   243,   329,  -324,  -324,   764,
     187,   764,   202,   246,   252,  -324,   267,  -324,  -324,   273,
     764,   764,  -324,  -324,  -324,  -324,  -324,  -324,  -324,   260,
    -324,   764,  -324,  -324,   134,  -324,  -324,   264,   266,   113,
    -324,   268,   158,  -324,  -324,   764,   764,   202,   202,   764,
     259,   764,  -324,  -324,  -324,   187,  -324,   764,   310,  -324,
    -324,  -324,  -324,   261,   764,   764,  -324,   187,   104,  -324,
    -324,   270,   275,  -324,  -324,  -324,   323,  -324,  -324,   764,
     764,  -324,  -324,   104,  -324,  -324,  -324,   187,   187,   187,
    -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
    -324,  -324,  -324
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   214,     1,   215,     0,     0,     0,
       0,   213,   220,     0,   226,   219,   225,     0,     0,     0,
      43,   109,   110,   111,     2,     0,    42,     0,   217,   223,
       0,     0,   224,     4,     0,    61,     0,     0,   179,    58,
      38,     0,     0,    63,   216,   218,     0,   222,     0,    50,
       0,    53,     0,     0,    74,    93,    77,    76,    75,    72,
      71,    73,    78,    79,    80,    81,    82,    83,    84,    85,
      86,     0,     0,     0,     0,    87,    89,   180,    88,    69,
      70,    65,    67,    66,     0,   156,   155,    36,     0,   152,
     153,   154,     0,   157,     0,     0,     0,    39,     0,    62,
     221,     5,    46,     0,    51,    55,    60,     0,     0,     0,
     197,   207,   206,   202,   201,   208,   211,   210,   212,   209,
       0,     0,     0,   204,   205,   200,     0,   160,    91,     0,
     132,   134,   136,   138,   142,   145,   158,     0,    90,   199,
       0,   203,    31,    32,    34,    33,    59,   186,    41,   152,
       0,    35,     4,     5,    44,     0,    47,    49,    52,    54,
       0,   192,     0,     0,     0,   191,     0,     0,   100,     0,
       0,     0,    64,   168,   166,     0,     0,     0,   149,   148,
     150,   151,   147,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   161,   162,   163,   164,   165,     0,   159,
       0,    40,    24,    45,     0,    57,     0,   196,   190,     0,
     193,   189,    92,   185,    95,   108,     0,   101,     0,   103,
     107,    94,     0,     0,     0,   198,   133,   135,   137,   140,
     141,   139,   144,   143,   182,     0,     0,     0,   171,     0,
      68,    91,   187,    93,   115,   117,     4,     4,   113,    16,
       5,     0,    12,    19,    20,    21,    22,    23,    10,    11,
      13,    14,    15,    17,    18,   186,     0,     0,    48,   188,
     195,   194,     0,    97,     0,     0,    96,     0,   167,   183,
       0,   173,     0,     0,   172,     0,    24,   116,   118,    24,
       0,    24,   114,     0,     0,     9,     0,    26,    27,     0,
       0,     0,    56,    99,   102,   108,   104,   107,    98,   169,
     184,     0,   174,   175,     0,   181,   112,     0,   126,   186,
       7,     0,   186,     3,     8,     0,     0,    37,    30,   168,
       0,     0,   176,     6,     6,     0,   129,     0,     5,    28,
      29,   170,   177,     0,   125,     0,     7,     0,     0,   119,
     178,     0,     0,    25,   126,     5,     5,     5,     5,    24,
      24,    24,   128,     0,   120,   121,   122,     0,     0,     0,
       5,     5,     7,     7,     7,   124,   123,     5,     5,     5,
     127,   130,   131
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -324,  -324,   -94,  -142,  -112,  -166,  -323,  -324,  -225,  -226,
    -277,    10,  -324,  -324,   -96,  -324,  -324,  -324,     8,  -324,
     303,  -324,   340,  -324,   255,  -324,    -1,  -324,  -324,  -324,
    -324,   -33,  -324,   -32,   162,   -35,  -123,  -324,   203,   -67,
    -324,    88,   339,  -324,  -324,  -324,  -324,  -306,  -324,    11,
    -324,   -74,  -324,   190,   198,   189,    62,  -324,   -26,  -324,
     -34,  -324,    47,  -324,  -324,  -324,  -324,  -324,  -324,  -324,
     142,   -82,  -324,  -324,   269,    64,  -324,  -324,  -324,  -324,
    -324,    14,  -324,  -324,   371,  -324,    36,   201
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   249,    48,   154,   290,   336,   250,   251,   252,
     253,   254,   255,   256,    96,   257,    20,    40,   258,    22,
     101,   156,   102,    50,    51,   204,   162,    23,    36,    24,
     125,   126,    76,   110,   127,   128,   215,    79,   216,   217,
     218,   219,    25,   259,   260,   261,   262,   263,   352,   334,
     264,   147,   130,   131,   132,   133,   134,   184,   189,   135,
     136,   174,   224,   193,   194,   195,    26,    38,   196,   197,
     137,   266,    80,    81,   163,   164,    82,    83,   138,   139,
     140,   141,     3,     8,     9,    30,    15,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     129,   150,    78,   172,    75,    77,    78,   153,    75,    97,
     202,    10,   318,    39,   148,    98,    21,    78,    41,    75,
     105,    14,    33,   355,    14,   294,    14,    14,    55,    10,
     111,     1,    21,    52,    39,    39,     4,     5,    78,   238,
      75,   203,   358,    39,    14,     7,   167,    39,    31,   377,
     378,   379,    10,    39,    78,   108,    75,   371,   109,    71,
       6,   316,    11,   317,    72,   321,    46,    78,   201,    75,
     157,    98,    78,    34,    75,   160,   112,   113,   114,    11,
      11,    78,    28,    75,   369,   296,    78,   185,    75,   168,
      12,   115,   116,    49,    13,   117,   220,   220,   118,   223,
     119,    34,    52,    11,   289,   291,   199,   120,   235,    74,
     121,   122,    13,   161,   158,   123,   124,   237,   239,   296,
      78,   165,    75,   205,    11,   208,   242,    78,   265,    75,
     207,   211,    45,   367,   368,    13,   247,   190,   293,   191,
      78,   192,    75,   225,   297,   298,   299,    17,   186,     7,
     272,   305,   273,   335,   232,   233,   187,   -25,    18,    19,
     -25,    37,   282,   241,   296,   103,   292,   344,   345,   104,
     301,    78,    17,    75,   269,    39,   265,   267,   297,   298,
     299,   268,   200,    18,    19,   152,   279,    53,   283,   122,
     311,   -25,    43,    44,    -6,   284,   320,   312,   220,   170,
     307,   220,   171,   309,    78,   304,    75,   285,   304,   314,
      47,    29,   265,   331,    32,   319,    99,   322,   327,   328,
     332,   270,   100,   297,   298,   299,   349,   209,   338,   275,
     209,   276,    78,   107,    75,   302,   -25,   330,   142,   152,
      98,   346,   143,   362,   364,   365,   366,   229,   230,   231,
     144,   339,   340,   356,   357,   223,   145,   343,   375,   376,
     151,   146,   243,   347,   111,   380,   381,   382,   152,   370,
     353,   354,   169,   372,   373,   374,   173,   175,   176,   177,
     198,   244,   200,   206,   245,   265,   265,   210,   246,   271,
     247,    85,    86,    71,   212,   213,   248,  -106,    72,   274,
      18,    19,  -105,   149,    90,    91,   277,   278,   286,   188,
     112,   113,   114,    11,   178,   179,   180,   181,   182,   183,
     287,   288,    -6,   295,   310,   115,   116,   315,   323,   117,
     324,   325,   118,   243,   119,   111,   -24,   326,   348,   152,
     329,   120,   333,    74,   -19,   342,   337,   350,   359,   123,
     124,   363,   244,   360,   351,   245,   106,    35,   159,   246,
     240,   247,   306,    42,    71,   361,   226,   248,    55,    72,
     111,    18,    19,   228,   222,   227,   341,   280,   166,    27,
       0,   112,   113,   114,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,   116,     0,    71,
     117,     0,     0,   118,    72,   119,     0,     0,     0,     0,
     152,     0,   120,     0,    74,     0,   112,   113,   114,    11,
     123,   124,    55,     0,   111,     0,     0,     0,     0,     0,
       0,   115,   116,     0,     0,   117,     0,     0,   118,     0,
     119,     0,   170,     0,     0,   171,   214,   120,     0,    74,
       0,     0,     0,    71,     0,   123,   124,    55,    72,   111,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,   113,   114,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,   116,     0,    71,   117,
       0,     0,   118,    72,   119,     0,   170,     0,     0,   171,
     221,   120,     0,    74,     0,   112,   113,   114,    11,   123,
     124,    55,     0,   111,     0,     0,     0,     0,     0,     0,
     115,   116,     0,     0,   117,     0,     0,   118,     0,   119,
       0,   170,     0,     0,   171,   303,   120,     0,    74,     0,
       0,     0,    71,     0,   123,   124,    55,    72,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   114,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   115,   116,     0,    71,   117,     0,
       0,   118,    72,   119,     0,   170,     0,     0,   171,   308,
     120,     0,    74,     0,   112,   113,   114,    11,   123,   124,
      55,     0,   111,     0,    55,     0,     0,     0,     0,   115,
     116,     0,     0,   117,     0,     0,   118,     0,   119,     0,
     170,     0,     0,   171,     0,   120,    55,    74,   111,     0,
       0,    71,     0,   123,   124,    71,    72,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     114,    11,   112,   113,   114,    11,     0,    71,     0,     0,
       0,     0,    72,   115,   116,     0,     0,   117,    73,     0,
     118,     0,   119,     0,   112,   113,   114,    11,     0,   120,
     234,    74,     0,   120,    55,    74,   111,   123,   124,   115,
     116,   123,   124,   117,     0,     0,   118,     0,   119,     0,
       0,   236,     0,     0,     0,   120,     0,    74,     0,     0,
      55,     0,   111,   123,   124,    71,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,   113,   114,    11,     0,     0,     0,     0,
       0,    71,     0,     0,    84,     0,    72,   115,   116,     0,
       0,   117,     0,     0,   118,     0,   119,     0,   112,   113,
     114,    11,     0,   120,     0,    74,   281,     0,    55,     0,
     111,   123,   124,   115,   116,     0,     0,   117,     0,     0,
     118,     0,   119,     0,     0,     0,     0,     0,     0,   120,
       0,    74,   313,     0,    85,    86,     0,   123,   124,    71,
       0,     0,    87,     0,    72,    88,   149,    90,    91,    92,
       0,     0,    93,    94,     0,     0,   112,   113,   114,    11,
       0,     0,     0,     0,     0,     0,     0,     0,    84,     0,
       0,   115,   116,     0,     0,   117,     0,     0,   118,     0,
     119,     0,     0,     0,     0,     0,     0,   120,     0,    74,
       0,    54,    55,    56,    84,   123,   124,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,     0,     0,     0,     0,     0,     0,     0,    85,    86,
       0,     0,     0,    71,     0,     0,   300,     0,    72,    88,
     149,    90,    91,    92,     0,     0,    93,    94,     0,     0,
       0,     0,   200,     0,    85,    86,     0,     0,     0,     0,
       0,     0,    87,     0,     0,    88,    89,    90,    91,    92,
       0,     0,    93,    94,     0,     0,     0,     0,    95,    54,
      55,    56,     0,    74,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,    54,    55,    56,    72,     0,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    71,     0,     0,     0,     0,
      72,     0,     0,     0,     0,     0,    95,    54,    55,    56,
       0,    74,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,   155,    72,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      74,    97,    37,   126,    37,    37,    41,   101,    41,    41,
     152,     4,   289,     4,    96,    41,     8,    52,    19,    52,
      52,     7,     4,   346,    10,   250,    12,    13,     4,     4,
       6,    36,    24,    34,     4,     4,     4,     0,    73,     4,
      73,   153,   348,     4,    30,    33,   120,     4,    12,   372,
     373,   374,     4,     4,    89,    78,    89,   363,    81,    35,
      78,   286,    55,   289,    40,   291,    30,   102,   150,   102,
     102,    97,   107,    83,   107,   107,    52,    53,    54,    55,
      55,   116,    78,   116,   361,     6,   121,     6,   121,   121,
      83,    67,    68,    84,    87,    71,   170,   171,    74,   173,
      76,    83,   103,    55,   246,   247,   140,    83,   190,    85,
      86,    87,    87,    82,    84,    91,    92,   191,    83,     6,
     155,    82,   155,   155,    55,    82,   200,   162,   202,   162,
     162,    82,    84,   359,   360,    87,    32,    83,   250,    85,
     175,    87,   175,   175,    65,    66,    67,    31,    67,    33,
      80,   274,    82,   319,   188,   189,    75,    78,    42,    43,
      81,     4,   236,   198,     6,    80,   248,   333,   334,    84,
     266,   206,    31,   206,   206,     4,   250,    80,    65,    66,
      67,    84,    80,    42,    43,    81,    84,     4,    79,    87,
      79,    78,    78,    78,    81,    86,   290,    86,   272,    78,
     274,   275,    81,   277,   239,   272,   239,   239,   275,   283,
      78,    10,   286,    79,    13,   289,    78,   291,   300,   301,
      86,   207,    78,    65,    66,    67,   338,   163,   322,    80,
     166,    82,   267,    85,   267,   267,    78,   311,    64,    81,
     266,   335,    64,   355,   356,   357,   358,   185,   186,   187,
      64,   325,   326,   347,   348,   329,    64,   331,   370,   371,
      64,     4,     4,   337,     6,   377,   378,   379,    81,   363,
     344,   345,    87,   367,   368,   369,    81,    86,    73,    72,
      86,    23,    80,    86,    26,   359,   360,    78,    30,    78,
      32,    56,    57,    35,    84,    87,    38,    79,    40,    79,
      42,    43,    79,    68,    69,    70,    79,    82,    79,    74,
      52,    53,    54,    55,    58,    59,    60,    61,    62,    63,
       4,     4,    81,    78,    84,    67,    68,    84,    82,    71,
      78,    64,    74,     4,    76,     6,    78,    64,    28,    81,
      80,    83,    78,    85,    78,    86,    78,    86,    78,    91,
      92,    28,    23,    78,   344,    26,    53,    17,   103,    30,
     198,    32,   274,    24,    35,   354,   176,    38,     4,    40,
       6,    42,    43,   184,   171,   177,   329,   235,   109,     8,
      -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    35,
      71,    -1,    -1,    74,    40,    76,    -1,    -1,    -1,    -1,
      81,    -1,    83,    -1,    85,    -1,    52,    53,    54,    55,
      91,    92,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    -1,    -1,    71,    -1,    -1,    74,    -1,
      76,    -1,    78,    -1,    -1,    81,    82,    83,    -1,    85,
      -1,    -1,    -1,    35,    -1,    91,    92,     4,    40,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    35,    71,
      -1,    -1,    74,    40,    76,    -1,    78,    -1,    -1,    81,
      82,    83,    -1,    85,    -1,    52,    53,    54,    55,    91,
      92,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    -1,    -1,    71,    -1,    -1,    74,    -1,    76,
      -1,    78,    -1,    -1,    81,    82,    83,    -1,    85,    -1,
      -1,    -1,    35,    -1,    91,    92,     4,    40,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    35,    71,    -1,
      -1,    74,    40,    76,    -1,    78,    -1,    -1,    81,    82,
      83,    -1,    85,    -1,    52,    53,    54,    55,    91,    92,
       4,    -1,     6,    -1,     4,    -1,    -1,    -1,    -1,    67,
      68,    -1,    -1,    71,    -1,    -1,    74,    -1,    76,    -1,
      78,    -1,    -1,    81,    -1,    83,     4,    85,     6,    -1,
      -1,    35,    -1,    91,    92,    35,    40,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    52,    53,    54,    55,    -1,    35,    -1,    -1,
      -1,    -1,    40,    67,    68,    -1,    -1,    71,    68,    -1,
      74,    -1,    76,    -1,    52,    53,    54,    55,    -1,    83,
      84,    85,    -1,    83,     4,    85,     6,    91,    92,    67,
      68,    91,    92,    71,    -1,    -1,    74,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    83,    -1,    85,    -1,    -1,
       4,    -1,     6,    91,    92,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,     6,    -1,    40,    67,    68,    -1,
      -1,    71,    -1,    -1,    74,    -1,    76,    -1,    52,    53,
      54,    55,    -1,    83,    -1,    85,    86,    -1,     4,    -1,
       6,    91,    92,    67,    68,    -1,    -1,    71,    -1,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    85,    86,    -1,    56,    57,    -1,    91,    92,    35,
      -1,    -1,    64,    -1,    40,    67,    68,    69,    70,    71,
      -1,    -1,    74,    75,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,    67,    68,    -1,    -1,    71,    -1,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    85,
      -1,     3,     4,     5,     6,    91,    92,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    35,    -1,    -1,    64,    -1,    40,    67,
      68,    69,    70,    71,    -1,    -1,    74,    75,    -1,    -1,
      -1,    -1,    80,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    80,     3,
       4,     5,    -1,    85,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,     3,     4,     5,    40,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    80,     3,     4,     5,
      -1,    85,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    83,    40,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    94,   175,     4,     0,    78,    33,   176,   177,
       4,    55,    83,    87,   174,   179,   180,    31,    42,    43,
     109,   111,   112,   120,   122,   135,   159,   177,    78,   180,
     178,   179,   180,     4,    83,   115,   121,     4,   160,     4,
     110,   119,   135,    78,    78,    84,   179,    78,    96,    84,
     116,   117,   119,     4,     3,     4,     5,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    35,    40,    68,    85,   124,   125,   126,   128,   130,
     165,   166,   169,   170,     6,    56,    57,    64,    67,    68,
      69,    70,    71,    74,    75,    80,   107,   126,   151,    78,
      78,   113,   115,    80,    84,   126,   113,    85,    78,    81,
     126,     6,    52,    53,    54,    67,    68,    71,    74,    76,
      83,    86,    87,    91,    92,   123,   124,   127,   128,   144,
     145,   146,   147,   148,   149,   152,   153,   163,   171,   172,
     173,   174,    64,    64,    64,    64,     4,   144,   164,    68,
     107,    64,    81,    95,    97,    83,   114,   126,    84,   117,
     126,    82,   119,   167,   168,    82,   167,   144,   126,    87,
      78,    81,   129,    81,   154,    86,    73,    72,    58,    59,
      60,    61,    62,    63,   150,     6,    67,    75,    74,   151,
      83,    85,    87,   156,   157,   158,   161,   162,    86,   153,
      80,   164,    96,    97,   118,   126,    86,   126,    82,   168,
      78,    82,    84,    87,    82,   129,   131,   132,   133,   134,
     144,    82,   131,   144,   155,   126,   146,   147,   148,   149,
     149,   149,   153,   153,    84,   164,    79,   144,     4,    83,
     127,   128,   144,     4,    23,    26,    30,    32,    38,    95,
     100,   101,   102,   103,   104,   105,   106,   108,   111,   136,
     137,   138,   139,   140,   143,   144,   164,    80,    84,   126,
     174,    78,    80,    82,    79,    80,    82,    79,    82,    84,
     163,    86,   144,    79,    86,   126,    79,     4,     4,    96,
      98,    96,   164,    97,   101,    78,     6,    65,    66,    67,
      64,   107,   126,    82,   132,   129,   134,   144,    82,   144,
      84,    79,    86,    86,   144,    84,   101,   102,   103,   144,
      95,   102,   144,    82,    78,    64,    64,   164,   164,    80,
     144,    79,    86,    78,   142,    98,    99,    78,    95,   144,
     144,   155,    86,   144,    98,    98,    95,   144,    28,    97,
      86,   104,   141,   144,   144,    99,    95,    95,   140,    78,
      78,   142,    97,    28,    97,    97,    97,   102,   102,   103,
      95,   140,    95,    95,    95,    97,    97,    99,    99,    99,
      97,    97,    97
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    97,    98,    99,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   103,   104,   105,   105,   105,   105,
     106,   107,   107,   107,   107,   107,   107,   108,   109,   110,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     115,   115,   115,   116,   116,   117,   118,   118,   119,   119,
     120,   121,   122,   122,   123,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   126,   126,   126,
     127,   127,   127,   128,   129,   129,   129,   129,   129,   129,
     130,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   140,   140,   140,   140,   141,   142,   143,   143,   143,
     143,   143,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   148,   148,   149,   149,   149,   150,   150,   150,   150,
     150,   150,   151,   151,   151,   151,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   154,   155,   155,
     155,   156,   157,   158,   158,   158,   158,   158,   158,   159,
     160,   161,   162,   162,   162,   163,   164,   164,   165,   166,
     166,   166,   166,   167,   167,   168,   168,   169,   170,   171,
     171,   172,   172,   172,   172,   172,   172,   173,   173,   173,
     173,   173,   173,   174,   175,   176,   176,   176,   177,   177,
     178,   178,   178,   179,   179,   179,   180
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     0,     0,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     4,     4,
       3,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       4,     3,     1,     1,     5,     6,     1,     2,     3,     1,
       2,     3,     4,     1,     3,     2,     3,     1,     1,     3,
       4,     1,     3,     2,     2,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     2,     3,     3,     4,     4,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     2,     1,     2,     1,     2,     5,
       7,     7,     7,     9,     9,     0,     0,    11,     7,     4,
      11,    11,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     2,     2,     2,     3,     0,     3,
       5,     2,     3,     3,     4,     4,     5,     6,     7,     2,
       2,     4,     2,     3,     4,     3,     1,     3,     5,     4,
       4,     3,     3,     2,     3,     3,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     3,     2,     4,     2,
       0,     3,     2,     2,     2,     1,     1
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
#line 43 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1862 "y.tab.c" /* yacc.c:1661  */
    break;

  case 3:
#line 47 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1868 "y.tab.c" /* yacc.c:1661  */
    break;

  case 4:
#line 50 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1874 "y.tab.c" /* yacc.c:1661  */
    break;

  case 5:
#line 54 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1880 "y.tab.c" /* yacc.c:1661  */
    break;

  case 6:
#line 58 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1886 "y.tab.c" /* yacc.c:1661  */
    break;

  case 7:
#line 61 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1892 "y.tab.c" /* yacc.c:1661  */
    break;

  case 8:
#line 65 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1898 "y.tab.c" /* yacc.c:1661  */
    break;

  case 9:
#line 66 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1904 "y.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 70 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1910 "y.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 71 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1916 "y.tab.c" /* yacc.c:1661  */
    break;

  case 12:
#line 72 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1922 "y.tab.c" /* yacc.c:1661  */
    break;

  case 13:
#line 73 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1928 "y.tab.c" /* yacc.c:1661  */
    break;

  case 14:
#line 74 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1934 "y.tab.c" /* yacc.c:1661  */
    break;

  case 15:
#line 75 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1940 "y.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 77 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1946 "y.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 78 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1952 "y.tab.c" /* yacc.c:1661  */
    break;

  case 18:
#line 81 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1958 "y.tab.c" /* yacc.c:1661  */
    break;

  case 19:
#line 85 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1964 "y.tab.c" /* yacc.c:1661  */
    break;

  case 20:
#line 86 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1970 "y.tab.c" /* yacc.c:1661  */
    break;

  case 21:
#line 88 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1976 "y.tab.c" /* yacc.c:1661  */
    break;

  case 22:
#line 89 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1982 "y.tab.c" /* yacc.c:1661  */
    break;

  case 23:
#line 90 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1988 "y.tab.c" /* yacc.c:1661  */
    break;

  case 24:
#line 93 "lexer.y" /* yacc.c:1661  */
    {	}
#line 1994 "y.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 99 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2000 "y.tab.c" /* yacc.c:1661  */
    break;

  case 26:
#line 103 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2006 "y.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 104 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2012 "y.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 105 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2018 "y.tab.c" /* yacc.c:1661  */
    break;

  case 29:
#line 106 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2024 "y.tab.c" /* yacc.c:1661  */
    break;

  case 30:
#line 110 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2030 "y.tab.c" /* yacc.c:1661  */
    break;

  case 31:
#line 121 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2036 "y.tab.c" /* yacc.c:1661  */
    break;

  case 32:
#line 122 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2042 "y.tab.c" /* yacc.c:1661  */
    break;

  case 33:
#line 123 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2048 "y.tab.c" /* yacc.c:1661  */
    break;

  case 34:
#line 124 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2054 "y.tab.c" /* yacc.c:1661  */
    break;

  case 35:
#line 125 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2060 "y.tab.c" /* yacc.c:1661  */
    break;

  case 36:
#line 126 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2066 "y.tab.c" /* yacc.c:1661  */
    break;

  case 37:
#line 131 "lexer.y" /* yacc.c:1661  */
    {sprintf(t,"=,%s,%s",(yyvsp[-2].attr)->place,(yyvsp[0].attr)->place);
            (yyval.attr)->code=append((yyvsp[-2].attr)->code,(yyvsp[0].attr)->code);
            (yyval.attr)->code=append((yyval.attr)->code,gen(t));
            printcode((yyval.attr)->code);
    	}
#line 2076 "y.tab.c" /* yacc.c:1661  */
    break;

  case 38:
#line 139 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2082 "y.tab.c" /* yacc.c:1661  */
    break;

  case 39:
#line 143 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2088 "y.tab.c" /* yacc.c:1661  */
    break;

  case 40:
#line 144 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2094 "y.tab.c" /* yacc.c:1661  */
    break;

  case 41:
#line 145 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2100 "y.tab.c" /* yacc.c:1661  */
    break;

  case 42:
#line 149 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2106 "y.tab.c" /* yacc.c:1661  */
    break;

  case 43:
#line 150 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2112 "y.tab.c" /* yacc.c:1661  */
    break;

  case 44:
#line 154 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2118 "y.tab.c" /* yacc.c:1661  */
    break;

  case 45:
#line 155 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2124 "y.tab.c" /* yacc.c:1661  */
    break;

  case 46:
#line 159 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2130 "y.tab.c" /* yacc.c:1661  */
    break;

  case 47:
#line 160 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2136 "y.tab.c" /* yacc.c:1661  */
    break;

  case 48:
#line 164 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2142 "y.tab.c" /* yacc.c:1661  */
    break;

  case 49:
#line 165 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2148 "y.tab.c" /* yacc.c:1661  */
    break;

  case 50:
#line 169 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2154 "y.tab.c" /* yacc.c:1661  */
    break;

  case 51:
#line 170 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2160 "y.tab.c" /* yacc.c:1661  */
    break;

  case 52:
#line 171 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2166 "y.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 175 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2172 "y.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 176 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2178 "y.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 180 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2184 "y.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 184 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2190 "y.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 185 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2196 "y.tab.c" /* yacc.c:1661  */
    break;

  case 58:
#line 189 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2202 "y.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 190 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2208 "y.tab.c" /* yacc.c:1661  */
    break;

  case 60:
#line 198 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2214 "y.tab.c" /* yacc.c:1661  */
    break;

  case 61:
#line 202 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2220 "y.tab.c" /* yacc.c:1661  */
    break;

  case 62:
#line 206 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2226 "y.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 207 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2232 "y.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 211 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2238 "y.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 215 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2244 "y.tab.c" /* yacc.c:1661  */
    break;

  case 66:
#line 216 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2250 "y.tab.c" /* yacc.c:1661  */
    break;

  case 67:
#line 217 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2256 "y.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 218 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2262 "y.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 219 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2268 "y.tab.c" /* yacc.c:1661  */
    break;

  case 70:
#line 220 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2274 "y.tab.c" /* yacc.c:1661  */
    break;

  case 71:
#line 224 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2280 "y.tab.c" /* yacc.c:1661  */
    break;

  case 72:
#line 225 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2286 "y.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 226 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2292 "y.tab.c" /* yacc.c:1661  */
    break;

  case 74:
#line 227 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2298 "y.tab.c" /* yacc.c:1661  */
    break;

  case 75:
#line 228 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2304 "y.tab.c" /* yacc.c:1661  */
    break;

  case 76:
#line 229 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2310 "y.tab.c" /* yacc.c:1661  */
    break;

  case 77:
#line 230 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2316 "y.tab.c" /* yacc.c:1661  */
    break;

  case 78:
#line 231 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2322 "y.tab.c" /* yacc.c:1661  */
    break;

  case 79:
#line 232 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2328 "y.tab.c" /* yacc.c:1661  */
    break;

  case 80:
#line 233 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2334 "y.tab.c" /* yacc.c:1661  */
    break;

  case 81:
#line 234 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2340 "y.tab.c" /* yacc.c:1661  */
    break;

  case 82:
#line 235 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2346 "y.tab.c" /* yacc.c:1661  */
    break;

  case 83:
#line 236 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2352 "y.tab.c" /* yacc.c:1661  */
    break;

  case 84:
#line 237 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2358 "y.tab.c" /* yacc.c:1661  */
    break;

  case 85:
#line 238 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2364 "y.tab.c" /* yacc.c:1661  */
    break;

  case 86:
#line 239 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2370 "y.tab.c" /* yacc.c:1661  */
    break;

  case 87:
#line 243 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2376 "y.tab.c" /* yacc.c:1661  */
    break;

  case 88:
#line 244 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2382 "y.tab.c" /* yacc.c:1661  */
    break;

  case 89:
#line 245 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2388 "y.tab.c" /* yacc.c:1661  */
    break;

  case 90:
#line 249 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2394 "y.tab.c" /* yacc.c:1661  */
    break;

  case 92:
#line 251 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2400 "y.tab.c" /* yacc.c:1661  */
    break;

  case 93:
#line 255 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr)); strcpy((yyval.attr)->place,(yyvsp[0].sval));}
#line 2406 "y.tab.c" /* yacc.c:1661  */
    break;

  case 94:
#line 259 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2412 "y.tab.c" /* yacc.c:1661  */
    break;

  case 95:
#line 260 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2418 "y.tab.c" /* yacc.c:1661  */
    break;

  case 96:
#line 261 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2424 "y.tab.c" /* yacc.c:1661  */
    break;

  case 97:
#line 262 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2430 "y.tab.c" /* yacc.c:1661  */
    break;

  case 98:
#line 263 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2436 "y.tab.c" /* yacc.c:1661  */
    break;

  case 99:
#line 264 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2442 "y.tab.c" /* yacc.c:1661  */
    break;

  case 100:
#line 268 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2448 "y.tab.c" /* yacc.c:1661  */
    break;

  case 101:
#line 272 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2454 "y.tab.c" /* yacc.c:1661  */
    break;

  case 102:
#line 273 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2460 "y.tab.c" /* yacc.c:1661  */
    break;

  case 103:
#line 277 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2466 "y.tab.c" /* yacc.c:1661  */
    break;

  case 104:
#line 278 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2472 "y.tab.c" /* yacc.c:1661  */
    break;

  case 105:
#line 282 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2478 "y.tab.c" /* yacc.c:1661  */
    break;

  case 106:
#line 283 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2484 "y.tab.c" /* yacc.c:1661  */
    break;

  case 107:
#line 287 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2490 "y.tab.c" /* yacc.c:1661  */
    break;

  case 108:
#line 288 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2496 "y.tab.c" /* yacc.c:1661  */
    break;

  case 109:
#line 292 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2502 "y.tab.c" /* yacc.c:1661  */
    break;

  case 110:
#line 293 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2508 "y.tab.c" /* yacc.c:1661  */
    break;

  case 111:
#line 294 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2514 "y.tab.c" /* yacc.c:1661  */
    break;

  case 112:
#line 298 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2520 "y.tab.c" /* yacc.c:1661  */
    break;

  case 113:
#line 302 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2526 "y.tab.c" /* yacc.c:1661  */
    break;

  case 114:
#line 303 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2532 "y.tab.c" /* yacc.c:1661  */
    break;

  case 115:
#line 307 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2538 "y.tab.c" /* yacc.c:1661  */
    break;

  case 116:
#line 308 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2544 "y.tab.c" /* yacc.c:1661  */
    break;

  case 117:
#line 312 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2550 "y.tab.c" /* yacc.c:1661  */
    break;

  case 118:
#line 313 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2556 "y.tab.c" /* yacc.c:1661  */
    break;

  case 119:
#line 317 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2562 "y.tab.c" /* yacc.c:1661  */
    break;

  case 120:
#line 318 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2568 "y.tab.c" /* yacc.c:1661  */
    break;

  case 121:
#line 319 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2574 "y.tab.c" /* yacc.c:1661  */
    break;

  case 122:
#line 320 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2580 "y.tab.c" /* yacc.c:1661  */
    break;

  case 123:
#line 321 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2586 "y.tab.c" /* yacc.c:1661  */
    break;

  case 124:
#line 322 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2592 "y.tab.c" /* yacc.c:1661  */
    break;

  case 125:
#line 326 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2598 "y.tab.c" /* yacc.c:1661  */
    break;

  case 126:
#line 330 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2604 "y.tab.c" /* yacc.c:1661  */
    break;

  case 127:
#line 334 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2610 "y.tab.c" /* yacc.c:1661  */
    break;

  case 128:
#line 335 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2616 "y.tab.c" /* yacc.c:1661  */
    break;

  case 129:
#line 336 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2622 "y.tab.c" /* yacc.c:1661  */
    break;

  case 130:
#line 337 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2628 "y.tab.c" /* yacc.c:1661  */
    break;

  case 131:
#line 338 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2634 "y.tab.c" /* yacc.c:1661  */
    break;

  case 133:
#line 352 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2640 "y.tab.c" /* yacc.c:1661  */
    break;

  case 135:
#line 357 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2646 "y.tab.c" /* yacc.c:1661  */
    break;

  case 137:
#line 362 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2652 "y.tab.c" /* yacc.c:1661  */
    break;

  case 139:
#line 367 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2658 "y.tab.c" /* yacc.c:1661  */
    break;

  case 140:
#line 368 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr));(yyval.attr)->code=append((yyvsp[-2].attr)->code,(yyvsp[0].attr)->code);strcpy((yyval.attr)->place,newtmp());sprintf(t,"+,%s,%s,%s",(yyval.attr)->place,(yyvsp[-2].attr)->place,(yyvsp[0].attr)->place);(yyval.attr)->code=append((yyval.attr)->code,gen(t));printcode((yyval.attr)->code);}
#line 2664 "y.tab.c" /* yacc.c:1661  */
    break;

  case 141:
#line 369 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr));(yyval.attr)->code=append((yyvsp[-2].attr)->code,(yyvsp[0].attr)->code);strcpy((yyval.attr)->place,newtmp());sprintf(t,"-,%s,%s,%s",(yyval.attr)->place,(yyvsp[-2].attr)->place,(yyvsp[0].attr)->place);(yyval.attr)->code=append((yyval.attr)->code,gen(t));printcode((yyval.attr)->code);}
#line 2670 "y.tab.c" /* yacc.c:1661  */
    break;

  case 143:
#line 375 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr));(yyval.attr)->code=append((yyvsp[-2].attr)->code,(yyvsp[0].attr)->code);strcpy((yyval.attr)->place,newtmp());sprintf(t,"%s,%s,%s,%s",(yyvsp[-1].attr)->place,(yyval.attr)->place,(yyvsp[-2].attr)->place,(yyvsp[0].attr)->place);(yyval.attr)->code=append((yyval.attr)->code,gen(t));printcode((yyval.attr)->code);}
#line 2676 "y.tab.c" /* yacc.c:1661  */
    break;

  case 144:
#line 376 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2682 "y.tab.c" /* yacc.c:1661  */
    break;

  case 146:
#line 387 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2688 "y.tab.c" /* yacc.c:1661  */
    break;

  case 147:
#line 388 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2694 "y.tab.c" /* yacc.c:1661  */
    break;

  case 148:
#line 389 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2700 "y.tab.c" /* yacc.c:1661  */
    break;

  case 149:
#line 390 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2706 "y.tab.c" /* yacc.c:1661  */
    break;

  case 150:
#line 391 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2712 "y.tab.c" /* yacc.c:1661  */
    break;

  case 151:
#line 392 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2718 "y.tab.c" /* yacc.c:1661  */
    break;

  case 152:
#line 396 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr)); strcpy((yyval.attr)->place,(yyvsp[0].sval));}
#line 2724 "y.tab.c" /* yacc.c:1661  */
    break;

  case 153:
#line 397 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr)); strcpy((yyval.attr)->place,(yyvsp[0].sval));	}
#line 2730 "y.tab.c" /* yacc.c:1661  */
    break;

  case 154:
#line 398 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr)); strcpy((yyval.attr)->place,(yyvsp[0].sval));	}
#line 2736 "y.tab.c" /* yacc.c:1661  */
    break;

  case 155:
#line 399 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr)); strcpy((yyval.attr)->place,(yyvsp[0].sval));	}
#line 2742 "y.tab.c" /* yacc.c:1661  */
    break;

  case 156:
#line 400 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr)); strcpy((yyval.attr)->place,(yyvsp[0].sval));	}
#line 2748 "y.tab.c" /* yacc.c:1661  */
    break;

  case 157:
#line 401 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=malloc(sizeof(Attr)); strcpy((yyval.attr)->place,(yyvsp[0].sval));	}
#line 2754 "y.tab.c" /* yacc.c:1661  */
    break;

  case 159:
#line 407 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2760 "y.tab.c" /* yacc.c:1661  */
    break;

  case 161:
#line 412 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2766 "y.tab.c" /* yacc.c:1661  */
    break;

  case 162:
#line 413 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2772 "y.tab.c" /* yacc.c:1661  */
    break;

  case 163:
#line 414 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2778 "y.tab.c" /* yacc.c:1661  */
    break;

  case 164:
#line 415 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2784 "y.tab.c" /* yacc.c:1661  */
    break;

  case 165:
#line 416 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2790 "y.tab.c" /* yacc.c:1661  */
    break;

  case 166:
#line 417 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2796 "y.tab.c" /* yacc.c:1661  */
    break;

  case 167:
#line 421 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2802 "y.tab.c" /* yacc.c:1661  */
    break;

  case 168:
#line 425 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2808 "y.tab.c" /* yacc.c:1661  */
    break;

  case 169:
#line 426 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2814 "y.tab.c" /* yacc.c:1661  */
    break;

  case 170:
#line 427 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2820 "y.tab.c" /* yacc.c:1661  */
    break;

  case 171:
#line 431 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2826 "y.tab.c" /* yacc.c:1661  */
    break;

  case 172:
#line 435 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2832 "y.tab.c" /* yacc.c:1661  */
    break;

  case 173:
#line 439 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2838 "y.tab.c" /* yacc.c:1661  */
    break;

  case 174:
#line 440 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2844 "y.tab.c" /* yacc.c:1661  */
    break;

  case 175:
#line 441 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2850 "y.tab.c" /* yacc.c:1661  */
    break;

  case 176:
#line 442 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2856 "y.tab.c" /* yacc.c:1661  */
    break;

  case 177:
#line 443 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2862 "y.tab.c" /* yacc.c:1661  */
    break;

  case 178:
#line 444 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2868 "y.tab.c" /* yacc.c:1661  */
    break;

  case 179:
#line 448 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2874 "y.tab.c" /* yacc.c:1661  */
    break;

  case 180:
#line 452 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2880 "y.tab.c" /* yacc.c:1661  */
    break;

  case 181:
#line 456 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2886 "y.tab.c" /* yacc.c:1661  */
    break;

  case 182:
#line 460 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2892 "y.tab.c" /* yacc.c:1661  */
    break;

  case 183:
#line 461 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2898 "y.tab.c" /* yacc.c:1661  */
    break;

  case 184:
#line 462 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2904 "y.tab.c" /* yacc.c:1661  */
    break;

  case 185:
#line 466 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2910 "y.tab.c" /* yacc.c:1661  */
    break;

  case 186:
#line 470 "lexer.y" /* yacc.c:1661  */
    {(yyval.attr)=(yyvsp[0].attr);	}
#line 2916 "y.tab.c" /* yacc.c:1661  */
    break;

  case 187:
#line 471 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2922 "y.tab.c" /* yacc.c:1661  */
    break;

  case 188:
#line 475 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2928 "y.tab.c" /* yacc.c:1661  */
    break;

  case 189:
#line 479 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2934 "y.tab.c" /* yacc.c:1661  */
    break;

  case 190:
#line 480 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2940 "y.tab.c" /* yacc.c:1661  */
    break;

  case 191:
#line 481 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2946 "y.tab.c" /* yacc.c:1661  */
    break;

  case 192:
#line 482 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2952 "y.tab.c" /* yacc.c:1661  */
    break;

  case 193:
#line 486 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2958 "y.tab.c" /* yacc.c:1661  */
    break;

  case 194:
#line 487 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2964 "y.tab.c" /* yacc.c:1661  */
    break;

  case 195:
#line 491 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2970 "y.tab.c" /* yacc.c:1661  */
    break;

  case 196:
#line 492 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2976 "y.tab.c" /* yacc.c:1661  */
    break;

  case 197:
#line 496 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2982 "y.tab.c" /* yacc.c:1661  */
    break;

  case 198:
#line 500 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2988 "y.tab.c" /* yacc.c:1661  */
    break;

  case 199:
#line 504 "lexer.y" /* yacc.c:1661  */
    {	}
#line 2994 "y.tab.c" /* yacc.c:1661  */
    break;

  case 200:
#line 505 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3000 "y.tab.c" /* yacc.c:1661  */
    break;

  case 201:
#line 509 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3006 "y.tab.c" /* yacc.c:1661  */
    break;

  case 202:
#line 510 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3012 "y.tab.c" /* yacc.c:1661  */
    break;

  case 203:
#line 511 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3018 "y.tab.c" /* yacc.c:1661  */
    break;

  case 204:
#line 512 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3024 "y.tab.c" /* yacc.c:1661  */
    break;

  case 205:
#line 513 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3030 "y.tab.c" /* yacc.c:1661  */
    break;

  case 206:
#line 514 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3036 "y.tab.c" /* yacc.c:1661  */
    break;

  case 207:
#line 518 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3042 "y.tab.c" /* yacc.c:1661  */
    break;

  case 208:
#line 519 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3048 "y.tab.c" /* yacc.c:1661  */
    break;

  case 209:
#line 520 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3054 "y.tab.c" /* yacc.c:1661  */
    break;

  case 210:
#line 521 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3060 "y.tab.c" /* yacc.c:1661  */
    break;

  case 211:
#line 522 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3066 "y.tab.c" /* yacc.c:1661  */
    break;

  case 212:
#line 523 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3072 "y.tab.c" /* yacc.c:1661  */
    break;

  case 213:
#line 536 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3078 "y.tab.c" /* yacc.c:1661  */
    break;

  case 214:
#line 540 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3084 "y.tab.c" /* yacc.c:1661  */
    break;

  case 215:
#line 544 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3090 "y.tab.c" /* yacc.c:1661  */
    break;

  case 216:
#line 545 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3096 "y.tab.c" /* yacc.c:1661  */
    break;

  case 217:
#line 546 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3102 "y.tab.c" /* yacc.c:1661  */
    break;

  case 218:
#line 550 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3108 "y.tab.c" /* yacc.c:1661  */
    break;

  case 219:
#line 551 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3114 "y.tab.c" /* yacc.c:1661  */
    break;

  case 220:
#line 555 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3120 "y.tab.c" /* yacc.c:1661  */
    break;

  case 221:
#line 556 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3126 "y.tab.c" /* yacc.c:1661  */
    break;

  case 222:
#line 557 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3132 "y.tab.c" /* yacc.c:1661  */
    break;

  case 223:
#line 561 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3138 "y.tab.c" /* yacc.c:1661  */
    break;

  case 224:
#line 562 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3144 "y.tab.c" /* yacc.c:1661  */
    break;

  case 225:
#line 563 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3150 "y.tab.c" /* yacc.c:1661  */
    break;

  case 226:
#line 567 "lexer.y" /* yacc.c:1661  */
    {	}
#line 3156 "y.tab.c" /* yacc.c:1661  */
    break;


#line 3160 "y.tab.c" /* yacc.c:1661  */
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
  return yyresult;
}
#line 571 "lexer.y" /* yacc.c:1906  */

void yyerror (char * s){
    	
}

int main(int argc, char **argv){
    FILE * fp;
    if (argc == 2 && (fp = fopen (argv[1], "r")))
        yyin = fp;
    else{
        printf("Unable to open file \n");
        return 1;
    }
    yyin = fopen(argv[1],"r");
    yyparse();
    fclose(yyin);
    return 0;
}
