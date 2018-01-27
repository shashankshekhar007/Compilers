digit	[0-9]
letter	[a-zA-Z]
whitespace	[  \t\n]
under_score	[_]
plus		[\+]
minus		[\-]
mult		[\*]
assign		[=]
divide		[/]


%{
#include <stdio.h>
#include <stdlib.h>
int OP_Assign, OP_Add, OP_Sub, OP_Mult, OP_Div, OP_Mod, OP_unary_add, OP_unary_sub, OP_unary_and, OP_unary_or, OP_unary_not, OP_Pow, OP_ ; //operators. Ternary is yet to be included. How to differentiate unary add and binary add? 

int KEY_break, KEY_case, KEY_const, KEY_continue, KEY_default, KEY_else, KEY_fallthrough, KEY_for, KEY_func, KEY_if, KEY_import, KEY_interface, KEY_map, KEY_package, KEY_range, KEY_return, KEY_select, KEY_struct, KEY_switch, KEY_type, KEY_var, KEY_class, KEY_private, KEY_protected, KEY_public, KEY_static, KEY_try, KEY_catch, KEY_finally; //all keywords

int  L_Paran, R_Paran, L_Curly, R_Curly;

int  T_Int, T_Bool, T_String, T_Int8, T_Int16, T_Int32, T_Int64, T_Uint, T_Unit16, T_Uint32, T_Uint64, T_Unitptr,  T_Float32, T_Float64, T_Complex64, T_Complex128; //remember byte is an alias for U_Int8 and rune is an alias for int32

int SemiColon, Comma, UnderScore;

int Int_Const, Float_Const, Complex_Const, Imaginary_Const, String_Const;

int Single_Line_Comment;
int Multiple_Line_Comment; //iske sath deal karna hai. Kab tak ignore karna hai

//keyword ko complete karo
%}

keyword		([break]|[case]|[add]|[const]| )  //complete this
identifier	{letter}+({letter}|{digit}|under_score)*
decimal_int	(plus|minus)?[1-9]+{digit}*
octal_int	(plus|minus)?[0]{digit}+
hex_int		(plus|minus)?[0][xX]([A-F]|{digit})+
decimals	{digit}+
exponent	[eE][plus|minus]decimals
float_lit	({decimals}[\.]{decimals}{exponent} | {decimals}{exponent} | [\.]{decimals}{exponent})
imaginary_lit	({decimals}|{float_lit})[i]
string_lit	["][^"]*["]

%%
