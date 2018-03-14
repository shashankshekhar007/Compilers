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
