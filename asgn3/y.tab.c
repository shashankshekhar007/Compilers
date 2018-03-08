/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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




/* Copy the first part of user declarations.  */
#line 1 "lexer.y"

#include <stdio.h>
#include <stdlib.h>
int yylex(void);
void yyerror (char *);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 299 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  470

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   348

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    12,    13,    17,    18,    21,    24,
      29,    33,    34,    37,    39,    40,    42,    44,    46,    48,
      50,    52,    54,    56,    58,    61,    66,    70,    71,    74,
      80,    81,    83,    84,    87,    91,    92,    95,    99,   100,
     103,   108,   112,   113,   116,   120,   124,   127,   132,   137,
     139,   142,   147,   151,   152,   156,   159,   160,   164,   166,
     170,   171,   173,   175,   177,   179,   181,   183,   185,   187,
     189,   191,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   214,   217,   220,   224,   226,   228,   230,   232,   234,
     236,   238,   240,   242,   245,   247,   248,   251,   256,   258,
     262,   265,   267,   268,   271,   273,   274,   277,   279,   286,
     291,   294,   297,   298,   300,   302,   309,   312,   313,   315,
     316,   319,   320,   324,   327,   329,   336,   339,   340,   349,
     355,   359,   362,   364,   367,   371,   372,   377,   380,   381,
     385,   388,   391,   393,   397,   402,   404,   408,   410,   412,
     414,   415,   421,   426,   428,   429,   434,   440,   443,   445,
     447,   451,   453,   455,   457,   459,   461,   463,   465,   467,
     469,   474,   476,   478,   481,   486,   490,   491,   495,   501,
     504,   506,   509,   512,   514,   515,   517,   519,   523,   526,
     527,   529,   530,   533,   537,   538,   542,   544,   545,   549,
     550,   552,   554,   556,   560,   562,   564,   566,   568,   570,
     572,   574,   576,   578,   582,   585,   587,   589,   596,   598,
     600,   602,   606,   609,   610,   613,   614,   618,   619,   623,
     625,   627,   629,   631,   633,   635,   640,   644,   645,   649,
     652,   655,   657,   660,   662,   665,   667,   669,   672,   675,
     678,   681,   684,   688,   694,   702,   707,   711,   713,   718,
     722,   724,   728,   730,   732,   734,   736,   738,   740,   742,
     744,   746,   748,   750,   752,   754,   756,   758,   760,   762,
     764,   767,   769,   772,   774,   776,   778,   780,   782,   784,
     787,   793,   798
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    98,   229,    96,    97,    -1,    99,   229,
      96,    -1,    -1,   105,   229,    97,    -1,    -1,    36,     4,
      -1,    33,   101,    -1,    33,    84,   100,    85,    -1,   101,
     229,   100,    -1,    -1,   102,   104,    -1,   103,    -1,    -1,
      88,    -1,     4,    -1,    55,    -1,   106,    -1,   119,    -1,
     121,    -1,   107,    -1,   116,    -1,   123,    -1,    25,   109,
      -1,    25,    84,   108,    85,    -1,   109,   229,   108,    -1,
      -1,   112,   110,    -1,    84,   111,    64,   114,    85,    -1,
      -1,    42,    -1,    -1,     4,   113,    -1,    81,     4,   113,
      -1,    -1,   224,   115,    -1,    81,   224,   115,    -1,    -1,
      42,   118,    -1,    42,    84,   117,    85,    -1,   118,    79,
     117,    -1,    -1,     4,   174,    -1,    31,     4,   120,    -1,
      31,     4,   187,    -1,   187,   127,    -1,    31,   122,     4,
     120,    -1,    31,   122,     4,   187,    -1,   190,    -1,    43,
     125,    -1,    43,    84,   124,    85,    -1,   125,   229,   124,
      -1,    -1,   112,   174,   126,    -1,    64,   114,    -1,    -1,
      82,   128,    83,    -1,   129,    -1,   130,   229,   129,    -1,
      -1,   106,    -1,   141,    -1,   131,    -1,   142,    -1,   144,
      -1,   146,    -1,   147,    -1,   127,    -1,   148,    -1,   150,
      -1,   164,    -1,   169,    -1,   133,    -1,   132,    -1,   134,
      -1,   135,    -1,   139,    -1,   140,    -1,   224,    -1,   224,
      59,    68,   224,    -1,   224,    65,    -1,   224,    66,    -1,
     114,   138,   114,    -1,    67,    -1,    68,    -1,    72,    -1,
      69,    -1,    70,    -1,    71,    -1,    57,    -1,    56,    -1,
      75,    -1,    75,    72,    -1,   136,    -1,    -1,   137,    63,
      -1,   112,    80,    63,   114,    -1,    79,    -1,     4,    80,
     130,    -1,    38,   143,    -1,   114,    -1,    -1,    23,   145,
      -1,     4,    -1,    -1,    26,   145,    -1,    29,    -1,    32,
     131,    79,   224,   127,   149,    -1,    32,   224,   127,   149,
      -1,    28,   148,    -1,    28,   127,    -1,    -1,   151,    -1,
     157,    -1,    41,   152,   153,    82,   154,    83,    -1,   131,
      79,    -1,    -1,   224,    -1,    -1,   155,   154,    -1,    -1,
     156,    80,   128,    -1,    24,   114,    -1,    27,    -1,    41,
     152,   159,    82,   158,    83,    -1,   160,   158,    -1,    -1,
       4,    80,    64,   217,    88,    84,    42,    85,    -1,   217,
      88,    84,    42,    85,    -1,   161,    80,   128,    -1,    24,
     162,    -1,    27,    -1,   174,   163,    -1,    81,   174,   163,
      -1,    -1,    39,    82,   165,    83,    -1,   166,   165,    -1,
      -1,   167,    80,   128,    -1,    24,   133,    -1,    24,   168,
      -1,    27,    -1,   114,    64,   224,    -1,   112,    80,    64,
     224,    -1,   224,    -1,    30,   170,   127,    -1,   224,    -1,
     171,    -1,   173,    -1,    -1,   172,    79,   224,    79,   172,
      -1,   172,    79,    79,   172,    -1,   131,    -1,    -1,   114,
      63,    37,   224,    -1,   112,    80,    63,    37,   224,    -1,
      37,   224,    -1,   175,    -1,   176,    -1,    84,   174,    85,
      -1,     4,    -1,   202,    -1,   177,    -1,   212,    -1,   180,
      -1,   186,    -1,   181,    -1,   183,    -1,   184,    -1,    86,
     178,    87,   179,    -1,   224,    -1,   174,    -1,    69,   174,
      -1,    34,    82,   182,    83,    -1,   185,   229,   182,    -1,
      -1,    86,    87,   179,    -1,    35,    86,   174,    87,   179,
      -1,     4,   187,    -1,   175,    -1,    31,   187,    -1,   190,
     188,    -1,   189,    -1,    -1,   190,    -1,   174,    -1,    84,
     191,    85,    -1,   193,   192,    -1,    -1,    81,    -1,    -1,
     195,   194,    -1,    81,   195,   194,    -1,    -1,   196,   197,
     174,    -1,   112,    -1,    -1,    88,    88,    88,    -1,    -1,
     199,    -1,   201,    -1,   222,    -1,    84,   224,    85,    -1,
     200,    -1,   203,    -1,   216,    -1,    54,    -1,    53,    -1,
      52,    -1,    55,    -1,     4,    -1,   202,    -1,     4,    88,
       4,    -1,   204,   205,    -1,   212,    -1,   177,    -1,    86,
      88,    88,    88,    87,   179,    -1,   183,    -1,   184,    -1,
     175,    -1,    82,   206,    83,    -1,   207,   192,    -1,    -1,
     209,   208,    -1,    -1,    81,   209,   208,    -1,    -1,   210,
      80,   211,    -1,   211,    -1,   224,    -1,     4,    -1,   205,
      -1,   224,    -1,   205,    -1,    40,    82,   213,    83,    -1,
     214,   229,   213,    -1,    -1,   112,   174,    55,    -1,   112,
     174,    -1,   215,    55,    -1,   215,    -1,    69,   175,    -1,
     175,    -1,    31,   120,    -1,   198,    -1,   228,    -1,   217,
     218,    -1,   217,   219,    -1,   217,   220,    -1,   217,   221,
      -1,    88,     4,    -1,    86,   224,    87,    -1,    86,   153,
      80,   153,    87,    -1,    86,   153,    80,   224,    80,   224,
      87,    -1,    88,    84,   174,    85,    -1,   223,    88,     4,
      -1,   175,    -1,    84,    69,   175,    85,    -1,    84,   223,
      85,    -1,   226,    -1,   224,   225,   224,    -1,    73,    -1,
      74,    -1,    63,    -1,    62,    -1,    59,    -1,    58,    -1,
      61,    -1,    60,    -1,    67,    -1,    68,    -1,    76,    -1,
      72,    -1,    69,    -1,    70,    -1,    71,    -1,    57,    -1,
      56,    -1,    75,    -1,    75,    72,    -1,   217,    -1,   227,
     226,    -1,    67,    -1,    68,    -1,    77,    -1,    72,    -1,
      69,    -1,    75,    -1,    59,    68,    -1,   174,    84,   224,
      81,    85,    -1,   174,    84,   224,    85,    -1,    79,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    18,    18,    21,    22,    24,    25,    27,    30,    31,
      34,    35,    37,    40,    41,    44,    45,    48,    51,    52,
      53,    56,    57,    58,    61,    62,    65,    66,    68,    71,
      72,    75,    76,    79,    82,    83,    85,    88,    89,    91,
      92,    95,    96,    98,   101,   102,   105,   108,   109,   112,
     115,   116,   119,   120,   123,   126,   127,   130,   133,   136,
     137,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   153,   154,   155,   156,   157,   158,   161,
     164,   167,   168,   171,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   186,   187,   189,   192,   195,   198,
     201,   204,   205,   207,   210,   211,   213,   216,   219,   220,
     227,   228,   229,   232,   233,   236,   239,   240,   242,   243,
     245,   246,   248,   251,   252,   255,   258,   259,   261,   262,
     268,   271,   272,   275,   278,   279,   281,   284,   285,   287,
     290,   291,   292,   295,   296,   297,   304,   307,   308,   309,
     310,   312,   313,   316,   317,   323,   324,   325,   334,   335,
     336,   339,   340,   343,   344,   345,   346,   347,   348,   349,
     352,   355,   358,   361,   364,   367,   368,   370,   373,   376,
     377,   380,   383,   386,   387,   389,   390,   393,   396,   397,
     399,   400,   402,   405,   406,   408,   411,   412,   414,   415,
     417,   418,   419,   420,   423,   424,   425,   428,   429,   430,
     431,   434,   435,   438,   441,   444,   445,   446,   447,   448,
     449,   452,   455,   456,   458,   459,   461,   462,   464,   465,
     471,   472,   473,   476,   477,   480,   483,   484,   486,   487,
     488,   489,   492,   493,   496,   499,   500,   501,   502,   503,
     504,   509,   512,   515,   516,   519,   524,   527,   528,   529,
     532,   533,   536,   537,   538,   539,   540,   541,   542,   543,
     544,   545,   546,   547,   548,   549,   550,   551,   552,   553,
     554,   557,   558,   562,   563,   564,   565,   566,   567,   568,
     571,   572,   575
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "any_of_these_unary_operators", "conversion", "eos", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -354
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

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -258
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      
/* Line 1267 of yacc.c.  */
#line 2217 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 583 "lexer.y"

void yyerror (char * s){
	fprintf(stderr, "%s\n", s);
}

int main(void){
//	FILE * fp;
//	if (argc == 2 && (fp = fopen (argv[1], "r")))
//		yyin = fp;
//	else{
//		printf("Unable to open file \n");
//		return 1;
//	}
	yyparse();
	return 0;
}

