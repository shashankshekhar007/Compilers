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
#line 1 "src/lexer.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
int yylex(void);
void yyerror (char *);
FILE *yyin;
FILE * f;
char* outputfilename;

#line 76 "y.tab.c" /* yacc.c:339  */

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

#line 313 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  230
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  391

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
       0,    24,    24,    28,    31,    35,    39,    42,    46,    47,
      51,    52,    53,    54,    55,    56,    58,    59,    62,    66,
      67,    69,    70,    71,    74,    80,    84,    85,    86,    87,
      91,   102,   103,   104,   105,   106,   107,   112,   116,   120,
     121,   122,   126,   127,   131,   132,   136,   140,   141,   145,
     146,   150,   151,   152,   156,   157,   161,   165,   166,   170,
     171,   179,   183,   187,   188,   192,   196,   197,   198,   199,
     200,   201,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   224,   225,
     226,   230,   231,   232,   236,   240,   241,   242,   243,   244,
     245,   249,   253,   254,   258,   259,   263,   264,   268,   269,
     273,   274,   275,   276,   280,   284,   285,   289,   290,   294,
     295,   299,   300,   301,   302,   303,   304,   308,   312,   316,
     317,   318,   319,   320,   330,   334,   335,   339,   340,   344,
     345,   349,   350,   351,   352,   353,   358,   359,   360,   361,
     371,   372,   373,   374,   375,   376,   380,   381,   382,   383,
     384,   385,   390,   391,   395,   396,   397,   398,   399,   400,
     401,   405,   409,   410,   411,   415,   419,   423,   424,   425,
     426,   427,   428,   432,   436,   440,   444,   445,   446,   450,
     454,   455,   459,   463,   464,   465,   466,   470,   471,   475,
     476,   480,   484,   488,   489,   493,   494,   495,   496,   497,
     498,   502,   503,   504,   505,   506,   507,   520,   524,   528,
     529,   530,   534,   535,   539,   540,   541,   545,   546,   547,
     551
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
  "M_underscore", "Bool_true", "Bool_false", "$accept", "SourceFile",
  "Block", "OPENB", "CLOSEB", "BrkBlk", "BrkBlkEnd", "StatementList",
  "Statement", "SimpleStmt", "EmptyStmt", "ExpressionStmt", "IncDecStmt",
  "Assignment", "ASN_OP", "ShortVarDecl", "VarDecl", "VarSpec",
  "Declaration", "FunctionDecl", "ClassDecl", "Signature", "Result",
  "Parameters", "ParameterList", "ParameterDecl", "TypeList",
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
     345,   346,   347,   348
};
# endif

#define YYPACT_NINF -312

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-312)))

#define YYTABLE_NINF -108

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,    54,    71,    11,  -312,  -312,    43,    30,   184,    16,
      73,  -312,    31,    73,  -312,  -312,  -312,    27,   134,   135,
     139,  -312,  -312,  -312,  -312,  -312,   125,    69,  -312,    70,
    -312,  -312,    22,    74,  -312,  -312,     7,  -312,   150,  1128,
    -312,  -312,  -312,   968,    80,    98,  -312,  -312,  -312,   103,
    -312,   104,  -312,   -37,  -312,  1048,   104,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,  -312,   101,   -32,  1128,   615,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
     127,   132,  1128,  -312,  -312,   137,  -312,   141,   202,   881,
     942,   145,  -312,  -312,  -312,  -312,    80,  1083,    20,  -312,
    -312,  -312,  1128,     8,    21,  -312,  -312,  -312,  -312,  -312,
    -312,  1128,  -312,  -312,  -312,   881,  1128,   128,  -312,  -312,
    -312,     1,  -312,   142,   143,   140,   148,   297,   122,    89,
    -312,   161,   146,  -312,  -312,   126,  -312,  -312,  -312,  -312,
    -312,  -312,  -312,   153,  -312,   881,  -312,   383,  -312,  -312,
    1128,  -312,  -312,  -312,  -312,   149,  -312,  1048,    34,   158,
    -312,    37,   144,  -312,   152,   426,   480,  -312,   881,  -312,
    1128,   881,   881,  -312,  -312,  -312,  -312,  -312,  -312,   881,
     881,   881,   881,   881,   126,   126,   126,   705,   752,    32,
    -312,  -312,  -312,  -312,  -312,   126,   161,   881,   153,   162,
     237,   250,   173,  -312,   881,  -312,   311,   178,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,   118,   230,  -312,   -15,  -312,  1128,    73,  -312,   191,
    -312,  -312,  -312,  -312,  -312,   183,    82,  -312,   201,  -312,
     205,  -312,    90,   208,   206,  -312,   148,   297,   122,    89,
      89,    89,    89,   161,   161,   161,  -312,   -16,   795,   -35,
    -312,  1128,  -312,  -312,  -312,   383,  -312,  -312,   881,    80,
     881,   153,   207,   217,  -312,  -312,  -312,   239,   240,   881,
     881,  1128,  -312,  -312,  -312,  -312,   525,  -312,   660,   570,
    -312,   881,  -312,  -312,   222,  -312,   -24,   838,  -312,   225,
    -312,   233,   234,   185,  -312,   235,   256,  -312,  -312,   881,
     881,   153,   153,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
     236,  -312,   881,  -312,  -312,   -12,  -312,  -312,  -312,    80,
    -312,   881,   288,  -312,  -312,   881,   231,   881,  -312,   881,
     881,  -312,    80,    -4,  -312,  -312,  -312,   232,   241,   246,
    -312,  -312,  -312,   298,  -312,  -312,  -312,   881,   881,  -312,
    -312,    -4,  -312,  -312,  -312,    80,    80,    80,  -312,  -312,
    -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,  -312,
    -312
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   218,     1,   219,     0,     0,     0,
       0,   217,   224,     0,   230,   223,   229,     0,     0,     0,
       0,    43,   110,   111,   113,   112,     2,     0,    42,     0,
     221,   227,     0,     0,   228,     4,     0,    62,     0,     0,
     183,    59,    38,     0,     0,     0,    64,   220,   222,     0,
     226,     0,    51,     0,    54,     0,     0,    94,    76,    77,
      78,    73,    72,    74,    75,    79,    80,    81,    82,    83,
      84,    85,    86,    87,     0,     0,     0,     0,    88,    90,
     184,    89,    70,    71,    66,    68,    67,   160,   159,    36,
       0,     0,   156,   157,   158,     0,   161,     0,     0,     0,
      39,     0,     4,    46,    63,   225,     5,    47,     0,    52,
      56,    61,     0,     0,     0,   201,   210,   206,   205,   211,
     212,   215,   214,   216,   213,     0,     0,     0,   208,   209,
     204,     0,   164,    92,     0,   134,   136,   138,   140,   145,
     149,   162,     0,    91,   203,     0,   207,    31,    32,    34,
      33,    60,   190,    41,   156,     0,    35,    24,     5,    44,
       0,    48,    50,    53,    55,     0,   196,     0,     0,     0,
     195,     0,     0,   101,     0,     0,     0,    65,   172,   170,
       0,     0,     0,   153,   152,   154,   155,   151,   150,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     165,   166,   167,   168,   169,     0,   163,     0,    40,    94,
     117,   119,     4,     4,   115,    16,     5,     0,    12,    19,
      20,    21,    22,    23,    10,    11,    13,    14,    15,    17,
      18,   190,     0,    45,     0,    58,     0,   200,   194,     0,
     197,   193,    93,   189,    96,   109,     0,   102,     0,   104,
     108,    95,     0,     0,     0,   202,   135,   137,   139,   142,
     143,   144,   141,   148,   147,   146,   186,     0,     0,     0,
     175,     0,    69,    92,   191,    24,   118,   120,    24,     0,
      24,   116,     0,     0,     9,    26,    27,     0,     0,     0,
       0,     0,    49,   192,   199,   198,     0,    98,     0,     0,
      97,     0,   171,   187,     0,   177,     0,     0,   176,     0,
     114,     0,   128,   190,     7,     0,   190,     3,     8,     0,
       0,    37,    30,    57,   100,   103,   109,   105,   108,    99,
     173,   188,     0,   178,   179,     0,   185,     6,     6,     0,
     131,     0,     5,    28,    29,   172,     0,     0,   180,   127,
       0,     7,     0,     0,   121,   174,   181,     0,     0,     0,
      25,   128,     5,     5,     5,     5,   182,    24,    24,    24,
     130,     0,   122,   123,   124,     0,     0,     0,     5,     5,
       7,     7,     7,   126,   125,     5,     5,     5,   129,   132,
     133
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -312,  -312,   -44,   -89,  -103,  -284,  -230,  -312,  -177,  -259,
    -263,   -21,  -312,  -312,   -91,  -312,  -312,  -312,    38,  -312,
    -312,   273,  -312,   313,  -312,   228,  -312,     4,  -312,  -312,
    -312,  -312,   -25,  -312,   -23,   147,   -33,  -128,  -312,   163,
    -202,  -312,    42,   316,  -312,  -312,  -312,  -312,  -311,  -312,
     -17,  -312,   -76,  -312,   164,   165,   159,    87,  -312,   -39,
    -312,   -20,  -312,     5,  -312,  -312,  -312,  -312,  -312,  -312,
    -312,    93,   -82,  -312,  -312,   248,   -42,  -312,  -312,  -312,
    -312,  -312,    -5,  -312,  -312,   359,  -312,    25,   123
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   215,    51,   159,   279,   340,   216,   217,   218,
     219,   220,   221,   222,    99,   223,    21,    42,   224,    23,
      24,   106,   161,   107,    53,    54,   234,   167,    25,    38,
      26,   130,   131,    79,   115,   132,   133,   245,    82,   246,
     247,   248,   249,    27,   225,   226,   227,   228,   229,   359,
     338,   230,   152,   135,   136,   137,   138,   139,   189,   196,
     140,   141,   179,   254,   200,   201,   202,    28,    40,   203,
     204,   142,   232,    83,    84,   168,   169,    85,    86,   143,
     144,   145,   146,     3,     8,     9,    32,    15,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     103,   134,    14,   177,   101,    14,    81,    14,    14,   155,
      81,    41,    41,   157,    78,   312,    80,   153,    78,   311,
     100,   315,    81,    43,    41,    41,    10,    14,   213,   339,
      78,    35,   110,     1,    10,    10,   270,    33,    41,   283,
      55,    41,   365,    81,   108,   307,    22,   113,   109,   172,
     114,    78,   308,   349,   350,   233,   332,    49,     4,    81,
     379,   101,   158,   333,    22,   207,   291,    78,   347,   303,
     292,     5,   127,   208,    81,   348,     7,    11,   102,    81,
     175,   231,    78,   176,   162,    11,    11,    78,    81,   165,
       6,   166,    52,    81,   325,    30,    78,   325,   310,   250,
     250,    78,   253,   173,   170,   163,   377,    48,   375,   376,
      13,    36,    55,   282,    12,   267,   271,   238,    13,    13,
     241,   362,   269,   278,   280,   206,   239,    81,    11,   239,
      57,   274,   281,    31,    81,    78,    34,   235,    39,    41,
     231,   290,    78,    44,   237,    87,    88,    81,    46,    47,
     385,   386,   387,    50,    56,    78,    17,   255,   194,    93,
      94,    74,   102,   296,   195,   297,    75,    18,    19,    20,
     326,   299,   273,   300,   263,   264,   265,   104,   116,   117,
     118,    11,   105,   285,   286,   287,   288,   112,    36,   190,
     191,   147,   306,   101,   192,    76,   148,   -25,   193,   231,
     -25,   149,   313,    81,   316,   150,   151,   321,   322,   156,
     125,    78,    77,   293,   181,    17,   174,     7,   128,   129,
     250,   182,   328,   250,   178,   330,    18,    19,    20,   242,
     180,   335,   294,   205,   207,   314,   236,   240,    81,   354,
     243,   276,   275,   343,   344,   197,    78,   198,   309,   199,
     285,   286,   287,   288,   277,    -6,   346,   284,    81,   370,
     372,   373,   374,  -107,   -25,   352,    78,    -6,   323,   253,
     295,   357,   342,   360,   361,   383,   384,   259,   260,   261,
     262,   298,   388,   389,   390,  -106,    87,    88,   301,   302,
     317,   231,   231,   289,    89,   351,   318,    90,    91,   154,
      93,    94,    95,   319,   320,    96,    97,   331,   363,   364,
     336,   207,   337,   -19,   341,   209,   353,   345,   356,   366,
     367,   285,   286,   287,   288,   368,   371,   378,   358,   111,
      37,   380,   381,   382,   210,   -25,   164,   211,   102,   252,
     327,   212,    45,   213,   369,   256,    74,   257,   258,   214,
     355,    75,   272,    18,    19,   183,   184,   185,   186,   187,
     304,   188,   171,   116,   117,   118,    11,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,     0,     0,   122,     0,     0,   123,   209,   124,     0,
     -24,     0,     0,   102,     0,   125,     0,    77,     0,     0,
       0,     0,     0,   128,   129,     0,   210,     0,     0,   211,
       0,     0,     0,   212,     0,   213,     0,     0,    74,     0,
       0,   214,     0,    75,     0,    18,    19,     0,     0,     0,
      57,     0,     0,     0,     0,   116,   117,   118,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,   121,     0,     0,   122,     0,     0,   123,     0,
     124,    74,     0,     0,     0,   102,    75,   125,     0,    77,
       0,     0,     0,     0,     0,   128,   129,     0,   116,   117,
     118,    11,     0,     0,    57,     0,     0,     0,     0,     0,
       0,     0,     0,   119,   120,   121,     0,     0,   122,     0,
       0,   123,     0,   124,     0,   175,     0,     0,   176,   244,
     125,     0,    77,     0,     0,    74,     0,     0,   128,   129,
      75,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,     0,   116,   117,   118,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
       0,     0,   122,     0,     0,   123,     0,   124,     0,   175,
      74,     0,   176,   251,   125,    75,    77,     0,     0,     0,
       0,     0,   128,   129,    57,     0,     0,   116,   117,   118,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,     0,     0,   122,     0,     0,
     123,     0,   124,     0,   175,    74,     0,   176,   324,   125,
      75,    77,     0,     0,     0,     0,     0,   128,   129,    57,
       0,     0,   116,   117,   118,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
       0,     0,   122,     0,     0,   123,     0,   124,     0,   175,
      74,     0,   176,   329,   125,    75,    77,     0,     0,     0,
       0,     0,   128,   129,    57,     0,     0,   116,   117,   118,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,     0,     0,   122,     0,     0,
     123,     0,   124,     0,     0,    74,     0,     0,     0,   125,
      75,    77,   126,   127,     0,     0,     0,   128,   129,    57,
       0,     0,   116,   117,   118,    11,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   119,   120,   121,
       0,     0,   122,     0,     0,   123,     0,   124,     0,   175,
      74,     0,   176,     0,   125,    75,    77,     0,     0,     0,
       0,     0,   128,   129,     0,     0,    57,   116,   117,   118,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,     0,     0,   122,     0,     0,
     123,     0,   124,     0,     0,     0,     0,    74,     0,   125,
     266,    77,    75,     0,     0,     0,     0,   128,   129,    57,
       0,     0,     0,     0,   116,   117,   118,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,   121,     0,     0,   122,     0,     0,   123,     0,   124,
      74,     0,   268,     0,     0,    75,   125,     0,    77,     0,
       0,     0,    57,     0,   128,   129,     0,   116,   117,   118,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   119,   120,   121,     0,     0,   122,     0,     0,
     123,     0,   124,    74,     0,     0,     0,     0,    75,   125,
       0,    77,   305,     0,     0,    57,     0,   128,   129,     0,
     116,   117,   118,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   119,   120,   121,     0,     0,
     122,     0,     0,   123,     0,   124,    74,     0,     0,     0,
       0,    75,   125,     0,    77,   334,     0,     0,     0,     0,
     128,   129,     0,   116,   117,   118,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   119,   120,
     121,     0,     0,   122,     0,     0,   123,     0,   124,     0,
       0,     0,     0,     0,     0,   125,     0,    77,     0,     0,
       0,     0,    57,   128,   129,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,     0,    74,     0,     0,    89,     0,    75,    90,
      91,   154,    93,    94,    95,     0,     0,    96,    97,     0,
       0,     0,     0,     0,    87,    88,     0,     0,     0,     0,
       0,     0,    89,     0,     0,    90,    91,    92,    93,    94,
      95,     0,     0,    96,    97,     0,     0,     0,     0,    98,
       0,     0,    57,     0,    77,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    57,    75,     0,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    74,     0,
       0,     0,     0,    75,     0,     0,     0,     0,     0,    98,
       0,     0,    57,     0,    77,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,     0,     0,   160,    75,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77
};

static const yytype_int16 yycheck[] =
{
      44,    77,     7,   131,    43,    10,    39,    12,    13,   100,
      43,     4,     4,   102,    39,   278,    39,    99,    43,   278,
      43,   280,    55,    19,     4,     4,     4,    32,    32,   313,
      55,     4,    55,    36,     4,     4,     4,    12,     4,   216,
      36,     4,   353,    76,    81,    80,     8,    79,    85,   125,
      82,    76,    87,   337,   338,   158,    80,    32,     4,    92,
     371,   100,   106,    87,    26,    81,    81,    92,    80,    85,
      85,     0,    88,   155,   107,    87,    33,    55,    82,   112,
      79,   157,   107,    82,   107,    55,    55,   112,   121,   112,
      79,    83,    85,   126,   296,    79,   121,   299,   275,   175,
     176,   126,   178,   126,    83,    85,   369,    85,   367,   368,
      88,    84,   108,   216,    84,   197,    84,    83,    88,    88,
      83,   351,   198,   212,   213,   145,   168,   160,    55,   171,
       4,   207,   214,    10,   167,   160,    13,   160,     4,     4,
     216,   232,   167,     4,   167,    56,    57,   180,    79,    79,
     380,   381,   382,    79,     4,   180,    31,   180,    69,    70,
      71,    35,    82,    81,    75,    83,    40,    42,    43,    44,
     298,    81,   205,    83,   194,   195,   196,    79,    52,    53,
      54,    55,    79,    65,    66,    67,    68,    86,    84,    67,
      68,    64,   268,   232,    72,    69,    64,    79,    76,   275,
      82,    64,   278,   236,   280,    64,     4,   289,   290,    64,
      84,   236,    86,   236,    74,    31,    88,    33,    92,    93,
     296,    73,   298,   299,    82,   301,    42,    43,    44,    85,
      87,   307,   237,    87,    81,   279,    87,    79,   271,   342,
      88,     4,    80,   319,   320,    84,   271,    86,   271,    88,
      65,    66,    67,    68,     4,    82,   332,    79,   291,   362,
     363,   364,   365,    80,    79,   341,   291,    82,   291,   345,
      79,   347,   316,   349,   350,   378,   379,   190,   191,   192,
     193,    80,   385,   386,   387,    80,    56,    57,    80,    83,
      83,   367,   368,    63,    64,   339,    79,    67,    68,    69,
      70,    71,    72,    64,    64,    75,    76,    85,   352,   353,
      85,    81,    79,    79,    79,     4,    28,    81,    87,    87,
      79,    65,    66,    67,    68,    79,    28,   371,   349,    56,
      17,   375,   376,   377,    23,    79,   108,    26,    82,   176,
     298,    30,    26,    32,   361,   181,    35,   182,   189,    38,
     345,    40,   205,    42,    43,    58,    59,    60,    61,    62,
     267,    64,   114,    52,    53,    54,    55,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    -1,    75,     4,    77,    -1,
      79,    -1,    -1,    82,    -1,    84,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    23,    -1,    -1,    26,
      -1,    -1,    -1,    30,    -1,    32,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,
      77,    35,    -1,    -1,    -1,    82,    40,    84,    -1,    86,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    52,    53,
      54,    55,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    82,    83,
      84,    -1,    86,    -1,    -1,    35,    -1,    -1,    92,    93,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      35,    -1,    82,    83,    84,    40,    86,    -1,    -1,    -1,
      -1,    -1,    92,    93,     4,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    35,    -1,    82,    83,    84,
      40,    86,    -1,    -1,    -1,    -1,    -1,    92,    93,     4,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      35,    -1,    82,    83,    84,    40,    86,    -1,    -1,    -1,
      -1,    -1,    92,    93,     4,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      75,    -1,    77,    -1,    -1,    35,    -1,    -1,    -1,    84,
      40,    86,    87,    88,    -1,    -1,    -1,    92,    93,     4,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      35,    -1,    82,    -1,    84,    40,    86,    -1,    -1,    -1,
      -1,    -1,    92,    93,    -1,    -1,     4,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      75,    -1,    77,    -1,    -1,    -1,    -1,    35,    -1,    84,
      85,    86,    40,    -1,    -1,    -1,    -1,    92,    93,     4,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,    77,
      35,    -1,    80,    -1,    -1,    40,    84,    -1,    86,    -1,
      -1,    -1,     4,    -1,    92,    93,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      75,    -1,    77,    35,    -1,    -1,    -1,    -1,    40,    84,
      -1,    86,    87,    -1,    -1,     4,    -1,    92,    93,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    75,    -1,    77,    35,    -1,    -1,    -1,
      -1,    40,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,
      92,    93,    -1,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    -1,    75,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    -1,    -1,
      -1,    -1,     4,    92,    93,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,
      -1,    -1,    -1,    35,    -1,    -1,    64,    -1,    40,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    76,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    70,    71,
      72,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,     4,    -1,    86,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,     4,    40,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    35,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,     4,    -1,    86,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    84,    40,    86,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    95,   177,     4,     0,    79,    33,   178,   179,
       4,    55,    84,    88,   176,   181,   182,    31,    42,    43,
      44,   110,   112,   113,   114,   122,   124,   137,   161,   179,
      79,   182,   180,   181,   182,     4,    84,   117,   123,     4,
     162,     4,   111,   121,     4,   137,    79,    79,    85,   181,
      79,    97,    85,   118,   119,   121,     4,     4,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    35,    40,    69,    86,   126,   127,
     128,   130,   132,   167,   168,   171,   172,    56,    57,    64,
      67,    68,    69,    70,    71,    72,    75,    76,    81,   108,
     128,   153,    82,    96,    79,    79,   115,   117,    81,    85,
     128,   115,    86,    79,    82,   128,    52,    53,    54,    67,
      68,    69,    72,    75,    77,    84,    87,    88,    92,    93,
     125,   126,   129,   130,   146,   147,   148,   149,   150,   151,
     154,   155,   165,   173,   174,   175,   176,    64,    64,    64,
      64,     4,   146,   166,    69,   108,    64,    97,    96,    98,
      84,   116,   128,    85,   119,   128,    83,   121,   169,   170,
      83,   169,   146,   128,    88,    79,    82,   131,    82,   156,
      87,    74,    73,    58,    59,    60,    61,    62,    64,   152,
      67,    68,    72,    76,    69,    75,   153,    84,    86,    88,
     158,   159,   160,   163,   164,    87,   155,    81,   166,     4,
      23,    26,    30,    32,    38,    96,   101,   102,   103,   104,
     105,   106,   107,   109,   112,   138,   139,   140,   141,   142,
     145,   146,   166,    98,   120,   128,    87,   128,    83,   170,
      79,    83,    85,    88,    83,   131,   133,   134,   135,   136,
     146,    83,   133,   146,   157,   128,   148,   149,   150,   151,
     151,   151,   151,   155,   155,   155,    85,   166,    80,   146,
       4,    84,   129,   130,   146,    80,     4,     4,    97,    99,
      97,   166,    98,   102,    79,    65,    66,    67,    68,    63,
     108,    81,    85,   128,   176,    79,    81,    83,    80,    81,
      83,    80,    83,    85,   165,    87,   146,    80,    87,   128,
     102,   103,   104,   146,    96,   103,   146,    83,    79,    64,
      64,   166,   166,   128,    83,   134,   131,   136,   146,    83,
     146,    85,    80,    87,    87,   146,    85,    79,   144,    99,
     100,    79,    96,   146,   146,    81,   146,    80,    87,    99,
      99,    96,   146,    28,    98,   157,    87,   146,   105,   143,
     146,   146,   100,    96,    96,   142,    87,    79,    79,   144,
      98,    28,    98,    98,    98,   103,   103,   104,    96,   142,
      96,    96,    96,    98,    98,   100,   100,   100,    98,    98,
      98
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    98,    99,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   104,   105,   106,   106,   106,   106,
     107,   108,   108,   108,   108,   108,   108,   109,   110,   111,
     111,   111,   112,   112,   113,   113,   114,   115,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   123,   124,   124,   125,   126,   126,   126,   126,
     126,   126,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   128,   128,
     128,   129,   129,   129,   130,   131,   131,   131,   131,   131,
     131,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   137,   137,   138,   139,   139,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   143,   144,   145,
     145,   145,   145,   145,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   151,
     152,   152,   152,   152,   152,   152,   153,   153,   153,   153,
     153,   153,   154,   154,   155,   155,   155,   155,   155,   155,
     155,   156,   157,   157,   157,   158,   159,   160,   160,   160,
     160,   160,   160,   161,   162,   163,   164,   164,   164,   165,
     166,   166,   167,   168,   168,   168,   168,   169,   169,   170,
     170,   171,   172,   173,   173,   174,   174,   174,   174,   174,
     174,   175,   175,   175,   175,   175,   175,   176,   177,   178,
     178,   178,   179,   179,   180,   180,   180,   181,   181,   181,
     182
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     0,     0,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     4,     4,
       3,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       4,     3,     1,     1,     5,     6,     3,     1,     2,     3,
       1,     2,     3,     4,     1,     3,     2,     3,     1,     1,
       3,     4,     1,     3,     2,     2,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     2,     2,     3,     3,     4,
       4,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     1,     2,     1,
       2,     5,     7,     7,     7,     9,     9,     0,     0,    11,
       7,     4,    11,    11,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     3,     0,     3,     5,     2,     3,     3,     4,     4,
       5,     6,     7,     2,     2,     4,     2,     3,     4,     3,
       1,     3,     5,     4,     4,     3,     3,     2,     3,     3,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       3,     2,     4,     2,     0,     3,     2,     2,     2,     1,
       1
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
#line 24 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "SourceFile: PackageClause M_semicolon ImportDeclList TopLevelDeclList \n");}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 28 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Block: M_lcurly OPENB StatementList CLOSEB M_rcurly \n");}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 31 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "OPENB: \n");}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 35 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "CLOSEB: \n");}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 39 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BrkBlk: \n");}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 42 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BrkBlkEnd: \n");}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 46 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "StatementList: StatementList Statement M_semicolon \n");}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 47 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "StatementList: Statement M_semicolon \n");}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 51 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: Declaration \n");}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 52 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: LabeledStmt \n");}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 53 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: SimpleStmt \n");}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 54 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: ReturnStmt \n");}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 55 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: BreakStmt \n");}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 56 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: ContinueStmt \n");}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 58 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: Block \n");}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 59 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: IfStmt \n");}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 62 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Statement: ForStmt \n");}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 66 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "SimpleStmt: EmptyStmt \n");}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 67 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "SimpleStmt: ExpressionStmt \n");}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 69 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "SimpleStmt: IncDecStmt \n");}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 70 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "SimpleStmt: Assignment \n");}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 71 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "SimpleStmt: ShortVarDecl \n");}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 74 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "EmptyStmt: \n");}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 80 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ExpressionStmt: Expression\n");}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 84 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IncDecStmt: Expression Op_unary_add \n");}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 85 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IncDecStmt: Expression Op_unary_sub\n");}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 86 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IncDecStmt: Expression Op_add Op_assign Expression \n");}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 87 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IncDecStmt: Expression Op_sub Op_assign Expression \n");}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 91 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Assignment: ExpressionList ASN_OP ExpressionList \n");}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 102 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ASN_OP: Op_add Op_assign \n");}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 103 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ASN_OP: Op_sub Op_assign \n");}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 104 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ASN_OP: Op_pow Op_assign \n");}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 105 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ASN_OP: MUL_OP Op_assign \n");}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 106 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ASN_OP: MUL_OP Op_assign \n");}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ASN_OP: Op_assign \n");}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 112 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ShortVarDecl: ExpressionList Op_equality ExpressionList\n");}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 116 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarDecl: Key_var VarSpec \n");}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 120 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarSpec: IdentifierList Type \n");}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 121 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarSpec: IdentifierList Type ASN_OP ExpressionList \n");}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 122 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarSpec: IdentifierList ASN_OP ExpressionList \n");}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 126 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Declaration: TypeDecl \n");}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 127 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Declaration: VarDecl \n");}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 131 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "FunctionDecl: Key_func Identifier OPENB Signature CLOSEB\n");}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 132 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "FunctionDecl: Key_func Identifier OPENB Signature Block CLOSEB \n");}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 136 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ClassDecl : Key_class Identifier Block\n");}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 140 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Signature: Parameters\n");}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 141 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Signature: Parameters Result \n");}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 145 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Result: M_lparan TypeList M_rparan\n");}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 146 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Result: Type \n");}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Parameters: M_lparan M_rparan \n");}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 151 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Parameters: M_lparan ParameterList M_rparan \n");}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 152 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Parameters: M_lparan ParameterList M_comma M_rparan \n");}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 156 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ParameterList: ParameterDecl \n");}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 157 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ParameterList: ParameterList M_comma ParameterDecl \n");}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 161 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ParameterDecl: IdentifierList Type \n");}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 165 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TypeList: TypeList M_comma Type \n");}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 166 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TypeList: Type \n");}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 170 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IdentifierList: Identifier \n");}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 171 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IdentifierList: IdentifierList M_comma Identifier \n");}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 179 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MethodDecl: Key_func Receiver Identifier Signature \n");}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 183 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Receiver: Parameters \n");}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 187 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TopLevelDeclList: TopLevelDeclList TopLevelDecl M_semicolon \n");}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 188 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TopLevelDeclList: TopLevelDecl M_semicolon \n");}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 192 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "CompositeLit: LiteralType LiteralValue \n");}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 196 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralType: StructType\n");}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 197 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralType: ArrayType\n");}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 198 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralType: PointerType\n");}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 199 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralType: M_lsqbracket DOTS M_rsqbracket Operand\n");}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 200 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralType: SliceType\n");}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 201 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralType: MapType\n");}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 205 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_int16");}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 206 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_int8");}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 207 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_int32");}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 208 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_int64");}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 209 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_int");}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 210 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_bool");}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 211 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_string");}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 212 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_uint");}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 213 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_uint16");}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 214 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_uint32");}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 215 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_uint64");}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 216 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_uintptr");}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 217 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_float32");}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 218 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_float64");}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 219 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_complex64");}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 220 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "VarType: T_complex128");}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 224 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Type: LiteralType \n");}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 225 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Type: OperandName \n");}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 226 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Type: VarType \n");}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 230 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Operand: Literal \n");}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 231 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Operand: OperandName \n");}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 232 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Operand: M_lparan Expression M_rparan\n");}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 236 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "OperandName: Identifier \n");}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 240 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralValue: M_lcurly M_rcurly \n");}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 241 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralValue: M_semicolon M_rcurly \n");}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 242 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralValue: M_lcurly ElementList M_rcurly \n");}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 243 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralValue: M_semicolon ElementList M_rcurly \n");}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 244 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralValue: M_lcurly ElementList M_comma M_rcurly \n");}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 245 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LiteralValue: M_semicolon ElementList M_comma M_rcurly \n");}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 249 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "SliceType: M_lsqbracket M_rsqbracket Type \n");}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 253 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ElementList: KeyedElement \n");}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 254 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ElementList: ElementList M_comma KeyedElement \n");}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 258 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "KeyedElement: Element \n");}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 259 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "KeyedElement: Key M_colon Element \n");}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 263 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Key: Expression \n");}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 264 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Key: LiteralValue \n");}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 268 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Element: Expression \n");}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 269 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Element: LiteralValue \n");}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 273 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TopLevelDecl: Declaration \n");}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 274 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TopLevelDecl: FunctionDecl \n");}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 275 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TopLevelDecl: MethodDecl \n");}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 276 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TopLevelDecl : ClassDecl \n");}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 280 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "LabeledStmt: Identifier M_colon Statement \n");}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 284 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ReturnStmt: Key_return \n");}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 285 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ReturnStmt: Key_return ExpressionList \n");}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 289 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BreakStmt: Key_break \n");}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 290 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BreakStmt: Key_break Identifier \n");}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 294 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ContinueStmt: Key_continue \n");}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 295 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ContinueStmt: Key_continue Identifier \n");}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 299 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IfStmt: Key_if OPENB Expression Block CLOSEB \n");}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 300 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IfStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block CLOSEB \n");}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 301 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IfStmt: Key_if OPENB Expression Block Key_else Block CLOSEB \n");}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 302 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IfStmt: Key_if OPENB Expression Block Key_else IfStmt CLOSEB \n");}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 303 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IfStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else IfStmt CLOSEB \n");}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 304 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "IfStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB \n");}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 308 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "EmptyExpr: \n");}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 312 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Empty: \n");}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 316 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, " \n");}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 317 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ForStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB \n");}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 318 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ForStmt: Key_for BrkBlk Block BrkBlkEnd\n");}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 319 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ForStmt: Key_for OPENB SimpleStmt M_semicolon BrkBlk EmptyExpr M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB \n");}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 320 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ForStmt: Key_for OPENB EmptyStmt Empty BrkBlk Expression Empty EmptyStmt Block BrkBlkEnd CLOSEB \n");}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 330 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression: Expression1 \n");}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 334 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression1: Expression1 Op_relational_or Expression2 \n");}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 335 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression1: Expression2 \n");}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 339 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression2: Expression2 Op_relational_and Expression3 \n");}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 340 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression2: Expression3 \n");}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 344 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression3: Expression3 REL_OP Expression4\n");}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 345 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression3: Expression4 \n");}
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 349 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression4: Expression4 Op_unary_or Expression5 \n");}
#line 2710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 352 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression4: Expression4 D4 Expression5 \n");}
#line 2716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 353 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression4: Expression5 \n");}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 358 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression5: Expression5 MUL_OP PrimaryExpr \n");}
#line 2728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 359 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression5: Expression5 Op_unary_and PrimaryExpr \n");}
#line 2734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 360 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression5: Expression5 Op_mult PrimaryExpr \n");}
#line 2740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 361 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Expression5: UnaryExpr \n");}
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 371 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "REL_OP: Op_assign \n");}
#line 2752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 372 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "REL_OP: Op_not_equal\n");}
#line 2758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 373 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "REL_OP: Op_less \n");}
#line 2764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 374 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "REL_OP: Op_greater \n");}
#line 2770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 375 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "REL_OP: Op_greater_eq \n");}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 376 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "REL_OP: Op_less_eq \n");}
#line 2782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 380 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MUL_OP: Op_mult \n");}
#line 2788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 381 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MUL_OP: Op_divide \n");}
#line 2794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 382 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MUL_OP: Op_mod \n");}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 383 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MUL_OP: Op_less_less \n");}
#line 2806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 384 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MUL_OP: Op_greater_greater \n");}
#line 2812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 385 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MUL_OP: Op_unary_and \n");}
#line 2818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 390 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryExpr: PrimaryExpr \n");}
#line 2824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 391 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryExpr: UnaryOp PrimaryExpr \n");}
#line 2830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 395 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PrimaryExpr: Operand \n");}
#line 2836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 396 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PrimaryExpr: PrimaryExpr Selector \n");}
#line 2842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 397 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PrimaryExpr: PrimaryExpr Index \n");}
#line 2848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 398 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PrimaryExpr: PrimaryExpr Slice \n");}
#line 2854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 399 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PrimaryExpr: PrimaryExpr TypeAssertion \n");}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 400 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PrimaryExpr: PrimaryExpr Arguments \n");}
#line 2866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 401 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PrimaryExpr: OperandName StructLiteral \n");}
#line 2872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 405 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "StructLiteral: M_lcurly KeyValList M_rcurly \n");}
#line 2878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 409 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "KeyValList: \n");}
#line 2884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 410 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "KeyValList: Expression M_colon Expression \n");}
#line 2890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 411 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "KeyValList: Expression M_colon Expression M_comma KeyValList \n");}
#line 2896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 415 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Selector: M_dot Identifier \n");}
#line 2902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 419 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Index: M_lsqbracket Expression M_rsqbracket \n");}
#line 2908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 423 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Slice: M_lsqbracket M_colon M_rsqbracket \n");}
#line 2914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 424 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Slice: M_lsqbracket M_colon Expression M_rsqbracket \n");}
#line 2920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 425 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Slice: M_lsqbracket Expression M_colon M_rsqbracket \n");}
#line 2926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 426 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Slice: M_lsqbracket Expression M_colon Expression M_rsqbracket \n");}
#line 2932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 427 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Slice: M_lsqbracket M_colon Expression M_colon Expression M_rsqbracket \n");}
#line 2938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 428 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Slice: M_lsqbracket Expression M_colon Expression M_colon Expression M_rsqbracket \n");}
#line 2944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 432 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TypeDecl: Key_type TypeSpec \n");}
#line 2950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 436 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TypeSpec: Identifier Type \n");}
#line 2956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 440 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "TypeAssertion: M_dot M_lparan Type M_rparan \n");}
#line 2962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 444 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Arguments: M_lparan M_rparan \n");}
#line 2968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 445 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Arguments: M_lparan ExpressionList M_rparan \n");}
#line 2974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 446 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Arguments: M_lparan ExpressionList DOTS M_rparan \n");}
#line 2980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 450 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "DOTS: M_dot M_dot M_dot \n");}
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 454 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ExpressionList: Expression \n");}
#line 2992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 455 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ExpressionList: ExpressionList M_comma Expression \n");}
#line 2998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 459 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "MapType: Key_map M_lsqbracket Type M_rsqbracket Type \n");}
#line 3004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 463 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "StructType: Key_struct M_lcurly FieldDeclList M_rcurly\n");}
#line 3010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 464 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "StructType: Key_struct M_semicolon FieldDeclList M_rcurly \n");}
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 465 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "StructType: Key_struct M_lcurly M_rcurly \n");}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 466 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "StructType: Key_struct M_semicolon M_rcurly \n");}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 470 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "FieldDeclList: FieldDecl M_semicolon \n");}
#line 3034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 471 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "FieldDeclList: FieldDeclList FieldDecl M_semicolon \n");}
#line 3040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 475 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "FieldDecl: IdentifierList Type String \n");}
#line 3046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 476 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "FieldDecl: IdentifierList Type \n");}
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 480 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PointerType: Op_mult Type \n");}
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 484 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ArrayType: M_lsqbracket Expression M_rsqbracket Type \n");}
#line 3064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 488 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Literal: BasicLit \n");}
#line 3070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 489 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "Literal: CompositeLit \n");}
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 493 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BasicLit: Int_lit \n");}
#line 3082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 494 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BasicLit: Float_lit \n");}
#line 3088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 495 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BasicLit: String \n");}
#line 3094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 496 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BasicLit: Bool_true \n");}
#line 3100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 497 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BasicLit: Bool_false \n");}
#line 3106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 498 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "BasicLit: Imaginary_lit \n");}
#line 3112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 502 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryOp: Op_add \n");}
#line 3118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 503 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryOp: Op_sub \n");}
#line 3124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 504 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryOp: Op_unary_not \n");}
#line 3130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 505 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryOp: Op_pow \n");}
#line 3136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 506 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryOp: Op_mult \n");}
#line 3142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 507 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "UnaryOp: Op_unary_and \n");}
#line 3148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 520 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "String: String_lit \n");}
#line 3154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 524 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "PackageClause: Key_package Identifier \n");}
#line 3160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 528 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportDeclList: \n");}
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 529 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportDeclList: ImportDeclList ImportDecl M_semicolon \n");}
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 530 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportDeclList: ImportDecl M_semicolon \n");}
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 534 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportDecl: Key_import M_lparan ImportSpecList M_rparan \n");}
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 535 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportDecl: Key_import ImportSpec \n");}
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 539 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportSpecList: \n");}
#line 3196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 540 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportSpecList: ImportSpecList ImportSpec M_semicolon \n");}
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 541 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportSpecList: ImportSpec M_semicolon \n");}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 545 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportSpec: Identifier ImportPath \n");}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 546 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportSpec: M_dot ImportPath \n");}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 547 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportSpec: ImportPath \n");}
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 551 "src/lexer.y" /* yacc.c:1646  */
    {fprintf(f, "ImportPath: String \n");}
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3236 "y.tab.c" /* yacc.c:1646  */
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
#line 555 "src/lexer.y" /* yacc.c:1906  */

void yyerror (char * s){
	fprintf(stderr, "%s\n", s);
}
char result[100000];

char *strrev(char *str)
{
    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

char *reduce( char *s, char *oldW, char *newW)
{
    int i, cnt = 0;int flag=0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);
    strrev(s);
    strrev(oldW);
    strrev(newW);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (strstr(&s[i], oldW) == &s[i])
        {
            cnt++;
            i += oldWlen - 1;
            break;
        }
    }

    i = 0;
    while (*s)
    {
        if (strstr(s, oldW) == s && flag==0)
        {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
            flag++;
        }
        else
            result[i++] = *s++;
    }

    result[i] = '\0';
    strrev(result);
    return result;
}



void printing () {



FILE *fp1=fopen("Penultimate.txt","r");

FILE *fp2=fopen("Penultimate.txt","r");;

FILE *fp=fopen(outputfilename,"w");

char s[100000];

fprintf(fp,"<!DOCTYPE html>\n<html>\n<head>\n<title>RSF</title>\n</head>\n<body>\n");
fprintf(fp,"SourceFile->");



 char * line = NULL;
 char * next_line = NULL;
 size_t len = 0;
 ssize_t read;



int a=getline( & line, & len, fp1);

a=getline( & next_line, & len, fp2);
a=getline( & next_line, & len, fp2);

char* html=strtok(next_line,":");
char temp[100]="<b>";
strcat(temp,html);
strcat(temp,"</b>");

char * left = strtok(line, ":");
char* right = strtok(NULL, "\n");

char ss[] = "SourceFile";
char empty[]="";

strcpy(s,reduce(ss,left,right));
strcpy(s,reduce(s,html,temp));

fprintf(fp,"%s\n",s);
fprintf(fp,"<br><br>");
int i=0;
while ((read = getline( & line, & len, fp1)) != -1) {

        left = strtok(line, ":");
        right = strtok(NULL, "\n");
        printf("%d\n",i++ );
        printf("left=%s    ",left);
        char temp1[100]="<b>";
	strcat(temp1,left);
	strcat(temp1,"</b>");
        if(right==NULL){right=empty;}
        printf("right=%s\n",right);
        strcpy(s,reduce(s,temp1,right));

	a=getline( & next_line, & len, fp2);
	if(a!=-1)
{
	html=strtok(next_line,":");
	char temp2[100]="<b>";
	strcat(temp2,html);
	strcat(temp2,"</b>");
	strcpy(s,reduce(s,html,temp2));
}
	 fprintf(fp,"->%s\n",s);
	fprintf(fp,"<br><br>");
    }

fprintf(fp,"\n</body>\n</html>");

    fclose(fp);
    fclose(fp1);
    fclose(fp2);


    return ;
}

char outputfile[100];

int main(int argc, char **argv){
	f = fopen("Rules.txt","w");
	FILE * fp;
	if (argc == 2 && (fp = fopen (argv[1], "r")))
		yyin = fp;
	else{
		printf("Unable to open file \n");
		return 1;
	}
  char * outputfilename2;
  outputfilename = (char *)malloc(100*sizeof(char));
  outputfilename2 = (char *)malloc(100*sizeof(char));
  strcpy(outputfile,argv[1]);
  outputfilename2 = strtok(outputfile,"/");
  outputfilename = strtok(NULL,".");
  strcat(outputfilename, ".html");
	yyin = fopen(argv[1],"r");
	yyparse();
	fclose(yyin);
	fclose(f);
	char a[] = "tac Rules.txt > Penultimate.txt";
	system(a);
	printing();
	return 0;
}
