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
#line 1 "../asgn5/src/lexer.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "tac.h"
#include "nodes.h"
int nl=0;

int a_flag=0;
int a_size;

TAC* func_code[100];
int func_count=0;

int b_flag=0;
char b_target[100];

int break_count=0;
char break_label[100][100];

int continue_count=0;
char continue_label[100][100];

int yylex(void);
void yyerror (char *);
FILE *yyin;
char t[100];
FILE * f;
char* outputfilename;

char r_start[100];
char r_end[100];

TAC *list;
int print_arg=1;
sym_table* global;

string print[100];

char forArray[10];
char forIndex[10];
char forIndexName[100];

#line 111 "../asgn5/src/y.tab.c" /* yacc.c:339  */

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
#ifndef YY_YY_ASGN5_SRC_Y_TAB_H_INCLUDED
# define YY_YY_ASGN5_SRC_Y_TAB_H_INCLUDED
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
    Key_elif = 288,
    Key_import = 289,
    Key_interface = 290,
    Key_map = 291,
    Key_package = 292,
    Key_range = 293,
    Key_return = 294,
    Key_select = 295,
    Key_struct = 296,
    Key_switch = 297,
    Key_type = 298,
    Key_var = 299,
    Key_class = 300,
    Key_private = 301,
    Key_protected = 302,
    Key_public = 303,
    Key_static = 304,
    Key_try = 305,
    Key_catch = 306,
    Key_finally = 307,
    Imaginary_lit = 308,
    Float_lit = 309,
    Int_lit = 310,
    String_lit = 311,
    Op_AddAssign = 312,
    Op_SubAssign = 313,
    Op_MultAssign = 314,
    Op_DivAssign = 315,
    Op_ModAssign = 316,
    Op_unary_or_assign = 317,
    Op_unary_and_assign = 318,
    Op_greater_greater = 319,
    Op_less_less = 320,
    Op_greater = 321,
    Op_less = 322,
    Op_greater_eq = 323,
    Op_less_eq = 324,
    Op_not_equal = 325,
    Op_equality = 326,
    Op_assign = 327,
    Op_unary_add = 328,
    Op_unary_sub = 329,
    Op_sub = 330,
    Op_mult = 331,
    Op_divide = 332,
    Op_mod = 333,
    Op_pow = 334,
    Op_relational_and = 335,
    Op_relational_or = 336,
    Op_unary_and = 337,
    Op_unary_or = 338,
    Op_unary_not = 339,
    M_question = 340,
    M_semicolon = 341,
    M_colon = 342,
    M_comma = 343,
    M_lcurly = 344,
    M_rcurly = 345,
    M_lparan = 346,
    M_rparan = 347,
    M_lsqbracket = 348,
    M_rsqbracket = 349,
    M_dot = 350,
    M_doublequotes = 351,
    M_singlequotes = 352,
    M_underscore = 353,
    Bool_true = 354,
    Bool_false = 355
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
#define Key_elif 288
#define Key_import 289
#define Key_interface 290
#define Key_map 291
#define Key_package 292
#define Key_range 293
#define Key_return 294
#define Key_select 295
#define Key_struct 296
#define Key_switch 297
#define Key_type 298
#define Key_var 299
#define Key_class 300
#define Key_private 301
#define Key_protected 302
#define Key_public 303
#define Key_static 304
#define Key_try 305
#define Key_catch 306
#define Key_finally 307
#define Imaginary_lit 308
#define Float_lit 309
#define Int_lit 310
#define String_lit 311
#define Op_AddAssign 312
#define Op_SubAssign 313
#define Op_MultAssign 314
#define Op_DivAssign 315
#define Op_ModAssign 316
#define Op_unary_or_assign 317
#define Op_unary_and_assign 318
#define Op_greater_greater 319
#define Op_less_less 320
#define Op_greater 321
#define Op_less 322
#define Op_greater_eq 323
#define Op_less_eq 324
#define Op_not_equal 325
#define Op_equality 326
#define Op_assign 327
#define Op_unary_add 328
#define Op_unary_sub 329
#define Op_sub 330
#define Op_mult 331
#define Op_divide 332
#define Op_mod 333
#define Op_pow 334
#define Op_relational_and 335
#define Op_relational_or 336
#define Op_unary_and 337
#define Op_unary_or 338
#define Op_unary_not 339
#define M_question 340
#define M_semicolon 341
#define M_colon 342
#define M_comma 343
#define M_lcurly 344
#define M_rcurly 345
#define M_lparan 346
#define M_rparan 347
#define M_lsqbracket 348
#define M_rsqbracket 349
#define M_dot 350
#define M_doublequotes 351
#define M_singlequotes 352
#define M_underscore 353
#define Bool_true 354
#define Bool_false 355

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 46 "../asgn5/src/lexer.y" /* yacc.c:355  */

    int ival;
    char *sval;
    Attr* attr;
    Codn* codn;
    Elif* elif;
    VarAttr* varattr;

#line 360 "../asgn5/src/y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ASGN5_SRC_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 377 "../asgn5/src/y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1104

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  101
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  219
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  348

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   355

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    72,    72,    77,    80,    84,    88,    91,    95,    96,
     100,   101,   102,   103,   104,   105,   107,   108,   111,   115,
     116,   118,   119,   120,   123,   129,   133,   134,   140,   151,
     152,   153,   154,   155,   156,   157,   165,   223,   270,   320,
     324,   325,   326,   327,   331,   332,   337,   337,   345,   346,
     350,   351,   355,   356,   357,   361,   362,   366,   370,   371,
     375,   376,   384,   388,   392,   393,   397,   401,   403,   404,
     405,   406,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   429,   430,
     431,   435,   436,   437,   441,   445,   446,   447,   448,   449,
     450,   454,   458,   459,   463,   464,   468,   469,   473,   474,
     478,   479,   480,   484,   488,   489,   493,   494,   498,   499,
     520,   549,   587,   588,   617,   665,   669,   670,   674,   675,
     679,   680,   684,   685,   686,   687,   692,   694,   704,   705,
     706,   707,   708,   709,   713,   714,   715,   716,   717,   718,
     723,   724,   728,   729,   730,   731,   732,   733,   737,   740,
     744,   745,   746,   750,   754,   758,   759,   760,   761,   762,
     763,   767,   771,   775,   779,   780,   781,   785,   789,   790,
     794,   797,   801,   802,   803,   804,   808,   809,   813,   814,
     818,   822,   826,   827,   831,   832,   833,   834,   835,   836,
     840,   841,   842,   843,   844,   845,   858,   862,   866,   867,
     868,   872,   873,   877,   878,   879,   883,   884,   885,   889
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
  "Key_if", "Key_elif", "Key_import", "Key_interface", "Key_map",
  "Key_package", "Key_range", "Key_return", "Key_select", "Key_struct",
  "Key_switch", "Key_type", "Key_var", "Key_class", "Key_private",
  "Key_protected", "Key_public", "Key_static", "Key_try", "Key_catch",
  "Key_finally", "Imaginary_lit", "Float_lit", "Int_lit", "String_lit",
  "Op_AddAssign", "Op_SubAssign", "Op_MultAssign", "Op_DivAssign",
  "Op_ModAssign", "Op_unary_or_assign", "Op_unary_and_assign",
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
  "VarDecl", "VarSpec", "Declaration", "FunctionDecl", "$@1", "Signature",
  "Result", "Parameters", "ParameterList", "ParameterDecl", "TypeList",
  "IdentifierList", "MethodDecl", "Receiver", "TopLevelDeclList",
  "CompositeLit", "LiteralType", "VarType", "Type", "Operand",
  "OperandName", "LiteralValue", "SliceType", "ElementList",
  "KeyedElement", "Key", "Element", "TopLevelDecl", "LabeledStmt",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "if_stmt", "elif_test_suite",
  "ForStmt", "Expression", "Expression1", "Expression2", "Expression3",
  "Expression4", "Expression5", "REL_OP", "MUL_OP", "UnaryExpr",
  "PrimaryExpr", "PrimaryExpr2", "StructLiteral", "KeyValList", "Selector",
  "Index", "Slice", "TypeDecl", "TypeSpec", "TypeAssertion", "Arguments",
  "DOTS", "ExpressionList", "ArrayList", "MapType", "StructType",
  "FieldDeclList", "FieldDecl", "PointerType", "ArrayType", "Literal",
  "BasicLit", "UnaryOp", "String", "PackageClause", "ImportDeclList",
  "ImportDecl", "ImportSpecList", "ImportSpec", "ImportPath", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355
};
# endif

#define YYPACT_NINF -286

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-286)))

#define YYTABLE_NINF -108

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    86,    25,    31,  -286,  -286,    84,    16,     2,    45,
      76,  -286,     7,    76,  -286,  -286,  -286,     6,   135,   144,
    -286,  -286,  -286,  -286,    44,    70,  -286,    78,  -286,  -286,
       8,    83,  -286,  -286,    12,  -286,   169,  1011,  -286,  -286,
    -286,   890,    89,  -286,  -286,  -286,    90,  -286,  -286,  -286,
      53,  -286,   924,    91,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,    87,   -48,  1011,   -55,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
     182,   532,   798,   220,  -286,  -286,  -286,    91,    17,  -286,
    -286,  -286,   977,  1011,    18,    20,  -286,  1011,    92,    94,
    -286,  -286,  -286,  -286,  -286,  -286,  1011,  -286,  -286,  -286,
     798,  -286,  -286,  -286,    -8,  -286,   100,    98,   112,   114,
     285,     9,   -34,  -286,     0,  -286,  -286,   305,  -286,  -286,
     108,   798,   109,  -286,  -286,  1011,  -286,  -286,   106,  -286,
     924,    23,   120,  -286,    24,  -286,   117,   305,   121,   336,
     378,  -286,   798,  -286,  1011,   798,   798,  -286,  -286,  -286,
    -286,  -286,  -286,   798,   798,   798,   798,  -286,  -286,  -286,
    -286,  -286,  -286,   305,   630,   672,    14,  -286,  -286,  -286,
    -286,     0,   798,   108,  -286,  -286,    59,  -286,  1011,    76,
    -286,   128,  -286,  -286,  -286,  -286,  -286,  -286,  -286,   129,
     -39,  -286,   130,  -286,   131,  -286,   -29,   134,   136,  -286,
     114,   285,     9,   -34,   -34,   -34,     0,  -286,   -12,   714,
     140,  -286,  1011,  -286,   294,  -286,  1011,  -286,  -286,  -286,
    -286,   434,  -286,   588,   476,  -286,   798,  -286,  -286,   137,
    -286,    39,   756,   138,   141,   228,   229,  -286,   798,   798,
    -286,   232,   148,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,    -7,    51,  -286,   234,
     163,  -286,  -286,  -286,  -286,  -286,  -286,  -286,   149,  -286,
     798,  -286,  -286,    40,  -286,   294,  -286,  -286,   798,  -286,
     108,   150,   153,  -286,  -286,  -286,   672,  -286,   798,   798,
     798,   798,   154,   798,  -286,  -286,   156,   109,  -286,  -286,
      43,   108,  -286,   108,   108,  -286,  -286,   157,  -286,  -286,
    -286,  -286,   798,    27,   158,  -286,  -286,   798,   798,   109,
    -286,   109,  -286,   109,  -286,  -286,  -286,  -286
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   207,     1,   208,     0,     0,     0,
       0,   206,   213,     0,   219,   212,   218,     0,     0,     0,
      45,   110,   111,   112,     2,     0,    44,     0,   210,   216,
       0,     0,   217,    46,     0,    63,     0,     0,   171,    60,
      39,     0,     0,    65,   209,   211,     0,   215,     4,    52,
       0,    55,     0,     0,    75,    94,    78,    77,    76,    73,
      72,    74,    79,    80,    81,    82,    83,    84,    85,    86,
      87,     0,     0,     0,     0,    88,    90,   172,    89,    70,
      71,    67,    68,    29,    30,    33,    34,    35,    31,    32,
       0,     0,     0,    40,    41,    64,   214,     0,     0,    53,
      57,    62,    48,     0,     0,     0,   190,     0,     0,     0,
      61,   200,   199,   195,   194,   201,   204,   203,   205,   202,
       0,   197,   198,   193,     0,   152,    92,     0,   125,   127,
     129,   131,   135,   137,   150,    91,   192,     0,   196,   178,
      43,     0,     0,    54,    56,     0,    49,    51,     0,   185,
       0,     0,     0,   184,     0,   101,     0,     0,     0,     0,
       0,    66,   160,   157,     0,     0,     0,   141,   140,   142,
     143,   139,   138,     0,     0,     0,     0,   148,   147,   144,
     145,   146,   149,     0,     0,     0,     0,   153,   154,   155,
     156,   151,     0,    42,     4,     5,     0,    59,     0,   189,
     183,     0,   186,   182,   177,    69,    92,    93,    96,   109,
       0,   102,     0,   104,   108,    95,     0,     0,     0,   191,
     126,   128,   130,   133,   134,   132,   136,   174,     0,     0,
       0,   163,     0,   179,    24,    47,     0,    50,   181,   188,
     187,     0,    98,     0,     0,    97,     0,   159,   175,     0,
     165,     0,     0,     0,    94,   116,   118,     4,     0,   114,
      16,     5,     0,    12,    19,    20,    21,    22,    23,    10,
      11,    13,    14,    15,    17,    18,   178,   150,   180,     0,
       0,    58,   100,   103,   109,   105,   108,    99,   161,   176,
       0,   166,   167,     0,   173,    24,   117,   119,    24,     4,
     115,     0,     0,     9,    26,    27,     0,   158,     0,     0,
       0,   160,     0,     0,   168,   113,     0,     0,     3,     8,
       0,    36,    38,    28,    37,   162,   169,     0,     6,   122,
     164,   170,     0,   120,     0,    25,     5,     0,    24,     0,
       4,     0,   121,     0,     7,   123,     5,   124
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -286,  -286,  -138,  -180,  -224,  -286,  -286,  -286,  -238,  -285,
    -286,   -89,  -286,  -286,   -88,  -286,  -286,  -286,    11,  -286,
    -286,   159,  -286,   233,  -286,   161,  -286,    -2,  -286,  -286,
    -286,  -286,    13,  -286,    21,    95,    33,  -122,  -286,   101,
     -87,  -286,    29,   230,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,   -91,  -286,   102,    97,    93,    34,  -286,  -286,  -286,
    -136,  -286,  -286,   -51,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,    42,   -85,   -24,  -286,  -286,   184,    30,  -286,  -286,
    -286,  -286,  -286,    -4,  -286,  -286,   266,  -286,    22,   155
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   260,    97,   235,   332,   346,   261,   262,   263,
     264,   265,   266,   267,    92,   268,    20,    40,   269,    22,
      48,   101,   146,   102,    50,    51,   196,   150,    23,    36,
      24,   123,   124,    76,   106,   125,   126,   209,    79,   210,
     211,   212,   213,    25,   270,   271,   272,   273,   274,   333,
     275,   139,   128,   129,   130,   131,   132,   173,   183,   133,
     134,   278,   163,   218,   187,   307,   188,    26,    38,   189,
     190,   109,   279,   280,    80,    81,   151,   152,    82,    94,
     135,   136,   137,   138,     3,     8,     9,    30,    15,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     127,   191,   161,    14,   195,   141,    14,   140,    14,    14,
      33,    10,    10,   316,   234,   174,    39,    41,   231,    21,
      10,    39,    39,   302,    39,     5,    14,    39,    39,   158,
     177,   178,    52,    17,    31,    21,     7,   301,   104,   107,
     108,   105,   179,   180,   181,    18,    19,   226,   182,   241,
      75,   242,    46,   341,    75,   336,   193,   315,    77,   244,
     337,   245,    93,    11,    11,    75,   304,   305,   214,   214,
      78,   217,    11,   100,    78,    17,   192,   298,   159,   -25,
     248,   160,   -25,   108,   175,    78,    75,    18,    19,     1,
       4,   184,   176,   185,   230,   186,    52,    34,   277,   228,
      45,   233,    13,    13,    49,   232,    78,    12,   149,   143,
     153,    13,   339,   200,   203,    75,    75,     6,     7,   317,
      75,   284,   347,   147,   148,   277,   290,   313,   155,    75,
     252,    28,    11,   291,   314,    78,    78,   330,   251,    37,
      78,    98,   184,   276,   306,    99,   186,   236,    39,    78,
     214,   237,   286,   214,   283,   288,    43,   283,    75,   277,
     343,   293,   277,    75,    44,    29,   197,   299,    32,    47,
     276,   199,   277,    53,   300,    95,    96,    75,    78,   329,
     103,   201,    34,    78,   201,   219,   110,   156,   157,   162,
     206,   309,   164,   165,   166,   239,   192,    78,   194,   312,
     198,   342,   277,   344,   276,   345,   202,   276,   223,   224,
     225,    75,   204,   207,   240,   320,  -107,   243,  -106,   238,
     217,   246,   327,   321,   323,   324,   247,   252,   295,   289,
     294,    78,   296,   297,   303,   310,   254,   311,   111,   319,
     318,   335,   328,   334,   338,    75,   340,   276,   326,    75,
      35,   331,   205,   253,    42,   255,   142,   281,   256,   144,
     325,   216,   257,   221,   258,    78,   222,   220,    71,    78,
     249,   259,   285,    72,    27,    18,    19,    83,    84,    85,
      86,    87,    88,    89,   322,   112,   113,   114,    11,   154,
       0,    83,    84,    85,    86,    87,    88,    89,   254,     0,
     111,     0,     0,     0,     0,     0,   308,   115,   116,    55,
       0,   117,     0,     0,   118,     0,   119,   255,   -24,     0,
     256,   194,   192,   120,   257,    74,   258,     0,     0,     0,
      71,   121,   122,   259,     0,    72,     0,    18,    19,     0,
      55,    71,   111,     0,     0,     0,    72,   112,   113,   114,
      11,   167,   168,   169,   170,   171,   172,     0,   112,   113,
     114,    11,     0,     0,     0,     0,     0,     0,     0,   115,
     116,     0,    71,   117,     0,     0,   118,    72,   119,     0,
       0,    73,    55,   194,   111,   120,     0,    74,     0,   112,
     113,   114,    11,   121,   122,     0,   120,     0,    74,     0,
       0,     0,     0,     0,   121,   122,     0,     0,     0,     0,
       0,   115,   116,     0,    71,   117,     0,     0,   118,    72,
     119,     0,   159,     0,     0,   160,   208,   120,     0,    74,
       0,   112,   113,   114,    11,   121,   122,     0,    55,     0,
     111,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,     0,     0,   117,     0,     0,
     118,     0,   119,     0,   159,     0,     0,   160,   215,   120,
      71,    74,     0,     0,     0,    72,     0,   121,   122,     0,
      55,     0,   111,     0,     0,     0,     0,   112,   113,   114,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
     116,     0,    71,   117,     0,     0,   118,    72,   119,     0,
     159,     0,     0,   160,   282,   120,     0,    74,     0,   112,
     113,   114,    11,   121,   122,     0,    55,     0,   111,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,   116,     0,     0,   117,     0,     0,   118,     0,
     119,     0,   159,     0,     0,   160,   287,   120,    71,    74,
       0,     0,     0,    72,     0,   121,   122,     0,     0,     0,
       0,     0,     0,     0,     0,   112,   113,   114,    11,     0,
       0,     0,    55,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   116,     0,
       0,   117,     0,     0,   118,     0,   119,     0,     0,     0,
       0,     0,     0,   120,    71,    74,   107,   108,     0,    72,
       0,   121,   122,     0,    55,     0,   111,     0,     0,     0,
       0,   112,   113,   114,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,     0,    71,   117,     0,     0,
     118,    72,   119,     0,   159,     0,    55,   160,   111,   120,
       0,    74,     0,   112,   113,   114,    11,   121,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   115,   116,     0,    71,   117,
       0,     0,   118,    72,   119,     0,     0,     0,    55,     0,
     111,   120,   227,    74,     0,   112,   113,   114,    11,   121,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,   116,     0,
      71,   117,     0,     0,   118,    72,   119,     0,     0,   229,
      55,     0,   111,   120,     0,    74,     0,   112,   113,   114,
      11,   121,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
     116,     0,    71,   117,     0,     0,   118,    72,   119,     0,
       0,     0,    55,     0,   111,   120,     0,    74,   250,   112,
     113,   114,    11,   121,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,   116,     0,    71,   117,     0,     0,   118,    72,
     119,     0,     0,     0,     0,     0,     0,   120,     0,    74,
     292,   112,   113,   114,    11,   121,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,   116,     0,     0,   117,     0,     0,
     118,     0,   119,     0,     0,     0,     0,     0,     0,   120,
       0,    74,     0,    54,    55,    56,     0,   121,   122,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    54,    55,    56,
       0,    72,     0,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    83,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,    72,    73,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
      54,    55,    56,    91,     0,     0,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    71,    54,    55,    56,    74,    72,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    72,    73,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
      74,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74
};

static const yytype_int16 yycheck[] =
{
      91,   137,   124,     7,   142,    93,    10,    92,    12,    13,
       4,     4,     4,   298,   194,     6,     4,    19,     4,     8,
       4,     4,     4,   261,     4,     0,    30,     4,     4,   120,
      64,    65,    34,    31,    12,    24,    34,   261,    86,    94,
      95,    89,    76,    77,    78,    43,    44,   183,    82,    88,
      37,    90,    30,   338,    41,    28,   141,   295,    37,    88,
      33,    90,    41,    56,    56,    52,    73,    74,   159,   160,
      37,   162,    56,    52,    41,    31,    88,   257,    86,    86,
      92,    89,    89,    95,    75,    52,    73,    43,    44,    37,
       4,    91,    83,    93,   185,    95,    98,    91,   234,   184,
      92,   192,    95,    95,    92,    91,    73,    91,    90,    92,
      90,    95,   336,    90,    90,   102,   103,    86,    34,   299,
     107,   243,   346,   102,   103,   261,    87,    87,   107,   116,
      87,    86,    56,    94,    94,   102,   103,    94,   229,     4,
     107,    88,    91,   234,    93,    92,    95,    88,     4,   116,
     241,    92,   243,   244,   241,   246,    86,   244,   145,   295,
     340,   252,   298,   150,    86,    10,   145,   258,    13,    86,
     261,   150,   308,     4,   259,    86,    86,   164,   145,   317,
      93,   151,    91,   150,   154,   164,     4,    95,    94,    89,
     157,   279,    94,    81,    80,   199,    88,   164,    89,   290,
      94,   339,   338,   341,   295,   343,    86,   298,   174,   175,
     176,   198,    95,    92,    86,   306,    87,    87,    87,   198,
     311,    87,   313,   308,   309,   310,    90,    87,    87,    92,
      92,   198,     4,     4,    86,    72,     4,    88,     6,    86,
      90,   332,    86,   332,    86,   232,   337,   338,    94,   236,
      17,    94,   157,   232,    24,    23,    97,   236,    26,    98,
     311,   160,    30,   166,    32,   232,   173,   165,    36,   236,
     228,    39,   243,    41,     8,    43,    44,    57,    58,    59,
      60,    61,    62,    63,   308,    53,    54,    55,    56,   105,
      -1,    57,    58,    59,    60,    61,    62,    63,     4,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    72,    75,    76,     4,
      -1,    79,    -1,    -1,    82,    -1,    84,    23,    86,    -1,
      26,    89,    88,    91,    30,    93,    32,    -1,    -1,    -1,
      36,    99,   100,    39,    -1,    41,    -1,    43,    44,    -1,
       4,    36,     6,    -1,    -1,    -1,    41,    53,    54,    55,
      56,    66,    67,    68,    69,    70,    71,    -1,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    36,    79,    -1,    -1,    82,    41,    84,    -1,
      -1,    76,     4,    89,     6,    91,    -1,    93,    -1,    53,
      54,    55,    56,    99,   100,    -1,    91,    -1,    93,    -1,
      -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    36,    79,    -1,    -1,    82,    41,
      84,    -1,    86,    -1,    -1,    89,    90,    91,    -1,    93,
      -1,    53,    54,    55,    56,    99,   100,    -1,     4,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    79,    -1,    -1,
      82,    -1,    84,    -1,    86,    -1,    -1,    89,    90,    91,
      36,    93,    -1,    -1,    -1,    41,    -1,    99,   100,    -1,
       4,    -1,     6,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    36,    79,    -1,    -1,    82,    41,    84,    -1,
      86,    -1,    -1,    89,    90,    91,    -1,    93,    -1,    53,
      54,    55,    56,    99,   100,    -1,     4,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    79,    -1,    -1,    82,    -1,
      84,    -1,    86,    -1,    -1,    89,    90,    91,    36,    93,
      -1,    -1,    -1,    41,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      -1,    79,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    36,    93,    94,    95,    -1,    41,
      -1,    99,   100,    -1,     4,    -1,     6,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    36,    79,    -1,    -1,
      82,    41,    84,    -1,    86,    -1,     4,    89,     6,    91,
      -1,    93,    -1,    53,    54,    55,    56,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    36,    79,
      -1,    -1,    82,    41,    84,    -1,    -1,    -1,     4,    -1,
       6,    91,    92,    93,    -1,    53,    54,    55,    56,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,
      36,    79,    -1,    -1,    82,    41,    84,    -1,    -1,    87,
       4,    -1,     6,    91,    -1,    93,    -1,    53,    54,    55,
      56,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    36,    79,    -1,    -1,    82,    41,    84,    -1,
      -1,    -1,     4,    -1,     6,    91,    -1,    93,    94,    53,
      54,    55,    56,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    36,    79,    -1,    -1,    82,    41,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    93,
      94,    53,    54,    55,    56,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    76,    -1,    -1,    79,    -1,    -1,
      82,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    93,    -1,     3,     4,     5,    -1,    99,   100,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,     3,     4,     5,
      -1,    41,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    41,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
       3,     4,     5,    93,    -1,    -1,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    36,     3,     4,     5,    93,    41,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    41,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    37,   102,   185,     4,     0,    86,    34,   186,   187,
       4,    56,    91,    95,   184,   189,   190,    31,    43,    44,
     117,   119,   120,   129,   131,   144,   168,   187,    86,   190,
     188,   189,   190,     4,    91,   124,   130,     4,   169,     4,
     118,   128,   144,    86,    86,    92,   189,    86,   121,    92,
     125,   126,   128,     4,     3,     4,     5,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    36,    41,    76,    93,   133,   134,   135,   137,   139,
     175,   176,   179,    57,    58,    59,    60,    61,    62,    63,
      88,    93,   115,   135,   180,    86,    86,   104,    88,    92,
     135,   122,   124,    93,    86,    89,   135,    94,    95,   172,
       4,     6,    53,    54,    55,    75,    76,    79,    82,    84,
      91,    99,   100,   132,   133,   136,   137,   152,   153,   154,
     155,   156,   157,   160,   161,   181,   182,   183,   184,   152,
     173,   115,   122,    92,   126,    91,   123,   135,   135,    90,
     128,   177,   178,    90,   177,   135,    95,    94,   152,    86,
      89,   138,    89,   163,    94,    81,    80,    66,    67,    68,
      69,    70,    71,   158,     6,    75,    83,    64,    65,    76,
      77,    78,    82,   159,    91,    93,    95,   165,   167,   170,
     171,   161,    88,   173,    89,   103,   127,   135,    94,   135,
      90,   178,    86,    90,    95,   136,   137,    92,    90,   138,
     140,   141,   142,   143,   152,    90,   140,   152,   164,   135,
     154,   155,   156,   157,   157,   157,   161,    92,   173,    87,
     152,     4,    91,   152,   104,   105,    88,    92,   135,   184,
      86,    88,    90,    87,    88,    90,    87,    90,    92,   172,
      94,   152,    87,   135,     4,    23,    26,    30,    32,    39,
     103,   108,   109,   110,   111,   112,   113,   114,   116,   119,
     145,   146,   147,   148,   149,   151,   152,   161,   162,   173,
     174,   135,    90,   141,   138,   143,   152,    90,   152,    92,
      87,    94,    94,   152,    92,    87,     4,     4,   104,   152,
     173,   105,   109,    86,    73,    74,    93,   166,    72,   115,
      72,    88,   152,    87,    94,   109,   110,   104,    90,    86,
     152,   173,   174,   173,   173,   164,    94,   152,    86,   103,
      94,    94,   106,   150,   112,   152,    28,    33,    86,   105,
     152,   110,   103,   104,   103,   103,   107,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   101,   102,   103,   104,   105,   106,   107,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   110,
     110,   110,   110,   110,   111,   112,   113,   113,   114,   115,
     115,   115,   115,   115,   115,   115,   116,   116,   116,   117,
     118,   118,   118,   118,   119,   119,   121,   120,   122,   122,
     123,   123,   124,   124,   124,   125,   125,   126,   127,   127,
     128,   128,   129,   130,   131,   131,   132,   133,   133,   133,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   136,   136,   136,   137,   138,   138,   138,   138,   138,
     138,   139,   140,   140,   141,   141,   142,   142,   143,   143,
     144,   144,   144,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   151,   152,   153,   153,   154,   154,
     155,   155,   156,   156,   156,   156,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     160,   160,   161,   161,   161,   161,   161,   161,   162,   163,
     164,   164,   164,   165,   166,   167,   167,   167,   167,   167,
     167,   168,   169,   170,   171,   171,   171,   172,   173,   173,
     174,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     179,   180,   181,   181,   182,   182,   182,   182,   182,   182,
     183,   183,   183,   183,   183,   183,   184,   185,   186,   186,
     186,   187,   187,   188,   188,   188,   189,   189,   189,   190
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     0,     0,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     2,
       2,     2,     4,     3,     1,     1,     0,     7,     1,     2,
       3,     1,     2,     3,     4,     1,     3,     2,     3,     1,
       1,     3,     4,     1,     3,     2,     2,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     2,     3,     3,     4,
       4,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     1,     2,     1,     2,
       5,     8,     0,     5,    11,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     2,     2,     2,     2,     2,     3,
       0,     3,     5,     2,     3,     3,     4,     4,     5,     6,
       7,     2,     2,     4,     2,     3,     4,     3,     1,     3,
       1,     5,     4,     4,     3,     3,     2,     3,     3,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       2,     4,     2,     0,     3,     2,     2,     2,     1,     1
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
#line 72 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {for(int i=0;i<func_count;i++){
        printcode(func_code[i]);
        }}
#line 1902 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 77 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[-2].varattr)->code;}
#line 1908 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 80 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));}
#line 1914 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 84 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));}
#line 1920 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 88 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));   }
#line 1926 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 91 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));   }
#line 1932 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 95 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[-1].varattr)->code);}
#line 1938 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 96 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[-1].varattr)->code;}
#line 1944 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 100 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 1950 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 101 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 1956 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 102 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 1962 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 103 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 1968 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 104 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 1974 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 105 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 1980 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 107 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 1986 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 108 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].elif)->code;}
#line 1992 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 111 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].codn)->code;}
#line 1998 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 115 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code; }
#line 2004 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 116 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2010 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 118 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2016 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 119 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2022 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 120 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2028 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 123 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));}
#line 2034 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 129 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);}
#line 2040 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 133 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"+,%s,%s,1",(yyvsp[-1].varattr)->place,(yyvsp[-1].varattr)->place);(yyval.varattr)->code=append((yyvsp[-1].varattr)->code,gen(t));}
#line 2046 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 134 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"-,%s,%s,1",(yyvsp[-1].varattr)->place,(yyvsp[-1].varattr)->place);(yyval.varattr)->code=append((yyvsp[-1].varattr)->code,gen(t));}
#line 2052 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 140 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"%s,%s,%s,%s",(yyvsp[-1].varattr)->place,(yyvsp[-2].varattr)->place,(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2058 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 151 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,"+");}
#line 2064 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 152 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,"-");}
#line 2070 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 153 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,"|");}
#line 2076 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 154 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,"&");}
#line 2082 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 155 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,"*");}
#line 2088 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 156 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,"/");}
#line 2094 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 157 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,"%");}
#line 2100 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 165 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {
        //printf("DEBUG_NEW: $3->type=%s $3->type1=%s\n",$3->type,$3->type1);
        //printf("DEBUG_NEW: $1->type=%s\n",$1->type);
        symtable_ent *first=malloc(sizeof(struct symtable_entry));
        symtable_ent *second=malloc(sizeof(struct symtable_entry));
            if(!strcmp((yyvsp[0].varattr)->type,"identifier")&&(second=lookup(top(),(yyvsp[0].varattr)->place))){
                printf("here\n");
                if(!strcmp((yyvsp[-2].varattr)->type,"identifier")&&(first=lookup(top(),(yyvsp[-2].varattr)->place))){
                    if(!strcmp(first->type,second->type)){
                        //printf("SUCCESS: Both Identifiers are defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,%s",(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else{
                        printf("ERROR: Type not defined OR does not match.1\n");
                    }
                }
                else{printf("ERROR: Type not defined OR does not match.2\n");}
            }
            else if(!strcmp((yyvsp[0].varattr)->type,"lit")){
               // printf("DEBUG_NEW $1->place=%s\n",$1->place);
                if(!strcmp((yyvsp[-2].varattr)->type,"identifier")&&(first=lookup(top(),(yyvsp[-2].varattr)->place))){
                 //   printf("DEBUG_NEW: first->name=%s first->type=%s\n",first->name,first->type);
                    if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&strcmp((yyvsp[0].varattr)->type1,"bool")){
                   //     printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,%s",(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&!strcmp((yyvsp[0].varattr)->type1,"bool")&&!strcmp((yyvsp[0].varattr)->type2,"true")){
                     //   printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,1",(yyvsp[-2].varattr)->place);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&!strcmp((yyvsp[0].varattr)->type1,"bool")&&!strcmp((yyvsp[0].varattr)->type2,"false")){
                       // printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,0",(yyvsp[-2].varattr)->place);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else{
                        printf("ERROR: Type not defined OR does not match.3\n");
                    }
                }
                else{
                    printf("ERROR: Type not defined OR does not match.4\n");
                }
            }
            else{
                printf("ERROR: Type not defined OR does not match.5\n");
            }
        }
#line 2163 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 223 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {
        //printf("DEBUG_NEW: $3->type=%s $3->type1=%s\n",$3->type,$3->type1);
        //printf("DEBUG_NEW: $1->type=%s\n",$1->type);
        symtable_ent *first=malloc(sizeof(struct symtable_entry));
        symtable_ent *second=malloc(sizeof(struct symtable_entry));
            if(!strcmp((yyvsp[0].varattr)->type,"identifier")&&(second=lookup(top(),(yyvsp[0].varattr)->place))){
                if(!strcmp((yyvsp[-2].varattr)->type,"identifier")&&(first=lookup(top(),(yyvsp[-2].varattr)->place))){
                    if(!strcmp(first->type,second->type)){
          //              printf("SUCCESS: Both Identifiers are defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,%s,%s",(yyvsp[-2].varattr)->place,(yyvsp[-2].varattr)->place2,(yyvsp[0].varattr)->place);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                }
            }
            else if(!strcmp((yyvsp[0].varattr)->type,"lit")){
            //    printf("DEBUG_NEW $1->place=%s\n",$1->place);
                if(!strcmp((yyvsp[-2].varattr)->type,"identifier")&&(first=lookup(top(),(yyvsp[-2].varattr)->place))){
              //      printf("DEBUG_NEW: first->name=%s first->type=%s\n",first->name,first->type);
                    if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&strcmp((yyvsp[0].varattr)->type1,"bool")){
                //        printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,%s,%s",(yyvsp[-2].varattr)->place,(yyvsp[-2].varattr)->place2,(yyvsp[0].varattr)->place);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&!strcmp((yyvsp[0].varattr)->type1,"bool")&&!strcmp((yyvsp[0].varattr)->type2,"true")){
                  //      printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,,%s,1",(yyvsp[-2].varattr)->place,(yyvsp[-2].varattr)->place2);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&!strcmp((yyvsp[0].varattr)->type1,"bool")&&!strcmp((yyvsp[0].varattr)->type2,"false")){
                    //    printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,%s,0",(yyvsp[-2].varattr)->place,(yyvsp[-2].varattr)->place2);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                }
            }
            else{
                printf("ERROR: Type not defined OR does not match.\n");
            }
        }
#line 2215 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 270 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {
       // printf("DEBUG_NEW: $3->type=%s $3->type1=%s\n",$3->type,$3->type1);
       // printf("DEBUG_NEW: $1->type=%s\n",$1->type);
        symtable_ent *first=malloc(sizeof(struct symtable_entry));
        symtable_ent *second=malloc(sizeof(struct symtable_entry));
            if(!strcmp((yyvsp[0].varattr)->type,"identifier")&&(second=lookup(top(),(yyvsp[0].varattr)->place))){
                if(!strcmp((yyvsp[-2].varattr)->type,"identifier")&&(first=lookup(top(),(yyvsp[-2].varattr)->place))){
                    if(!strcmp(first->type,second->type)){
                       // printf("SUCCESS: Both Identifiers are defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,%s,%s",(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place,(yyvsp[0].varattr)->place2);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                }
            }
            else if(!strcmp((yyvsp[0].varattr)->type,"lit")){
                //printf("DEBUG_NEW $1->place=%s\n",$1->place);
                if(!strcmp((yyvsp[-2].varattr)->type,"identifier")&&(first=lookup(top(),(yyvsp[-2].varattr)->place))){
                  //  printf("DEBUG_NEW: first->name=%s first->type=%s\n",first->name,first->type);
                    if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&strcmp((yyvsp[0].varattr)->type1,"bool")){
                    //    printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,%s,%s",(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place,(yyvsp[0].varattr)->place2);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&!strcmp((yyvsp[0].varattr)->type1,"bool")&&!strcmp((yyvsp[0].varattr)->type2,"true")){
                      //  printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,,%s,1",(yyvsp[0].varattr)->place,(yyvsp[0].varattr)->place2);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                    else if(!strcmp(first->type,(yyvsp[0].varattr)->type1)&&!strcmp((yyvsp[0].varattr)->type1,"bool")&&!strcmp((yyvsp[0].varattr)->type2,"false")){
                        //printf("SUCCESS: the Identifier is defined\n");
                        (yyval.varattr)=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,%s,0",(yyvsp[0].varattr)->place,(yyvsp[0].varattr)->place2);
                        (yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);
                        (yyval.varattr)->code=append((yyval.varattr)->code,gen(t));
                    }
                }
            }
            else{
                printf("ERROR: Type not defined OR does not match.\n");
            }
        }
#line 2267 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 320 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2273 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 324 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-1].varattr)->code,(yyvsp[0].varattr)->code);strcpy((yyval.varattr)->place,(yyvsp[-1].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);enter(top(),(yyvsp[-1].varattr)->place,(yyvsp[0].varattr)->type,1);}
#line 2279 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 325 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"array,%s,%s",(yyvsp[-1].varattr)->place,forArray);(yyval.varattr)->code=append((yyvsp[-1].varattr)->code,(yyvsp[0].varattr)->code);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));enter(top(),(yyvsp[-1].varattr)->place,(yyvsp[0].varattr)->type,1);}
#line 2285 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 326 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"=,%s,%s",(yyvsp[-3].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyvsp[-3].varattr)->code,(yyvsp[0].varattr)->code);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2291 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 327 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"=,%s,%s",(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2297 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 331 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2303 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 332 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);}
#line 2309 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 337 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {  sym_table* t;enterproc( top(),(yyvsp[0].sval),t );t=mktable(top()->tail);push(t);}
#line 2315 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 337 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(Attr));sprintf(t,"label,%s",(yyvsp[-5].sval)); pop();(yyval.varattr)->code=append(gen(t),(yyvsp[-1].varattr)->code);
    func_code[func_count++]=(yyval.varattr)->code;
    //enter(top()->tail->fn,"DEBUG: name_of_variable","DEBUG: its_type",1);printf("%s\n",top()->tail->fn->head->name);printf("\n\n");
    //printsymtable(global);
}
#line 2325 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 345 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2331 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 346 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2337 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 350 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2343 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 351 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2349 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 355 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2355 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 356 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2361 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 357 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2367 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 361 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2373 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 362 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2379 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 366 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2385 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 370 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2391 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 371 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2397 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 375 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"identifier");}
#line 2403 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 376 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2409 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 384 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2415 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 388 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2421 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 392 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2427 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 393 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2433 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 397 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-1].varattr)->code,(yyvsp[0].varattr)->code);}
#line 2439 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 401 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {}
#line 2445 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 403 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2451 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 404 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2457 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 405 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2463 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 406 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2469 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 410 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"int");}
#line 2475 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 411 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"int");}
#line 2481 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 412 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"int");}
#line 2487 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 413 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"int");}
#line 2493 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 414 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"int");}
#line 2499 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 415 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"bool");}
#line 2505 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 416 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"string");}
#line 2511 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 417 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"uint");}
#line 2517 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 418 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"uint");}
#line 2523 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 419 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"uint");}
#line 2529 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 420 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"uint");}
#line 2535 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 421 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"uintptr");}
#line 2541 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 422 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"float");}
#line 2547 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 423 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"float");}
#line 2553 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 424 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"complex");}
#line 2559 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 425 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,"complex");}
#line 2565 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 429 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2571 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 430 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2577 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 431 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);}
#line 2583 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 435 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2589 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 436 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2595 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 437 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2601 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 441 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"identifier");}
#line 2607 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 445 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2613 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 446 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2619 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 447 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2625 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 448 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2631 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 449 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2637 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 450 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2643 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 454 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2649 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 458 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2655 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 459 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2661 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 463 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2667 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 464 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2673 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 468 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2679 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 469 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2685 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 473 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2691 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 474 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2697 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 478 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);}
#line 2703 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 479 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2709 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 480 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;}
#line 2715 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 484 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2721 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 488 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"return");(yyval.varattr)->code=gen(t);}
#line 2727 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 489 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));sprintf(t,"return %s",(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyvsp[0].varattr)->code,gen(t));}
#line 2733 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 493 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {strcpy(break_label[break_count++],newlabel());sprintf(t,"goto,%s",break_label[break_count-1]);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2739 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 494 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2745 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 498 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2751 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 499 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 2757 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 521 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {
    (yyval.elif)=malloc(sizeof(Elif));
    strcpy((yyval.elif)->Else,newlabel());

        if((yyvsp[0].elif)->code!=NULL)
    strcpy((yyval.elif)->after,(yyvsp[0].elif)->after);
        else strcpy((yyval.elif)->after,(yyval.elif)->Else);

    sprintf(t,"ifgoto,==,%s,0,%s",(yyvsp[-3].varattr)->place,(yyval.elif)->Else);
    (yyval.elif)->code=append((yyvsp[-3].varattr)->code,gen(t));
    (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[-1].varattr)->code);

        if((yyvsp[0].elif)->code!=NULL)
    {
        sprintf(t,"goto,%s",(yyval.elif)->after);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));}

    sprintf(t,"label,%s",(yyval.elif)->Else);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));
    (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[0].elif)->code);
        if(strcmp((yyval.elif)->Else,(yyval.elif)->after)!=0 && strcmp((yyval.elif)->after,(yyvsp[0].elif)->after)!=0)
    {sprintf(t,"label,%s",(yyval.elif)->after);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));}
        if(strcmp((yyval.elif)->Else,(yyval.elif)->after)!=0)
    {sprintf(t,"label,%s",(yyvsp[0].elif)->after);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));}
    
}
#line 2790 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 549 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {
    (yyval.elif)=malloc(sizeof(Elif));
    strcpy((yyval.elif)->Else,newlabel());
 Elif* extra=malloc(sizeof(Elif));
        if((yyvsp[-3].elif)->code!=NULL)
    strcpy((yyval.elif)->after,(yyvsp[-3].elif)->after);
        else strcpy((yyval.elif)->after,(yyval.elif)->Else);

    sprintf(t,"ifgoto,==,%s,0,%s",(yyvsp[-6].varattr)->place,(yyval.elif)->Else);
    (yyval.elif)->code=append((yyvsp[-6].varattr)->code,gen(t));
    (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[-4].varattr)->code);
        if((yyvsp[-3].elif)->code==NULL){
       
        strcpy(extra->Else,newlabel());
         sprintf(t,"goto,%s",extra->Else);  
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));
}
        
        if((yyvsp[-3].elif)->code!=NULL)
    {
        sprintf(t,"goto,%s",(yyval.elif)->after);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));}
    sprintf(t,"label,%s",(yyval.elif)->Else);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));
    (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[-3].elif)->code);
        (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[0].varattr)->code);
        if((yyvsp[-3].elif)->code==NULL)
{sprintf(t,"label,%s",extra->Else);(yyval.elif)->code=append((yyval.elif)->code,gen(t));}
        if(strcmp((yyval.elif)->Else,(yyval.elif)->after)!=0 && strcmp((yyval.elif)->after,(yyvsp[-3].elif)->after)!=0)
    {sprintf(t,"label,%s",(yyval.elif)->after);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));}
        if(strcmp((yyval.elif)->Else,(yyval.elif)->after)!=0)
    {sprintf(t,"label,%s",(yyvsp[-3].elif)->after);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));}
    
}
#line 2831 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 587 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.elif)=malloc(sizeof(Elif));}
#line 2837 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 589 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {
    (yyval.elif)=malloc(sizeof(Elif));
        if((yyvsp[-4].elif)->code==NULL)
            if(b_flag==0)strcpy((yyval.elif)->after,newlabel()); else {b_flag=0;strcpy((yyval.elif)->after,b_target);}
        else
            strcpy((yyval.elif)->after,(yyvsp[-4].elif)->after);
    strcpy((yyval.elif)->Else,newlabel());
    (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[-4].elif)->code);
        (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[-2].varattr)->code);
    sprintf(t,"ifgoto,==,%s,0,%s",(yyvsp[-2].varattr)->place,(yyval.elif)->Else);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));
    (yyval.elif)->code=append((yyval.elif)->code,(yyvsp[0].varattr)->code);
         sprintf(t,"goto,%s",(yyval.elif)->after);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));
         sprintf(t,"label,%s",(yyval.elif)->Else);
    (yyval.elif)->code=append((yyval.elif)->code,gen(t));
}
#line 2859 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 617 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {
        //printf("DEBUG: I am here\n");
        (yyval.codn)=malloc(sizeof(Codn));
        strcpy((yyval.codn)->begin,newlabel());
        if(strcmp(break_label[break_count-1],"")!=0)
        {
        strcpy((yyval.codn)->after,break_label[break_count-1]);break_count--;}
        else
        strcpy((yyval.codn)->after,newlabel());
        (yyval.codn)->code=(yyvsp[-8].varattr)->code;
        //printf("herejof\n");
        TAC *rough = (TAC *)malloc(sizeof(TAC));
        strcpy(rough->text,(yyvsp[-5].varattr)->code->text);
        rough->next=NULL;
        (yyval.codn)->code=append((yyval.codn)->code,rough);
        //printf("herejoffa3\n");
        sprintf(t,"label,%s",(yyval.codn)->begin);
        (yyval.codn)->code=append((yyval.codn)->code,gen(t));
        //printf("herejof4\n");
        sprintf(t,"ifgoto,==,%s,%s,%s",(yyvsp[-5].varattr)->place,"0",(yyval.codn)->after);
        (yyval.codn)->code=append((yyval.codn)->code,gen(t));
        (yyval.codn)->code=append((yyval.codn)->code,(yyvsp[-2].varattr)->code);
        (yyval.codn)->code=append((yyval.codn)->code,(yyvsp[-3].varattr)->code);
        (yyval.codn)->code=append((yyval.codn)->code,(yyvsp[-5].varattr)->code);
        //printf("herejof5\n");
        sprintf(t,"goto,%s",(yyval.codn)->begin);
        //printf("herejof7\n");
        (yyval.codn)->code=append((yyval.codn)->code,gen(t));
        //printf("herejof8\n");
        sprintf(t,"label,%s",(yyval.codn)->after);
        //printf("herejof9\n");
        (yyval.codn)->code=append((yyval.codn)->code,gen(t));
        //printf("herejof6\n");
        
    }
#line 2899 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 665 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2905 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 670 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2911 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 674 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {}
#line 2917 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 675 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2923 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 679 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);strcpy((yyval.varattr)->place,newtmp());sprintf(t,"%s,%s,%s,%s",(yyvsp[-1].varattr)->place,(yyval.varattr)->place,(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2929 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 680 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2935 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 684 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);strcpy((yyval.varattr)->place,newtmp());sprintf(t,"|,%s,%s,%s",(yyval.varattr)->place,(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2941 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 685 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);strcpy((yyval.varattr)->place,newtmp());sprintf(t,"+,%s,%s,%s",(yyval.varattr)->place,(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2947 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 686 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);strcpy((yyval.varattr)->place,newtmp());sprintf(t,"-,%s,%s,%s",(yyval.varattr)->place,(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2953 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 687 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2959 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 692 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);strcpy((yyval.varattr)->place,newtmp());sprintf(t,"%s,%s,%s,%s",(yyvsp[-1].varattr)->place,(yyval.varattr)->place,(yyvsp[-2].varattr)->place,(yyvsp[0].varattr)->place);(yyval.varattr)->code=append((yyval.varattr)->code,gen(t));}
#line 2965 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 694 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 2971 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 704 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 2977 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 705 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 2983 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 706 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 2989 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 707 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 2995 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 708 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 3001 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 709 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 3007 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 713 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval));}
#line 3013 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 714 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 3019 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 715 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 3025 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 716 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 3031 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 717 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 3037 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 718 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr)); strcpy((yyval.varattr)->place,(yyvsp[0].sval)); }
#line 3043 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 723 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 3049 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 724 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3055 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 728 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 3061 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 729 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3067 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 730 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3073 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 731 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3079 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 732 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3085 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 733 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3091 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 737 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-1].varattr)->code,(yyvsp[0].varattr)->code);strcpy((yyval.varattr)->place,(yyvsp[-1].varattr)->place);strcpy((yyval.varattr)->place2,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[-1].varattr)->type),strcpy((yyval.varattr)->type1,(yyvsp[-1].varattr)->type1);}
#line 3097 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 740 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3103 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 744 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3109 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 745 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3115 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 746 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3121 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 750 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3127 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 754 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[-1].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[-1].varattr)->place);}
#line 3133 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 758 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3139 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 759 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3145 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 760 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3151 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 761 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3157 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 762 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3163 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 763 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3169 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 767 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3175 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 771 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3181 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 775 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3187 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 779 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3193 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 780 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3199 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 781 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3205 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 785 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3211 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 789 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 3217 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 790 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3223 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 794 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->place2,(yyvsp[0].varattr)->place2);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 3229 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 797 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3235 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 801 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3241 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 802 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3247 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 803 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3253 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 804 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3259 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 808 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3265 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 809 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3271 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 813 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3277 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 814 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3283 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 818 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3289 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 822 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=append((yyvsp[-2].varattr)->code,(yyvsp[0].varattr)->code);strcpy(forArray,(yyvsp[-2].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);}
#line 3295 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 826 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));(yyval.varattr)->code=(yyvsp[0].varattr)->code;strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 3301 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 827 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3307 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 831 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"lit");strcpy((yyval.varattr)->type1,"int");}
#line 3313 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 832 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"lit");strcpy((yyval.varattr)->type1,"float");}
#line 3319 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 833 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->place,(yyvsp[0].varattr)->place);strcpy((yyval.varattr)->type,(yyvsp[0].varattr)->type);strcpy((yyval.varattr)->type1,(yyvsp[0].varattr)->type1);}
#line 3325 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 834 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"lit");strcpy((yyval.varattr)->type1,"bool");strcpy((yyval.varattr)->type2,"true");}
#line 3331 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 835 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"lit");strcpy((yyval.varattr)->type1,"bool");strcpy((yyval.varattr)->type2,"false");}
#line 3337 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 836 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"lit");strcpy((yyval.varattr)->type1,"complex");}
#line 3343 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 840 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3349 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 841 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3355 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 842 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3361 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 843 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3367 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 844 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3373 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 845 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3379 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 858 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {(yyval.varattr)=malloc(sizeof(VarAttr));strcpy((yyval.varattr)->place,(yyvsp[0].sval));strcpy((yyval.varattr)->type,"lit");strcpy((yyval.varattr)->type1,"string");}
#line 3385 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 862 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3391 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 866 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3397 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 867 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3403 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 868 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3409 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 872 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3415 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 873 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3421 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 877 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3427 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 878 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3433 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 879 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3439 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 883 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3445 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 884 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3451 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 885 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3457 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 889 "../asgn5/src/lexer.y" /* yacc.c:1646  */
    {   }
#line 3463 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
    break;


#line 3467 "../asgn5/src/y.tab.c" /* yacc.c:1646  */
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
#line 893 "../asgn5/src/lexer.y" /* yacc.c:1906  */

void yyerror (char * s){
        
}

int main(int argc, char **argv){
    global=malloc(sizeof(sym_table));
    //printf("DEBUG: Putting global table");
    push(global);
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
    //printf("DEBUG: printing everything about global: \nglobal->head->name: %s\nglobal->tail->name: %s\n",global->head->name,global->tail->name);
    return 0;
}
