/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 17 "lexer.y" /* yacc.c:1915  */

    int ival;
    char *sval;
    Attr* attr;
    OpAttr* opattr;
    Codn* codn;
    ElIF* elif;

#line 247 "y.tab.h" /* yacc.c:1915  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
