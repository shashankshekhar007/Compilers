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
int yylex(void);
void yyerror (char *);
FILE *yyin;

#line 74 "y.tab.c" /* yacc.c:339  */

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
    Keyword = 258,
    Identifier = 259,
    Single_line_comment = 260,
    Multi_line_comment = 261,
    T_int = 262,
    T_bool = 263,
    T_string = 264,
    T_int8 = 265,
    T_int16 = 266,
    T_int32 = 267,
    T_int64 = 268,
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
    Op_add = 322,
    Op_sub = 323,
    Op_mult = 324,
    Op_divide = 325,
    Op_mod = 326,
    Op_pow = 327,
    Op_relational_and = 328,
    Op_relational_or = 329,
    Op_unary_and = 330,
    Op_unary_or = 331,
    Op_unary_not = 332,
    M_question = 333,
    M_semicolon = 334,
    M_colon = 335,
    M_comma = 336,
    M_lcurly = 337,
    M_rcurly = 338,
    M_lparan = 339,
    M_rparan = 340,
    M_lsqbracket = 341,
    M_rsqbracket = 342,
    M_dot = 343,
    M_doublequotes = 344,
    M_singlequotes = 345,
    M_underscore = 346,
    Bool_true = 347,
    Bool_false = 348
  };
#endif
/* Tokens.  */
#define Keyword 258
#define Identifier 259
#define Single_line_comment 260
#define Multi_line_comment 261
#define T_int 262
#define T_bool 263
#define T_string 264
#define T_int8 265
#define T_int16 266
#define T_int32 267
#define T_int64 268
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
#define Op_add 322
#define Op_sub 323
#define Op_mult 324
#define Op_divide 325
#define Op_mod 326
#define Op_pow 327
#define Op_relational_and 328
#define Op_relational_or 329
#define Op_unary_and 330
#define Op_unary_or 331
#define Op_unary_not 332
#define M_question 333
#define M_semicolon 334
#define M_colon 335
#define M_comma 336
#define M_lcurly 337
#define M_rcurly 338
#define M_lparan 339
#define M_rparan 340
#define M_lsqbracket 341
#define M_rsqbracket 342
#define M_dot 343
#define M_doublequotes 344
#define M_singlequotes 345
#define M_underscore 346
#define Bool_true 347
#define Bool_false 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 311 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  136
/* YYNRULES -- Number of rules.  */
#define YYNRULES  292
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  470

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

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
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    19,    19,    22,    23,    25,    26,    28,    31,    32,
      35,    36,    38,    41,    42,    45,    46,    49,    52,    53,
      54,    57,    58,    59,    62,    63,    66,    67,    69,    72,
      73,    76,    77,    80,    83,    84,    86,    89,    90,    92,
      93,    96,    97,    99,   102,   103,   106,   109,   110,   113,
     116,   117,   120,   121,   124,   127,   128,   131,   134,   137,
     138,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   154,   155,   156,   157,   158,   159,   162,
     165,   168,   169,   172,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   187,   188,   190,   193,   196,   199,
     202,   205,   206,   208,   211,   212,   214,   217,   220,   221,
     228,   229,   230,   233,   234,   237,   240,   241,   243,   244,
     246,   247,   249,   252,   253,   256,   259,   260,   262,   263,
     269,   272,   273,   276,   279,   280,   282,   285,   286,   288,
     291,   292,   293,   296,   297,   298,   305,   308,   309,   310,
     311,   313,   314,   317,   318,   324,   325,   326,   335,   336,
     337,   340,   341,   344,   345,   346,   347,   348,   349,   350,
     353,   356,   359,   362,   365,   368,   369,   371,   374,   377,
     378,   381,   384,   387,   388,   390,   391,   394,   397,   398,
     400,   401,   403,   406,   407,   409,   412,   413,   415,   416,
     418,   419,   420,   421,   424,   425,   426,   429,   430,   431,
     432,   435,   436,   439,   442,   445,   446,   447,   448,   449,
     450,   453,   456,   457,   459,   460,   462,   463,   465,   466,
     472,   473,   474,   477,   478,   481,   484,   485,   487,   488,
     489,   490,   493,   494,   497,   500,   501,   502,   503,   504,
     505,   510,   513,   516,   517,   520,   525,   528,   529,   530,
     533,   534,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   558,   559,   563,   564,   565,   566,   567,   568,   569,
     572,   573,   576
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Keyword", "Identifier",
  "Single_line_comment", "Multi_line_comment", "T_int", "T_bool",
  "T_string", "T_int8", "T_int16", "T_int32", "T_int64", "T_uint",
  "T_uint16", "T_uint32", "T_uint64", "T_uintptr", "T_float32",
  "T_float64", "T_complex64", "T_complex128", "Key_break", "Key_case",
  "Key_const", "Key_continue", "Key_default", "Key_else",
  "Key_fallthrough", "Key_for", "Key_func", "Key_if", "Key_import",
  "Key_interface", "Key_map", "Key_package", "Key_range", "Key_return",
  "Key_select", "Key_struct", "Key_switch", "Key_type", "Key_var",
  "Key_class", "Key_private", "Key_protected", "Key_public", "Key_static",
  "Key_try", "Key_catch", "Key_finally", "Imaginary_lit", "Float_lit",
  "Int_lit", "String_lit", "Op_greater_greater", "Op_less_less",
  "Op_greater", "Op_less", "Op_greater_eq", "Op_less_eq", "Op_not_equal",
  "Op_equality", "Op_assign", "Op_unary_add", "Op_unary_sub", "Op_add",
  "Op_sub", "Op_mult", "Op_divide", "Op_mod", "Op_pow",
  "Op_relational_and", "Op_relational_or", "Op_unary_and", "Op_unary_or",
  "Op_unary_not", "M_question", "M_semicolon", "M_colon", "M_comma",
  "M_lcurly", "M_rcurly", "M_lparan", "M_rparan", "M_lsqbracket",
  "M_rsqbracket", "M_dot", "M_doublequotes", "M_singlequotes",
  "M_underscore", "Bool_true", "Bool_false", "$accept", "sourceFile",
  "zom_importDecl_eos", "zom_topLevelDecl_eos", "packageClause",
  "importDecl", "zom_importSpec_eos", "importSpec",
  "oom_dot_or_identifier", "dot_or_identifier", "importPath",
  "topLevelDecl", "declaration", "constDecl", "zom_constSpec_eos",
  "constSpec", "oom_alpha", "oom_type", "identifierList",
  "zom_comma_Identifier", "expressionList", "zom_comma_expression",
  "typeDecl", "zom_typespec_semicolon", "typeSpec", "functionDecl",
  "function", "methodDecl", "receiver", "varDecl", "zom_varSpec_eos",
  "varSpec", "oom_equal_expressionList", "block", "statementList",
  "zom_statement_eos", "statement", "simpleStmt", "expressionStmt",
  "sendStmt", "incDecStmt", "assignment", "temp_asgn", "oom_temp_assign",
  "assign_op", "shortVarDecl", "emptyStmt", "labeledStmt", "returnStmt",
  "zom_expressionList", "breakStmt", "zom_Identifier", "continueStmt",
  "fallthroughStmt", "ifStmt", "oom_else_ifstmtorblock", "switchStmt",
  "exprSwitchStmt", "oom_simpleStmt_semicolon", "oom_expression",
  "zom_exprCaseClause", "exprCaseClause", "exprSwitchCase",
  "typeSwitchStmt", "zom_typeCaseClause", "typeSwitchGuard",
  "typeCaseClause", "typeSwitchCase", "typeList", "zom_comma_type",
  "selectStmt", "zom_commClause", "commClause", "commCase", "recvStmt",
  "forStmt", "oom_gamma", "forClause", "oom_simpleStmt", "rangeClause",
  "type", "typeName", "typeLit", "arrayType", "arrayLength", "elementType",
  "pointerType", "interfaceType", "zom_methodSpec_eos", "sliceType",
  "mapType", "methodSpec", "functionType", "signature", "oom_result",
  "result", "parameters", "oom_parameterList_comma", "oom_comma",
  "parameterList", "zom_comma_parameterDecl", "parameterDecl",
  "oom_identifierList", "oom_tripledot", "operand", "literal", "basicLit",
  "operandName", "qualifiedIdent", "compositeLit", "literalType",
  "literalValue", "oom_elementList_comma", "elementList",
  "zom_comma_keyedElement", "keyedElement", "key", "element", "structType",
  "zom_fieldDecl_eos", "fieldDecl", "anonymousField", "functionLit",
  "primaryExpr", "selector", "index", "slice", "typeAssertion",
  "methodExpr", "receiverType", "expression",
  "any_of_these_binary_operators", "unaryExpr",
  "any_of_these_unary_operators", "conversion", "eos", YY_NULLPTR
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
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF -354

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-354)))

#define YYTABLE_NINF -258

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       8,    58,    67,    24,  -354,  -354,  -354,    93,    21,   180,
      24,  -354,    25,  -354,  -354,    78,  -354,    18,    23,    31,
      33,  -354,    24,  -354,  -354,  -354,  -354,  -354,  -354,    93,
      60,    24,  -354,  -354,    65,   152,  -354,    71,    90,    10,
     185,  -354,   256,   191,  -354,   152,   256,  -354,   180,  -354,
    -354,    25,   196,  -354,    99,    24,   162,  -354,  -354,   142,
     272,  -354,   157,   160,   163,   158,    90,   159,    90,   166,
     165,   170,   256,   256,   612,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,   169,   178,   173,    24,
     200,  -354,  -354,    65,  -354,   152,  -354,   202,   678,  -354,
      12,  -354,  -354,  -354,  -354,  -354,  -354,  -354,   152,  -354,
     184,   256,  -354,   142,   273,  -354,   276,   256,    16,  -354,
     183,   201,    90,  -354,  -354,  -354,  -354,   213,  -354,  -354,
     256,  -354,  -354,  -354,  1005,   567,   256,   204,   -69,   211,
     212,   216,   218,  -354,  -354,  -354,  -354,   264,  -354,   220,
     222,  -354,    22,  -354,   217,  1479,  -354,  1044,  -354,  -354,
     191,  -354,   152,  1044,  -354,  -354,  -354,  1044,   181,   306,
     306,  -354,   732,   779,  1044,   229,   779,  -354,  -354,   235,
     381,  -354,   231,  -354,    24,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  1327,    81,   163,   232,  -354,  -354,   -28,
    -354,   236,    24,   230,   322,   256,  -354,   249,    24,   278,
    -354,  -354,   142,  -354,   256,   -46,    47,  1225,   248,  -354,
    -354,  1044,   256,   492,  -354,  1044,    36,  -354,  -354,  -354,
    -354,   333,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,   266,  -354,
    1044,  -354,  -354,  -354,  -354,  1379,   254,   678,  -354,  -354,
    -354,   247,  1044,   265,   304,  -354,   142,  -354,   274,  -354,
    1246,   275,  1273,  -354,  -354,   140,   280,  1083,   294,  -354,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,   290,  -354,   307,
    1044,  -354,   678,   309,  -354,  -354,  1044,  -354,  -354,  -354,
    -354,  -354,   276,   256,  -354,   323,  -354,    16,  -354,   295,
    -354,  -354,   293,  1195,  -354,    43,   302,   300,   160,   303,
     305,  -354,  1405,   312,  1153,  -354,   256,  -354,  -354,  1479,
    -354,  -354,  1479,   326,   349,  -354,   826,  1044,   366,  1122,
    -354,   315,   140,   319,  -354,   128,   313,   318,   139,  1479,
    1044,  -354,  -354,  -354,  -354,  1044,  1379,  -354,  -354,  -354,
    -354,  -354,   316,   317,  -354,  -354,  -354,   873,  -354,   912,
    1044,  -354,   320,   966,  1044,   779,  1455,  1300,   -17,  -354,
     324,   346,  -354,  -354,  1353,  -354,  -354,   678,   350,   156,
     193,    45,  -354,  1479,  -354,   256,  -354,   303,  -354,  -354,
    1479,   328,  1430,  -354,  1044,  1479,  -354,   779,   366,  -354,
    -354,   355,  1044,  -354,   405,  1044,  -354,   337,   156,   342,
     256,  -354,   341,   193,   345,   117,  -354,  -354,  -354,  1044,
    1479,  -354,  -354,  1044,  1479,   151,  -354,  -354,  -354,   678,
    -354,   347,  -354,  -354,   678,   344,  1174,  1479,    46,  -354,
     256,  -354,  -354,  -354,  -354,   198,   347,   348,  -354,  -354
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     1,   292,     4,    14,     6,
       0,    16,    11,    15,     8,     0,    13,     0,     0,     0,
       0,     2,     0,    18,    21,    22,    19,    20,    23,     4,
       0,     0,    17,    12,    35,    27,    24,    30,     0,   197,
       0,    49,     0,    42,    39,    53,     0,    50,     6,     3,
       9,    11,     0,    33,     0,     0,    32,    28,    44,    45,
     184,   196,     0,   191,   194,   199,     0,   161,     0,     0,
       0,     0,     0,     0,     0,    43,   158,   159,   163,   165,
     167,   168,   169,   166,   162,   164,     0,     0,     0,     0,
      56,     5,    10,    35,    25,    27,    31,     0,    60,    46,
     189,   186,   182,   183,   185,   187,   190,   188,   197,   192,
       0,     0,    47,    48,     0,   181,   176,     0,   237,   173,
       0,   211,     0,   209,   208,   207,   210,     0,   283,   284,
     287,   286,   288,   285,     0,     0,     0,     0,   158,   163,
       0,   168,   169,   245,   200,   204,   201,   212,   205,     0,
     164,   206,   281,   202,     0,   171,   260,     0,   246,    40,
      42,    51,    53,     0,    54,    34,    26,     0,   211,   105,
     105,   107,   150,     0,   102,     0,   117,    98,    61,     0,
      95,    68,     0,    58,     0,    63,    74,    73,    75,    76,
      77,    78,    62,    64,    65,    66,    67,    69,    70,   113,
     114,    71,    72,    79,    35,   194,     0,   195,   213,   161,
     180,     0,     0,     0,     0,     0,   243,     0,     0,   241,
     160,   244,   181,   289,   287,     0,     0,     0,     0,   172,
     177,     0,     0,   223,   214,   119,     0,   247,   248,   249,
     250,     0,   278,   277,   267,   266,   269,   268,   265,   264,
     270,   271,   274,   275,   276,   273,   262,   263,   279,   272,
       0,   282,    41,    52,    55,    38,     0,     0,   104,   103,
     106,   211,     0,     0,     0,   153,     0,   148,     0,   149,
      79,     0,    79,   101,   100,   138,     0,   119,     0,    91,
      90,    84,    85,    87,    88,    89,    86,    92,    94,     0,
       0,    57,    60,   266,    81,    82,     0,    36,   193,   198,
     179,   174,   176,     0,   242,   239,   235,   237,   240,   158,
     259,   203,     0,     0,   170,   211,   234,     0,   191,   227,
       0,   229,   233,     0,   118,   251,     0,   256,   280,   261,
      29,    99,   157,     0,     0,   146,     0,     0,   112,     0,
     142,     0,   138,     0,   116,   211,     0,     0,   281,   118,
       0,    93,    96,    83,    59,     0,    38,   175,   178,   238,
     236,   258,     0,     0,   291,   221,   222,     0,   224,     0,
     119,   252,     0,     0,     0,   154,     0,     0,     0,   109,
       0,     0,   140,   141,    38,   136,   137,    60,     0,   121,
     127,     0,    97,    80,    37,     0,   290,   227,   234,   228,
     233,     0,   118,   255,     0,   155,   152,   154,   112,   111,
     110,     0,     0,   139,     0,     0,   124,     0,   121,     0,
       0,   132,     0,   127,     0,     0,   217,   226,   253,     0,
     156,   151,   108,     0,   143,     0,   123,   115,   120,    60,
     131,   135,   125,   126,    60,     0,     0,   144,     0,   122,
       0,   133,   130,   129,   254,     0,   135,     0,   134,   128
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -354,  -354,   398,   382,  -354,  -354,   380,   427,  -354,  -354,
    -354,  -354,    39,  -354,   359,   426,  -354,  -354,     6,   351,
    -104,    95,  -354,   308,   443,  -354,   -49,  -354,  -354,  -354,
     301,   444,  -354,   -23,  -311,   164,   203,  -167,  -354,   123,
    -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,  -354,
    -354,   310,  -354,  -354,    85,    57,  -354,  -354,  -354,  -276,
      49,  -354,  -354,  -354,    48,  -354,  -354,  -354,  -354,    13,
    -354,   126,  -354,  -354,  -354,  -354,  -354,  -354,  -353,  -354,
     -18,   -42,  -354,    11,  -354,  -224,  -354,  -354,   171,    77,
      98,  -354,  -354,   -56,  -354,  -354,    74,  -354,   167,  -354,
     279,   377,  -354,  -354,  -354,  -354,  -354,  -354,   -39,  -354,
    -354,  -148,  -354,  -354,    79,   110,  -354,   109,   119,   175,
    -354,  -354,  -354,  -285,  -354,  -354,  -354,  -354,  -354,   356,
     234,  -354,   336,  -354,  -354,   132
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     9,    21,     3,    10,    30,    31,    15,    16,
      33,    22,   178,    24,    54,    55,    57,    97,   179,    53,
     180,   307,    25,    86,    87,    26,    58,    27,    40,    28,
      88,    89,   164,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   298,   299,   300,   190,   191,   192,   193,   284,
     194,   269,   195,   196,   197,   389,   198,   199,   287,   333,
     427,   428,   429,   200,   432,   357,   433,   434,   450,   461,
     201,   351,   352,   353,   393,   202,   276,   277,   278,   279,
     137,   138,    77,   139,   140,   230,    79,    80,   211,   141,
     142,   212,    83,    59,   102,   103,    60,    62,   107,    63,
     109,    64,    65,   111,   143,   144,   145,   146,   147,   148,
     149,   326,   327,   328,   378,   329,   330,   331,   150,   217,
     218,   219,   151,   152,   237,   238,   239,   240,   153,   154,
     203,   260,   156,   157,   158,     7
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,   234,   358,    84,    76,   275,   281,    84,   324,   286,
     113,   356,   115,  -220,    34,   173,   204,   112,    76,  -257,
     204,    84,    34,    37,    75,    11,    46,    38,    90,    11,
      76,    76,   416,    84,    84,    42,    99,    34,   231,   220,
     335,    37,   101,    68,     1,    61,    69,    70,    23,   335,
     335,    46,    71,    78,   119,   120,    39,    78,    76,   264,
     114,    84,     4,   266,   441,    98,   222,     5,   274,    76,
     283,    78,    84,   221,   210,    76,   216,    84,    84,    84,
     -14,    72,   120,    78,    78,   214,   423,    23,    76,   368,
      99,    84,    41,   207,    76,  -189,    73,    84,    74,   213,
    -197,    37,    35,     6,   411,    12,    61,    39,   235,    13,
     236,    78,   119,    13,    61,    43,   225,    45,   229,    81,
     336,    67,    78,    81,   215,  -161,     8,  -161,    78,   435,
     465,   114,   320,    32,   104,   241,  -161,    81,   459,   445,
      82,    78,    29,   462,    82,    50,    52,    78,    68,    81,
      81,    69,    70,   310,    48,    56,    34,    71,    82,   455,
    -161,    85,    52,    51,   349,    85,  -161,   350,    46,   114,
      82,    82,   314,    76,    39,    84,    84,    81,   273,    85,
     425,   436,   319,   426,    94,    84,    72,    95,    81,    66,
      76,    85,    85,    84,    81,    42,   363,   315,    82,    99,
      93,    73,    67,    74,    96,    17,   119,    81,   398,    82,
    -161,    18,  -161,    81,   229,    82,   114,   430,   275,    85,
     431,   162,    19,    20,    98,   235,    78,   401,    82,    68,
      85,   408,    69,    70,    82,    78,    85,   235,    71,   458,
     467,   106,   105,    78,   108,   391,   110,   114,   116,    85,
     275,   117,   118,   345,   159,    85,   402,   160,   161,   348,
      67,   267,    52,  -161,   163,  -161,   167,    72,   220,   114,
     210,    76,   206,    84,    84,   216,    67,   208,    84,   402,
     209,   223,    73,  -161,    74,  -161,  -161,    68,   231,   114,
      69,    70,    81,  -216,    76,   229,    71,    84,  -218,   232,
    -219,    81,   233,    68,  -215,   241,    69,    70,   155,    81,
     268,   285,    71,    82,   301,   288,   302,   313,   382,   311,
     309,   446,    82,   215,    78,    72,    67,   -35,    52,  -161,
      82,  -161,   316,   318,    85,   114,   322,   337,   338,   340,
      73,    72,    74,    85,   312,   343,  -162,    78,  -162,  -162,
     317,    85,  -162,   346,   347,   390,   100,   360,    74,   354,
     289,   290,   361,    76,   418,   419,    84,   344,   227,   155,
     362,   291,   292,   293,   294,   295,   296,   365,   369,   297,
     371,   372,  -232,   375,   377,   379,   384,   229,    76,   383,
      81,    84,   380,    76,   388,   399,    84,   265,   395,   397,
     400,   265,   406,   405,   421,   413,   280,   282,   265,   121,
     422,    82,   451,    81,   424,   438,    78,   382,    76,   443,
     447,    84,   449,    76,   452,   454,    84,    49,   460,   463,
      91,    92,    85,   469,    82,    14,   122,   289,   290,    69,
      70,    78,   466,    36,   165,    71,    78,   382,   291,   292,
     293,   294,   295,   296,   166,    85,   297,   123,   124,   125,
     126,   404,    44,   263,    47,   323,   364,   332,   262,   334,
     341,    78,   392,   420,    72,   442,    78,   448,   396,   468,
     270,   453,    81,   367,   308,   205,   437,   407,   409,   134,
     226,   135,   370,   261,   339,   376,   325,     0,     0,     0,
       0,     0,     0,    82,     0,     0,   342,    81,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,   359,     0,   122,    85,     0,    69,    70,    82,     0,
       0,     0,    71,    82,   265,     0,     0,    81,     0,     0,
     366,     0,    81,     0,   123,   124,   125,   126,     0,    85,
       0,   127,     0,     0,    85,     0,     0,     0,    82,   128,
     129,   130,     0,    82,   131,     0,     0,   132,     0,   133,
       0,   121,     0,  -225,   233,     0,   134,     0,   135,    85,
     386,   387,     0,   394,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   265,     0,     0,     0,   122,   403,
       0,    69,    70,     0,     0,     0,     0,    71,     0,     0,
       0,   332,     0,   410,   412,     0,   121,   265,   415,   123,
     124,   125,   126,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,     0,     0,   131,
       0,     0,   132,   122,   133,     0,    69,    70,   440,     0,
       0,   134,    71,   135,   136,   228,   444,     0,     0,   265,
       0,     0,     0,     0,   123,   124,   125,   126,     0,     0,
       0,   127,     0,   456,     0,     0,     0,   457,     0,   128,
     129,   130,   168,     0,   131,     0,     0,   132,     0,   133,
       0,     0,     0,     0,     0,     0,   134,     0,   135,   136,
       0,   169,     0,    17,   170,     0,     0,   171,   172,   122,
     173,     0,    69,    70,     0,     0,   174,   175,    71,   176,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
     123,   124,   125,   126,     0,     0,   271,   127,     0,     0,
       0,     0,     0,     0,     0,   128,   129,   130,     0,     0,
     131,     0,     0,   132,     0,   133,     0,   177,     0,     0,
      98,     0,   134,   122,   135,     0,    69,    70,     0,   272,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   271,   123,   124,   125,   126,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,     0,     0,   131,     0,     0,   132,     0,   133,
     122,   177,     0,    69,    70,     0,   134,     0,   135,    71,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   123,   124,   125,   126,     0,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,     0,
       0,   131,     0,     0,   132,     0,   133,   122,   177,     0,
      69,    70,     0,   134,     0,   135,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,   123,   124,
     125,   126,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,     0,     0,   131,     0,
       0,   132,     0,   133,   122,   385,     0,    69,    70,     0,
     134,     0,   135,    71,     0,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,   123,   124,   125,   126,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   122,     0,   131,    69,    70,   132,     0,
     133,     0,    71,     0,     0,   233,     0,   134,     0,   135,
       0,     0,     0,     0,   123,   124,   125,   126,     0,     0,
     121,   127,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,     0,     0,   131,     0,     0,   132,     0,   133,
       0,     0,     0,     0,   233,     0,   134,   122,   135,     0,
      69,    70,     0,   414,     0,     0,    71,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,   123,   124,
     125,   126,     0,     0,     0,   127,     0,     0,     0,     0,
       0,     0,     0,   128,   129,   130,   122,     0,   131,    69,
      70,   132,     0,   133,     0,    71,     0,     0,   121,     0,
     134,     0,   135,     0,     0,     0,     0,   123,   124,   125,
     126,     0,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   224,   122,     0,   131,    69,    70,
     132,     0,   133,     0,    71,     0,     0,   355,     0,   134,
       0,   135,     0,     0,     0,     0,   123,   124,   125,   126,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,   128,   129,   130,   122,     0,   131,    69,    70,   132,
       0,   133,     0,    71,     0,     0,   271,     0,   134,     0,
     135,     0,     0,     0,     0,   123,   124,   125,   126,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   122,     0,   131,    69,    70,   132,     0,
     133,     0,    71,     0,     0,     0,     0,   134,     0,   135,
       0,     0,     0,     0,   123,   124,   125,   126,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,     0,     0,   131,     0,     0,   132,     0,   133,
       0,     0,     0,     0,     0,     0,   134,     0,   135,   242,
     243,   244,   245,   246,   247,   248,   249,     0,     0,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     242,   243,   244,   245,   246,   247,   248,   249,     0,     0,
     381,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,   464,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,     0,     0,   373,     0,     0,     0,
     374,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   242,   243,   244,   303,   246,   247,   248,   249,
     321,   304,   305,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,     0,     0,     0,     0,   306,  -147,   242,
     243,   244,   303,   246,   247,   248,   249,     0,   304,   305,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,     0,     0,     0,   306,    98,   242,   243,   244,   245,
     246,   247,   248,   249,     0,     0,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,     0,     0,
       0,     0,    98,   242,   243,   244,   303,   246,   247,   248,
     249,     0,   304,   305,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,     0,     0,     0,     0,   306,   242,
     243,   244,   303,   246,   247,   248,   249,     0,     0,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
       0,     0,     0,  -145,   306,   242,   243,   244,   245,   246,
     247,   248,   249,     0,     0,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,     0,     0,     0,     0,
     306,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,     0,  -230,   242,   243,   244,   245,
     246,   247,   248,   249,     0,     0,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,     0,     0,     0,
     439,   242,   243,   244,   245,   246,   247,   248,   249,     0,
       0,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,   417,   242,   243,   244,   245,   246,
     247,   248,   249,     0,     0,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259
};

static const yytype_int16 yycheck[] =
{
      42,   149,   287,    42,    46,   172,   173,    46,   232,   176,
      66,   287,    68,    82,     4,    32,     4,    66,    60,    88,
       4,    60,     4,    17,    42,     4,    20,     4,    46,     4,
      72,    73,   385,    72,    73,     4,    59,     4,    84,    85,
       4,    35,    60,    31,    36,    39,    34,    35,     9,     4,
       4,    45,    40,    42,    72,    73,    84,    46,   100,   163,
      88,   100,     4,   167,   417,    82,   122,     0,   172,   111,
     174,    60,   111,   122,   116,   117,   118,   116,   117,   118,
      55,    69,   100,    72,    73,    69,   397,    48,   130,   313,
     113,   130,    18,   111,   136,    85,    84,   136,    86,   117,
      88,    95,    84,    79,   380,    84,   100,    84,    86,    88,
      88,   100,   130,    88,   108,    84,   134,    84,   136,    42,
      84,     4,   111,    46,   118,    82,    33,    84,   117,    84,
      84,    88,    85,    55,    60,    88,    55,    60,   449,   424,
      42,   130,    10,   454,    46,    85,    81,   136,    31,    72,
      73,    34,    35,   209,    22,    84,     4,    40,    60,    42,
      79,    42,    81,    31,    24,    46,    85,    27,   162,    88,
      72,    73,   214,   215,    84,   214,   215,   100,   172,    60,
      24,   405,   224,    27,    85,   224,    69,    55,   111,     4,
     232,    72,    73,   232,   117,     4,   300,   215,   100,   222,
       4,    84,     4,    86,    42,    25,   224,   130,    80,   111,
      82,    31,    84,   136,   232,   117,    88,    24,   385,   100,
      27,    89,    42,    43,    82,    86,   215,    88,   130,    31,
     111,   379,    34,    35,   136,   224,   117,    86,    40,    88,
      42,    81,    85,   232,    81,   349,    88,    88,    82,   130,
     417,    86,    82,   276,    85,   136,   360,    79,    85,   282,
       4,    80,    81,    82,    64,    84,    64,    69,    85,    88,
     312,   313,    88,   312,   313,   317,     4,     4,   317,   383,
       4,    68,    84,    82,    86,    84,    85,    31,    84,    88,
      34,    35,   215,    82,   336,   313,    40,   336,    82,    87,
      82,   224,    82,    31,    82,    88,    34,    35,    74,   232,
       4,    82,    40,   215,    83,    80,   184,    87,   336,    83,
      88,   425,   224,   317,   313,    69,     4,    80,    81,    82,
     232,    84,    83,    55,   215,    88,    88,     4,    72,    85,
      84,    69,    86,   224,   212,    80,    82,   336,    84,    85,
     218,   232,    88,    79,    79,   349,    84,    63,    86,    79,
      56,    57,    72,   405,   387,   388,   405,    63,   134,   135,
      63,    67,    68,    69,    70,    71,    72,    68,    55,    75,
      85,    88,    80,    83,    81,    80,    37,   405,   430,    63,
     313,   430,    80,   435,    28,    82,   435,   163,    83,    80,
      82,   167,    85,    87,    80,    85,   172,   173,   174,     4,
      64,   313,   430,   336,    64,    87,   405,   435,   460,    64,
      83,   460,    80,   465,    83,    80,   465,    29,    81,    85,
      48,    51,   313,    85,   336,     8,    31,    56,    57,    34,
      35,   430,   460,    17,    93,    40,   435,   465,    67,    68,
      69,    70,    71,    72,    95,   336,    75,    52,    53,    54,
      55,   366,    19,   162,    20,   231,   302,   233,   160,   235,
     267,   460,   349,   388,    69,   418,   465,   428,   352,   466,
     170,   433,   405,   312,   205,   108,   407,   377,   379,    84,
     134,    86,   317,   157,   260,   328,     4,    -1,    -1,    -1,
      -1,    -1,    -1,   405,    -1,    -1,   272,   430,    -1,    -1,
      -1,    -1,   435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    31,   405,    -1,    34,    35,   430,    -1,
      -1,    -1,    40,   435,   300,    -1,    -1,   460,    -1,    -1,
     306,    -1,   465,    -1,    52,    53,    54,    55,    -1,   430,
      -1,    59,    -1,    -1,   435,    -1,    -1,    -1,   460,    67,
      68,    69,    -1,   465,    72,    -1,    -1,    75,    -1,    77,
      -1,     4,    -1,    81,    82,    -1,    84,    -1,    86,   460,
     346,   347,    -1,   349,   465,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    31,   365,
      -1,    34,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,   377,    -1,   379,   380,    -1,     4,   383,   384,    52,
      53,    54,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,
      -1,    -1,    75,    31,    77,    -1,    34,    35,   414,    -1,
      -1,    84,    40,    86,    87,    88,   422,    -1,    -1,   425,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    -1,   439,    -1,    -1,    -1,   443,    -1,    67,
      68,    69,     4,    -1,    72,    -1,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      -1,    23,    -1,    25,    26,    -1,    -1,    29,    30,    31,
      32,    -1,    34,    35,    -1,    -1,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,     4,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      82,    -1,    84,    31,    86,    -1,    34,    35,    -1,    37,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,    77,
      31,    79,    -1,    34,    35,    -1,    84,    -1,    86,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    52,    53,    54,    55,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,
      -1,    72,    -1,    -1,    75,    -1,    77,    31,    79,    -1,
      34,    35,    -1,    84,    -1,    86,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    52,    53,
      54,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,
      -1,    75,    -1,    77,    31,    79,    -1,    34,    35,    -1,
      84,    -1,    86,    40,    -1,    -1,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    31,    -1,    72,    34,    35,    75,    -1,
      77,    -1,    40,    -1,    -1,    82,    -1,    84,    -1,    86,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
       4,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    82,    -1,    84,    31,    86,    -1,
      34,    35,    -1,    37,    -1,    -1,    40,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    31,    -1,    72,    34,
      35,    75,    -1,    77,    -1,    40,    -1,    -1,     4,    -1,
      84,    -1,    86,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    31,    -1,    72,    34,    35,
      75,    -1,    77,    -1,    40,    -1,    -1,     4,    -1,    84,
      -1,    86,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    31,    -1,    72,    34,    35,    75,
      -1,    77,    -1,    40,    -1,    -1,     4,    -1,    84,    -1,
      86,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    31,    -1,    72,    34,    35,    75,    -1,
      77,    -1,    40,    -1,    -1,    -1,    -1,    84,    -1,    86,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    -1,
      87,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    87,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      85,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    56,    57,    58,    59,    60,    61,    62,    63,
      85,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    -1,    -1,    -1,    -1,    81,    82,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    -1,    81,    82,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      -1,    -1,    82,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    -1,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      -1,    -1,    -1,    80,    81,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      81,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    80,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,    -1,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    -1,    -1,    -1,
      80,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    79,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    95,    98,     4,     0,    79,   229,    33,    96,
      99,     4,    84,    88,   101,   102,   103,    25,    31,    42,
      43,    97,   105,   106,   107,   116,   119,   121,   123,   229,
     100,   101,    55,   104,     4,    84,   109,   112,     4,    84,
     122,   190,     4,    84,   118,    84,   112,   125,   229,    96,
      85,   229,    81,   113,   108,   109,    84,   110,   120,   187,
     190,   112,   191,   193,   195,   196,     4,     4,    31,    34,
      35,    40,    69,    84,    86,   174,   175,   176,   177,   180,
     181,   183,   184,   186,   202,   212,   117,   118,   124,   125,
     174,    97,   100,     4,    85,   229,    42,   111,    82,   127,
      84,   174,   188,   189,   190,    85,    81,   192,    81,   194,
      88,   197,   120,   187,    88,   187,    82,    86,    82,   174,
     174,     4,    31,    52,    53,    54,    55,    59,    67,    68,
      69,    72,    75,    77,    84,    86,    87,   174,   175,   177,
     178,   183,   184,   198,   199,   200,   201,   202,   203,   204,
     212,   216,   217,   222,   223,   224,   226,   227,   228,    85,
      79,    85,   229,    64,   126,   113,   108,    64,     4,    23,
      26,    29,    30,    32,    38,    39,    41,    79,   106,   112,
     114,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     139,   140,   141,   142,   144,   146,   147,   148,   150,   151,
     157,   164,   169,   224,     4,   195,    88,   174,     4,     4,
     175,   182,   185,   174,    69,   112,   175,   213,   214,   215,
      85,   120,   187,    68,    69,   174,   223,   224,    88,   174,
     179,    84,    87,    82,   205,    86,    88,   218,   219,   220,
     221,    88,    56,    57,    58,    59,    60,    61,    62,    63,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
     225,   226,   117,   124,   114,   224,   114,    80,     4,   145,
     145,     4,    37,   112,   114,   131,   170,   171,   172,   173,
     224,   131,   224,   114,   143,    82,   131,   152,    80,    56,
      57,    67,    68,    69,    70,    71,    72,    75,   136,   137,
     138,    83,   229,    59,    65,    66,    81,   115,   194,    88,
     187,    83,   229,    87,   175,   174,    83,   229,    55,   175,
      85,    85,    88,   224,   179,     4,   205,   206,   207,   209,
     210,   211,   224,   153,   224,     4,    84,     4,    72,   224,
      85,   130,   224,    80,    63,   127,    79,    79,   127,    24,
      27,   165,   166,   167,    79,     4,   153,   159,   217,   224,
      63,    72,    63,   114,   129,    68,   224,   182,   179,    55,
     213,    85,    88,    81,    85,    83,   192,    81,   208,    80,
      80,    87,   174,    63,    37,    79,   224,   224,    28,   149,
     112,   114,   133,   168,   224,    83,   165,    80,    80,    82,
      82,    88,   114,   224,   115,    87,    85,   209,   205,   211,
     224,   153,   224,    85,    37,   224,   172,    79,   127,   127,
     148,    80,    64,   128,    64,    24,    27,   154,   155,   156,
      24,    27,   158,   160,   161,    84,   179,   208,    87,    80,
     224,   172,   149,    64,   224,   217,   114,    83,   154,    80,
     162,   174,    83,   158,    80,    42,   224,   224,    88,   128,
      81,   163,   128,    85,    87,    84,   174,    42,   163,    85
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    97,    97,    98,    99,    99,
     100,   100,   101,   102,   102,   103,   103,   104,   105,   105,
     105,   106,   106,   106,   107,   107,   108,   108,   109,   110,
     110,   111,   111,   112,   113,   113,   114,   115,   115,   116,
     116,   117,   117,   118,   119,   119,   120,   121,   121,   122,
     123,   123,   124,   124,   125,   126,   126,   127,   128,   129,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   131,   131,   131,   131,   131,   131,   132,
     133,   134,   134,   135,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   137,   137,   138,   139,   140,   141,
     142,   143,   143,   144,   145,   145,   146,   147,   148,   148,
     149,   149,   149,   150,   150,   151,   152,   152,   153,   153,
     154,   154,   155,   156,   156,   157,   158,   158,   159,   159,
     160,   161,   161,   162,   163,   163,   164,   165,   165,   166,
     167,   167,   167,   168,   168,   168,   169,   170,   170,   170,
     170,   171,   171,   172,   172,   173,   173,   173,   174,   174,
     174,   175,   175,   176,   176,   176,   176,   176,   176,   176,
     177,   178,   179,   180,   181,   182,   182,   183,   184,   185,
     185,   186,   187,   188,   188,   189,   189,   190,   191,   191,
     192,   192,   193,   194,   194,   195,   196,   196,   197,   197,
     198,   198,   198,   198,   199,   199,   199,   200,   200,   200,
     200,   201,   201,   202,   203,   204,   204,   204,   204,   204,
     204,   205,   206,   206,   207,   207,   208,   208,   209,   209,
     210,   210,   210,   211,   211,   212,   213,   213,   214,   214,
     214,   214,   215,   215,   216,   217,   217,   217,   217,   217,
     217,   218,   219,   220,   220,   221,   222,   223,   223,   223,
     224,   224,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   225,   225,   225,
     225,   226,   226,   227,   227,   227,   227,   227,   227,   227,
     228,   228,   229
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     0,     3,     0,     2,     2,     4,
       3,     0,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     4,     3,     0,     2,     5,
       0,     1,     0,     2,     3,     0,     2,     3,     0,     2,
       4,     3,     0,     2,     3,     3,     2,     4,     4,     1,
       2,     4,     3,     0,     3,     2,     0,     3,     1,     3,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     0,     2,     4,     1,     3,
       2,     1,     0,     2,     1,     0,     2,     1,     6,     4,
       2,     2,     0,     1,     1,     6,     2,     0,     1,     0,
       2,     0,     3,     2,     1,     6,     2,     0,     8,     5,
       3,     2,     1,     2,     3,     0,     4,     2,     0,     3,
       2,     2,     1,     3,     4,     1,     3,     1,     1,     1,
       0,     5,     4,     1,     0,     4,     5,     2,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     2,     4,     3,     0,     3,     5,     2,
       1,     2,     2,     1,     0,     1,     1,     3,     2,     0,
       1,     0,     2,     3,     0,     3,     1,     0,     3,     0,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     6,     1,     1,
       1,     3,     2,     0,     2,     0,     3,     0,     3,     1,
       1,     1,     1,     1,     1,     4,     3,     0,     3,     2,
       2,     1,     2,     1,     2,     1,     1,     2,     2,     2,
       2,     2,     3,     5,     7,     4,     3,     1,     4,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     2,
       5,     4,     1
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
        case 7:
#line 28 "lexer.y" /* yacc.c:1646  */
    {printf("checking");}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2011 "y.tab.c" /* yacc.c:1646  */
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
#line 584 "lexer.y" /* yacc.c:1906  */

void yyerror (char * s){
	fprintf(stderr, "%s\n", s);
}

int main(int argc, char **argv){
//	FILE * fp;
//	if (argc == 2 && (fp = fopen (argv[1], "r")))
//		yyin = fp;
//	else{
//		printf("Unable to open file \n");
//		return 1;
//	}
	yyin = fopen(argv[1],"r");
	yyparse();
	fclose(yyin);
	return 0;
}
