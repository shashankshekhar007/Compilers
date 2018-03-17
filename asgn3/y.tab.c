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
#define YYLAST   940

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  90
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  369

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
       0,    22,    22,    26,    30,    34,    37,    40,    44,    45,
      49,    50,    51,    52,    53,    54,    56,    57,    60,    64,
      65,    67,    68,    69,    72,    77,    81,    82,    83,    84,
      88,    92,    93,    94,    95,    99,   100,   101,   105,   109,
     113,   114,   115,   119,   120,   124,   125,   129,   130,   134,
     135,   139,   140,   141,   145,   146,   150,   154,   155,   159,
     160,   168,   172,   176,   177,   181,   185,   186,   187,   188,
     189,   190,   194,   195,   199,   200,   201,   205,   209,   210,
     211,   212,   213,   214,   218,   222,   223,   227,   228,   232,
     233,   237,   238,   242,   243,   244,   248,   252,   253,   257,
     258,   262,   263,   267,   268,   269,   270,   271,   272,   275,
     279,   284,   285,   286,   287,   288,   298,   302,   303,   307,
     308,   312,   313,   317,   318,   319,   323,   324,   325,   326,
     330,   331,   332,   336,   337,   338,   339,   340,   341,   345,
     346,   347,   348,   349,   350,   355,   356,   360,   361,   362,
     363,   364,   365,   366,   370,   373,   375,   376,   380,   384,
     388,   389,   390,   391,   392,   393,   397,   401,   405,   409,
     410,   411,   415,   419,   420,   424,   428,   429,   430,   431,
     435,   436,   440,   441,   445,   449,   453,   454,   458,   459,
     460,   461,   462,   463,   467,   468,   469,   470,   474,   475,
     476,   477,   478,   479,   483,   487,   491,   492,   493,   497,
     498,   501,   503,   504,   508,   509,   510,   514
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
  "Assignment", "ADD_OP", "ASN_OP", "ShortVarDecl", "VarDecl", "VarSpec",
  "Declaration", "FunctionDecl", "Signature", "Result", "Parameters",
  "ParameterList", "ParameterDecl", "TypeList", "IdentifierList",
  "MethodDecl", "Receiver", "TopLevelDeclList", "CompositeLit",
  "LiteralType", "Type", "Operand", "OperandName", "LiteralValue",
  "SliceType", "ElementList", "KeyedElement", "Key", "Element",
  "TopLevelDecl", "LabeledStmt", "ReturnStmt", "BreakStmt", "ContinueStmt",
  "IfStmt", "EmptyExpr", "Empty", "ForStmt", "Expression", "Expression1",
  "Expression2", "Expression3", "Expression4", "Expression5", "D4",
  "REL_OP", "MUL_OP", "UnaryExpr", "PrimaryExpr", "StructLiteral",
  "KeyValList", "Selector", "Index", "Slice", "TypeDecl", "TypeSpec",
  "TypeAssertion", "Arguments", "DOTS", "ExpressionList", "MapType",
  "StructType", "FieldDeclList", "FieldDecl", "PointerType", "ArrayType",
  "Literal", "BasicLit", "UnaryOp", "UN_OP", "String", "PackageClause",
  "ImportDeclList", "ImportDecl", "ImportSpecList", "ImportSpec",
  "ImportPath", YY_NULLPTR
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

#define YYPACT_NINF -258

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-258)))

#define YYTABLE_NINF -91

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    29,    68,     8,  -258,  -258,    85,    62,    -2,    81,
      74,  -258,    46,    74,  -258,  -258,  -258,     1,   143,   162,
    -258,  -258,  -258,  -258,    38,   103,  -258,   114,  -258,  -258,
       9,   125,  -258,  -258,    19,  -258,   206,   127,  -258,  -258,
    -258,   822,   136,  -258,  -258,  -258,   137,  -258,   145,  -258,
      63,  -258,   105,   145,  -258,   135,    86,   127,   518,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,  -258,   127,  -258,  -258,  -258,  -258,  -258,   241,   187,
     784,   864,   188,  -258,  -258,   178,   260,    26,  -258,  -258,
    -258,   127,    39,    41,  -258,  -258,  -258,  -258,  -258,  -258,
     127,  -258,  -258,  -258,   784,   127,   174,  -258,  -258,  -258,
     130,  -258,   186,   183,   200,   207,   375,   108,   167,  -258,
    -258,   113,   192,  -258,  -258,   263,  -258,  -258,  -258,  -258,
    -258,   202,  -258,   784,  -258,  -258,  -258,  -258,   127,  -258,
    -258,  -258,  -258,   197,  -258,   105,    44,   211,  -258,    50,
     201,  -258,   204,     7,   374,  -258,   784,  -258,   127,   784,
     784,  -258,  -258,  -258,  -258,  -258,  -258,   784,  -258,  -258,
    -258,   784,   784,   263,   263,   263,   608,   655,    22,  -258,
    -258,  -258,  -258,  -258,   263,   113,   784,   202,   331,  -258,
      92,  -258,   127,    74,  -258,   214,  -258,  -258,  -258,  -258,
    -258,   216,   100,  -258,   224,  -258,   229,  -258,   163,   230,
     237,  -258,   207,   375,   108,   167,   167,   113,   113,   113,
    -258,    73,   698,   -52,  -258,   127,  -258,  -258,  -258,   243,
     317,   320,   248,  -258,   784,  -258,   259,   246,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,   240,   843,   127,  -258,  -258,  -258,  -258,   428,  -258,
     563,   473,  -258,   784,  -258,  -258,   252,  -258,    52,   741,
    -258,   254,   331,  -258,  -258,   784,   178,   784,   202,   250,
     261,  -258,  -258,  -258,   278,   284,   784,   784,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,   269,  -258,   784,  -258,  -258,
      76,  -258,  -258,   274,   279,   314,  -258,   280,   322,  -258,
    -258,   784,   784,   202,   202,   784,   273,   784,  -258,  -258,
    -258,   178,  -258,   784,   334,  -258,  -258,  -258,  -258,   277,
     784,   784,  -258,   178,   -11,  -258,  -258,   286,   288,  -258,
    -258,  -258,   340,  -258,  -258,   784,   784,  -258,  -258,   -11,
    -258,  -258,  -258,   178,   178,   178,  -258,  -258,  -258,  -258,
    -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258,  -258
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   205,     1,   206,     0,     0,     0,
       0,   204,   211,     0,   217,   210,   216,     0,     0,     0,
      44,    93,    94,    95,     2,     0,    43,     0,   208,   214,
       0,     0,   215,     4,     0,    62,     0,     0,   166,    59,
      39,     0,     0,    64,   207,   209,     0,   213,     0,    51,
       0,    54,     0,     0,    77,     0,     0,     0,     0,    72,
     167,    73,    70,    71,    66,    68,    67,   143,   142,    37,
      31,    32,   139,   140,   141,    34,   144,    33,     0,     0,
       0,    40,     0,    63,   212,     5,    47,     0,    52,    56,
      61,     0,     0,     0,   184,   193,   189,   188,   130,   131,
     197,   132,   196,   200,     0,     0,     0,   191,   192,   187,
       0,   147,    75,     0,   116,   118,   120,   122,   125,   195,
     129,   145,     0,    74,   186,     0,   194,   190,    60,    35,
     173,    42,   139,     0,    36,     4,     5,    45,     0,    48,
      50,    53,    55,     0,   179,     0,     0,     0,   178,     0,
       0,    84,     0,     0,     0,    65,   155,   153,     0,     0,
       0,   136,   135,   137,   138,   134,   133,     0,   130,   131,
     132,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     149,   150,   151,   152,     0,   146,     0,    41,    24,    46,
       0,    58,     0,   183,   177,     0,   180,   176,    76,   172,
      79,    92,     0,    85,     0,    87,    91,    78,     0,     0,
       0,   185,   117,   119,   121,   123,   124,   128,   127,   126,
     169,     0,     0,     0,   158,     0,    69,    75,   174,    77,
      99,   101,     4,     4,    97,    16,     5,     0,    12,    19,
      20,    21,    22,    23,    10,    11,    13,    14,    15,    17,
      18,   173,     0,     0,    49,   175,   182,   181,     0,    81,
       0,     0,    80,     0,   154,   170,     0,   160,     0,     0,
     159,     0,    24,   100,   102,    24,     0,    24,    98,     0,
       0,     9,    26,    27,     0,     0,     0,     0,    57,    83,
      86,    92,    88,    91,    82,   156,   171,     0,   161,   162,
       0,   168,    96,     0,   110,   173,     7,     0,   173,     3,
       8,     0,     0,    38,    30,   155,     0,     0,   163,     6,
       6,     0,   113,     0,     5,    28,    29,   157,   164,     0,
     109,     0,     7,     0,     0,   103,   165,     0,     0,    25,
     110,     5,     5,     5,     5,    24,    24,    24,   112,     0,
     104,   105,   106,     0,     0,     0,     5,     5,     7,     7,
       7,   108,   107,     5,     5,     5,   111,   114,   115
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -258,  -258,   -78,  -125,  -116,  -168,  -189,  -258,  -209,  -139,
    -231,    40,  -258,  -258,  -258,   -80,  -258,  -258,  -258,    28,
    -258,   319,  -258,   358,  -258,   289,  -258,   107,  -258,  -258,
    -258,  -258,   -33,    -3,   193,   -35,  -107,  -258,   238,     0,
    -258,   131,   370,  -258,  -258,  -258,  -258,  -257,  -258,    55,
    -258,   -58,  -258,   251,   242,   244,    16,   -99,  -258,  -102,
    -258,    60,  -258,    82,  -258,  -258,  -258,  -258,  -258,  -258,
    -258,   184,   -55,  -258,  -258,   323,   120,  -258,  -258,  -258,
    -258,  -258,  -258,     2,  -258,  -258,   399,  -258,    43,   268
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,   235,    48,   137,   276,   322,   236,   237,   238,
     239,   240,   241,   242,    79,    80,   243,    20,    40,   244,
      22,    85,   139,    86,    50,    51,   190,   145,    23,    36,
      24,   109,   110,    94,   111,   112,   201,    62,   202,   203,
     204,   205,    25,   245,   246,   247,   248,   249,   338,   320,
     250,   130,   114,   115,   116,   117,   118,   119,   167,    82,
     120,   121,   157,   210,   179,   180,   181,    26,    38,   182,
     183,   122,   252,    63,    64,   146,   147,    65,    66,   123,
     124,   125,   126,   127,     3,     8,     9,    30,    15,    16
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     113,   133,    61,   155,    59,    33,    61,   136,    59,    14,
     188,    54,    14,    10,    14,    14,   175,    61,   172,    59,
     189,   233,    61,    39,    59,   131,   224,   280,   269,    17,
      39,     7,    14,     4,    60,   270,    21,    61,    81,    59,
      18,    19,    55,    39,   304,    39,   150,    56,    39,    89,
      10,    61,    21,    59,    39,    31,    61,     1,    59,    95,
      96,    97,    11,   302,    11,    61,    10,    59,     5,    17,
      61,   135,    59,    46,    98,    99,   100,   344,   187,   101,
      18,    19,   102,   140,   103,    34,   153,     6,   143,   154,
     200,   104,   357,    58,    45,   206,   206,    13,   209,   107,
     108,    11,   151,    61,    49,    59,   225,   275,   277,    54,
      61,   141,    59,   175,   175,   172,   355,    11,     7,   223,
     279,   221,   144,    61,   148,    59,    41,   194,   228,    11,
     251,    54,   297,   197,    13,   191,   303,   321,   307,   298,
      55,    52,   193,   341,    87,    56,    12,    37,    88,   227,
      13,   330,   331,   291,   186,   211,   317,    61,   265,    59,
      28,   106,    55,   318,   268,    92,    39,    56,    93,   363,
     364,   365,   287,   253,    57,   168,   169,   254,   251,   278,
     170,   258,    43,   259,   171,   185,    78,   215,   216,   255,
      61,    58,    59,    44,    52,   256,    57,   176,   306,   177,
     206,   178,   293,   206,    47,   295,   353,   354,   335,   153,
      53,   300,   154,    58,   251,    83,    84,   305,    61,   308,
      59,    91,   271,    67,    68,   348,   350,   351,   352,    34,
     324,   313,   314,   217,   218,   219,   173,    73,    74,   316,
     361,   362,   174,   332,   261,   128,   262,   366,   367,   368,
     288,   129,   134,   325,   326,   342,   343,   209,   290,   329,
     135,   290,   152,   229,    54,   333,   195,    54,   156,   195,
     158,   356,   339,   340,   159,   358,   359,   360,    29,   184,
     160,    32,   230,   186,   192,   231,   198,   251,   251,   232,
     196,   233,   199,   257,    55,    55,   -90,   234,    55,    56,
      56,    18,    19,    56,   260,   282,   283,   284,   285,   -89,
     263,    95,    96,    97,    11,    95,    96,    97,    11,   -25,
     264,   273,   -25,   272,   274,   281,    98,    99,   100,    57,
      -6,   101,    57,   309,   102,   229,   103,   296,   -24,   301,
     310,   135,   311,   104,   138,    58,    58,   104,   312,    58,
     315,   107,   108,   319,   230,   107,   108,   231,   -19,   323,
     328,   232,   334,   233,   336,   345,    55,   346,   349,   234,
     337,    56,    90,    18,    19,    35,   142,   226,    54,   282,
     283,   284,   285,    95,    96,    97,    11,   282,   283,   284,
     285,   292,   208,   -25,    42,   347,    -6,   327,    98,    99,
     100,   -25,   213,   101,   135,   266,   102,    27,   103,    55,
     212,   214,     0,   135,    56,   104,   149,    58,     0,     0,
       0,     0,     0,   107,   108,     0,    95,    96,    97,    11,
       0,     0,    54,   161,   162,   163,   164,   165,     0,   166,
       0,    98,    99,   100,     0,     0,   101,     0,     0,   102,
       0,   103,     0,   153,     0,     0,   154,   207,   104,     0,
      58,     0,     0,    55,     0,     0,   107,   108,    56,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
      95,    96,    97,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,     0,     0,
     101,     0,     0,   102,     0,   103,     0,   153,    55,     0,
     154,   289,   104,    56,    58,     0,     0,     0,     0,     0,
     107,   108,    54,     0,     0,    95,    96,    97,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,     0,     0,   101,     0,     0,   102,     0,
     103,     0,   153,    55,     0,   154,   294,   104,    56,    58,
       0,     0,     0,     0,     0,   107,   108,    54,     0,     0,
      95,    96,    97,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,     0,     0,
     101,     0,     0,   102,     0,   103,     0,     0,    55,     0,
       0,     0,   104,    56,    58,   105,   106,     0,     0,     0,
     107,   108,    54,     0,     0,    95,    96,    97,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,     0,     0,   101,     0,     0,   102,     0,
     103,     0,   153,    55,     0,   154,     0,   104,    56,    58,
       0,     0,     0,     0,     0,   107,   108,     0,     0,    54,
      95,    96,    97,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,     0,     0,
     101,     0,     0,   102,     0,   103,     0,     0,     0,     0,
      55,     0,   104,   220,    58,    56,     0,     0,     0,     0,
     107,   108,    54,     0,     0,     0,     0,    95,    96,    97,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    99,   100,     0,     0,   101,     0,     0,
     102,     0,   103,    55,     0,   222,     0,     0,    56,   104,
       0,    58,     0,     0,     0,    54,     0,   107,   108,     0,
      95,    96,    97,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,     0,     0,
     101,     0,     0,   102,     0,   103,    55,     0,     0,     0,
       0,    56,   104,     0,    58,   267,     0,     0,    54,     0,
     107,   108,     0,    95,    96,    97,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,     0,     0,   101,     0,     0,   102,     0,   103,    55,
       0,     0,     0,     0,    56,   104,    54,    58,   299,     0,
       0,     0,     0,   107,   108,     0,    95,    96,    97,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,     0,     0,   101,    55,     0,   102,
       0,   103,    56,     0,     0,     0,     0,     0,   104,     0,
      58,     0,     0,     0,     0,     0,   107,   108,    67,    68,
       0,     0,     0,     0,     0,     0,    69,     0,     0,    70,
      71,    72,    73,    74,    75,     0,     0,    76,    77,    67,
      68,     0,     0,    78,     0,     0,   286,    69,    58,     0,
      70,    71,   132,    73,    74,    75,     0,     0,    76,    77,
      67,    68,     0,     0,   186,     0,     0,     0,    69,     0,
       0,    70,    71,   132,    73,    74,    75,     0,     0,    76,
      77
};

static const yytype_int16 yycheck[] =
{
      58,    81,    37,   110,    37,     4,    41,    85,    41,     7,
     135,     4,    10,     4,    12,    13,   118,    52,   117,    52,
     136,    32,    57,     4,    57,    80,     4,   236,    80,    31,
       4,    33,    30,     4,    37,    87,     8,    72,    41,    72,
      42,    43,    35,     4,   275,     4,   104,    40,     4,    52,
       4,    86,    24,    86,     4,    12,    91,    36,    91,    52,
      53,    54,    55,   272,    55,   100,     4,   100,     0,    31,
     105,    82,   105,    30,    67,    68,    69,   334,   133,    72,
      42,    43,    75,    86,    77,    84,    79,    79,    91,    82,
      83,    84,   349,    86,    85,   153,   154,    88,   156,    92,
      93,    55,   105,   138,    85,   138,    84,   232,   233,     4,
     145,    85,   145,   215,   216,   214,   347,    55,    33,   177,
     236,   176,    83,   158,    83,   158,    19,    83,   186,    55,
     188,     4,    80,    83,    88,   138,   275,   305,   277,    87,
      35,    34,   145,   332,    81,    40,    84,     4,    85,   184,
      88,   319,   320,   260,    81,   158,    80,   192,    85,   192,
      79,    88,    35,    87,   222,    79,     4,    40,    82,   358,
     359,   360,   252,    81,    69,    67,    68,    85,   236,   234,
      72,    81,    79,    83,    76,   125,    81,   171,   172,   192,
     225,    86,   225,    79,    87,   193,    69,    84,   276,    86,
     258,    88,   260,   261,    79,   263,   345,   346,   324,    79,
       4,   269,    82,    86,   272,    79,    79,   275,   253,   277,
     253,    86,   225,    56,    57,   341,   342,   343,   344,    84,
     308,   286,   287,   173,   174,   175,    69,    70,    71,   297,
     356,   357,    75,   321,    81,     4,    83,   363,   364,   365,
     253,    64,    64,   311,   312,   333,   334,   315,   258,   317,
      82,   261,    88,     4,     4,   323,   146,     4,    82,   149,
      87,   349,   330,   331,    74,   353,   354,   355,    10,    87,
      73,    13,    23,    81,    87,    26,    85,   345,   346,    30,
      79,    32,    88,    79,    35,    35,    80,    38,    35,    40,
      40,    42,    43,    40,    80,    65,    66,    67,    68,    80,
      80,    52,    53,    54,    55,    52,    53,    54,    55,    79,
      83,     4,    82,    80,     4,    79,    67,    68,    69,    69,
      82,    72,    69,    83,    75,     4,    77,    85,    79,    85,
      79,    82,    64,    84,    84,    86,    86,    84,    64,    86,
      81,    92,    93,    79,    23,    92,    93,    26,    79,    79,
      87,    30,    28,    32,    87,    79,    35,    79,    28,    38,
     330,    40,    53,    42,    43,    17,    87,   184,     4,    65,
      66,    67,    68,    52,    53,    54,    55,    65,    66,    67,
      68,   260,   154,    79,    24,   340,    82,   315,    67,    68,
      69,    79,   160,    72,    82,   221,    75,     8,    77,    35,
     159,   167,    -1,    82,    40,    84,    93,    86,    -1,    -1,
      -1,    -1,    -1,    92,    93,    -1,    52,    53,    54,    55,
      -1,    -1,     4,    58,    59,    60,    61,    62,    -1,    64,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    82,    83,    84,    -1,
      86,    -1,    -1,    35,    -1,    -1,    92,    93,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    35,    -1,
      82,    83,    84,    40,    86,    -1,    -1,    -1,    -1,    -1,
      92,    93,     4,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    35,    -1,    82,    83,    84,    40,    86,
      -1,    -1,    -1,    -1,    -1,    92,    93,     4,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    75,    -1,    77,    -1,    -1,    35,    -1,
      -1,    -1,    84,    40,    86,    87,    88,    -1,    -1,    -1,
      92,    93,     4,    -1,    -1,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    68,    69,    -1,    -1,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    35,    -1,    82,    -1,    84,    40,    86,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,     4,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      35,    -1,    84,    85,    86,    40,    -1,    -1,    -1,    -1,
      92,    93,     4,    -1,    -1,    -1,    -1,    52,    53,    54,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    68,    69,    -1,    -1,    72,    -1,    -1,
      75,    -1,    77,    35,    -1,    80,    -1,    -1,    40,    84,
      -1,    86,    -1,    -1,    -1,     4,    -1,    92,    93,    -1,
      52,    53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    -1,    75,    -1,    77,    35,    -1,    -1,    -1,
      -1,    40,    84,    -1,    86,    87,    -1,    -1,     4,    -1,
      92,    93,    -1,    52,    53,    54,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    -1,    75,    -1,    77,    35,
      -1,    -1,    -1,    -1,    40,    84,     4,    86,    87,    -1,
      -1,    -1,    -1,    92,    93,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    72,    35,    -1,    75,
      -1,    77,    40,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    92,    93,    56,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,
      68,    69,    70,    71,    72,    -1,    -1,    75,    76,    56,
      57,    -1,    -1,    81,    -1,    -1,    63,    64,    86,    -1,
      67,    68,    69,    70,    71,    72,    -1,    -1,    75,    76,
      56,    57,    -1,    -1,    81,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    -1,    -1,    75,
      76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    95,   178,     4,     0,    79,    33,   179,   180,
       4,    55,    84,    88,   177,   182,   183,    31,    42,    43,
     111,   113,   114,   122,   124,   136,   161,   180,    79,   183,
     181,   182,   183,     4,    84,   117,   123,     4,   162,     4,
     112,   121,   136,    79,    79,    85,   182,    79,    97,    85,
     118,   119,   121,     4,     4,    35,    40,    69,    86,   126,
     127,   129,   131,   167,   168,   171,   172,    56,    57,    64,
      67,    68,    69,    70,    71,    72,    75,    76,    81,   108,
     109,   127,   153,    79,    79,   115,   117,    81,    85,   127,
     115,    86,    79,    82,   127,    52,    53,    54,    67,    68,
      69,    72,    75,    77,    84,    87,    88,    92,    93,   125,
     126,   128,   129,   145,   146,   147,   148,   149,   150,   151,
     154,   155,   165,   173,   174,   175,   176,   177,     4,    64,
     145,   166,    69,   109,    64,    82,    96,    98,    84,   116,
     127,    85,   119,   127,    83,   121,   169,   170,    83,   169,
     145,   127,    88,    79,    82,   130,    82,   156,    87,    74,
      73,    58,    59,    60,    61,    62,    64,   152,    67,    68,
      72,    76,   151,    69,    75,   153,    84,    86,    88,   158,
     159,   160,   163,   164,    87,   155,    81,   166,    97,    98,
     120,   127,    87,   127,    83,   170,    79,    83,    85,    88,
      83,   130,   132,   133,   134,   135,   145,    83,   132,   145,
     157,   127,   147,   148,   149,   150,   150,   155,   155,   155,
      85,   166,    80,   145,     4,    84,   128,   129,   145,     4,
      23,    26,    30,    32,    38,    96,   101,   102,   103,   104,
     105,   106,   107,   110,   113,   137,   138,   139,   140,   141,
     144,   145,   166,    81,    85,   127,   177,    79,    81,    83,
      80,    81,    83,    80,    83,    85,   165,    87,   145,    80,
      87,   127,    80,     4,     4,    97,    99,    97,   166,    98,
     102,    79,    65,    66,    67,    68,    63,   109,   127,    83,
     133,   130,   135,   145,    83,   145,    85,    80,    87,    87,
     145,    85,   102,   103,   104,   145,    96,   103,   145,    83,
      79,    64,    64,   166,   166,    81,   145,    80,    87,    79,
     143,    99,   100,    79,    96,   145,   145,   157,    87,   145,
      99,    99,    96,   145,    28,    98,    87,   105,   142,   145,
     145,   100,    96,    96,   141,    79,    79,   143,    98,    28,
      98,    98,    98,   103,   103,   104,    96,   141,    96,    96,
      96,    98,    98,   100,   100,   100,    98,    98,    98
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    97,    98,    99,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   103,   103,   104,   105,   106,   106,   106,   106,
     107,   108,   108,   108,   108,   109,   109,   109,   110,   111,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   120,   120,   121,
     121,   122,   123,   124,   124,   125,   126,   126,   126,   126,
     126,   126,   127,   127,   128,   128,   128,   129,   130,   130,
     130,   130,   130,   130,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   141,   141,   141,   141,   142,
     143,   144,   144,   144,   144,   144,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   149,   150,   150,   150,   150,
     151,   151,   151,   152,   152,   152,   152,   152,   152,   153,
     153,   153,   153,   153,   153,   154,   154,   155,   155,   155,
     155,   155,   155,   155,   156,   157,   157,   157,   158,   159,
     160,   160,   160,   160,   160,   160,   161,   162,   163,   164,
     164,   164,   165,   166,   166,   167,   168,   168,   168,   168,
     169,   169,   170,   170,   171,   172,   173,   173,   174,   174,
     174,   174,   174,   174,   175,   175,   175,   175,   176,   176,
     176,   176,   176,   176,   177,   178,   179,   179,   179,   180,
     180,   181,   181,   181,   182,   182,   182,   183
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     5,     0,     0,     0,     0,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     4,     4,
       3,     1,     1,     1,     1,     2,     2,     1,     3,     2,
       2,     4,     3,     1,     1,     5,     6,     1,     2,     3,
       1,     2,     3,     4,     1,     3,     2,     3,     1,     1,
       3,     4,     1,     3,     2,     2,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     2,
       3,     3,     4,     4,     3,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     1,
       2,     1,     2,     5,     7,     7,     7,     9,     9,     0,
       0,    11,     7,     4,    11,    11,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     2,     2,     2,     3,     0,     3,     5,     2,     3,
       3,     4,     4,     5,     6,     7,     2,     2,     4,     2,
       3,     4,     3,     1,     3,     5,     4,     4,     3,     3,
       2,     3,     3,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     0,     3,     2,     4,
       2,     0,     3,     2,     2,     2,     1,     1
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
#line 22 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the SourceFile\n");}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 30 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the OPENB-empty\n");}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 34 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the CLOSEB-empty\n");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 124 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the FunctionDecl- Key_func Identifier OPENB Signature CLOSEB\n");}
#line 1823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 125 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the FunctionDecl- Key_func Identifier Signature\n");}
#line 1829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 129 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the Signature- Parameteres\n");}
#line 1835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 130 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the Signature- Parameteres Result\n");}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the Result- Typelist\n");}
#line 1847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 135 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the Result- Type\n");}
#line 1853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 139 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the Parameters- only brackets\n");}
#line 1859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 140 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the Parameters- ParameterList without commas\n");}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 141 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the Parametes- parameterList with commas\n");}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 145 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the ParameterList- ParameterDecl\n");}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 146 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the ParameterList- ParameterList M_comma ParameterDecl\n");}
#line 1883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 150 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the ParameterDecl- IdentifierList Type\n");}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 176 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the 1st of TopLevelDeclList\n");}
#line 1895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 177 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the 2nd of TopLevelDeclList\n");}
#line 1901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 242 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the TopLevelDecl- Declaration\n");}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 243 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the TopLevelDecl- FunctionDecl\n");}
#line 1913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 244 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the TopLevelDecl- MethodDecl\n");}
#line 1919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 491 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the ImportDeclList-empty\n");}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 492 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the ImportDeclList- ImportDeclList ImportDecl M_semicolon\n");}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 493 "lexer.y" /* yacc.c:1646  */
    {printf("Inside the ImportDeclList- ImportDecl M_semicolon\n");}
#line 1937 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1941 "y.tab.c" /* yacc.c:1646  */
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
#line 518 "lexer.y" /* yacc.c:1906  */

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
