%{
#include <stdio.h>
#include <stdlib.h>
int OP_Assign, OP_Add, OP_Sub, OP_Mult, OP_Div, OP_Mod, OP_unary_add, OP_unary_sub, OP_unary_and, OP_unary_or, OP_unary_not, OP_Pow, OP_relational_and, OP_relational_or, OP_equality ; //operators. Ternary is yet to be included. How to differentiate unary add and binary add? 

int KEY_break, KEY_case, KEY_const, KEY_continue, KEY_default, KEY_else, KEY_fallthrough, KEY_for, KEY_func, KEY_if, KEY_import, KEY_interface, KEY_map, KEY_package, KEY_range, KEY_return, KEY_select, KEY_struct, KEY_switch, KEY_type, KEY_var, KEY_class, KEY_private, KEY_protected, KEY_public, KEY_static, KEY_try, KEY_catch, KEY_finally; //all keywords

int  L_Paran, R_Paran, L_Curly, R_Curly, L_SqBracket, R_SqBracket;

int  T_Int, T_Bool, T_String, T_Int8, T_Int16, T_Int32, T_Int64, T_Uint, T_Unit16, T_Uint32, T_Uint64, T_Unitptr,  T_Float32, T_Float64, T_Complex64, T_Complex128; //remember byte is an alias for U_Int8 and rune is an alias for int32

int Identifiers;

int SemiColon, Comma;

int Int_Const, Float_Const, Complex_Const, Imaginary_Const, String_Const, Bool_True, Bool_False;

int Single_Line_Comment;
int Multiple_Line_Comment; //iske sath deal karna hai. Kab tak ignore karna hai
%}

digit		[0-9]
letter		[a-zA-Z]
whitespace	[  \t\n]
under_score	[_]
plus		[\+]
plusplus	[\+][\+]
minus		[\-]
minusminus	[\-][\-]
power		[\^]
mult		[\*]
assign		[=]
divide		[/]
comma 		[,]
semi_colon	[;]
curly_open	[{]
curly_close	[}]
open_paren	[(]
close_paren	[)]
left_sqbracket	[\[]
right_sqbracket	[\]]
mod		[%]
not		[!]
unary_and	[&]
unary_or	[|]
relational_and	[&][&]
relational_or	[|][|]
binary_eq	[=][=]
keyword		"break"|"case"|"const"|"continue"|"default"|"else"|"fallthrough"|"for"|"func"|"if"|"import"|"interface"|"map"|"package"|"range"|"return"|"select"|"struct"|"switch"|"type"|"var"|"class"|"private"|"protected"|"public"|"static"|"try"|"catch"|"finally"

identifier	{letter}+({letter}|{digit}|under_score)*

decimal_int	(plus|minus)?[1-9]+{digit}*
octal_int	(plus|minus)?[0]{digit}+
hex_int		(plus|minus)?[0][xX]([A-F]|{digit})+
int_lit		{decimal_int}|{octal_int}|{hex_int}
decimals	{digit}+
exponent	[eE][plus|minus]decimals
float_lit	({decimals}[\.]{decimals}{exponent}|{decimals}{exponent}|[\.]{decimals}{exponent})
imaginary_lit	({decimals}|{float_lit})[i]
string_lit	["][^"]*["]

single_comment	[/][/][^\n]*
multi_comment	[/][*][^*]*[*][/]
boolean_true	"True"
boolean_false	"False"
%%

{single_comment}	{Single_Line_Comment++;}
{multi_comment}		{Multiple_Line_Comment++;}
{keyword}		{if ( yytext == "break") KEY_break++;
					else if (strcmp(yytext, "case")) KEY_case++;
					else if (strcmp(yytext,"const")) KEY_const++;
					else if (yytext == "continue") KEY_continue++;
					else if (yytext == "default") KEY_default++;
					else if (yytext == "else") KEY_else++;
					else if (yytext == "fallthrough") KEY_fallthrough++;
					else if (yytext == "for") KEY_for++;
					else if (yytext == "func") KEY_func++;
					else if (yytext == "if") KEY_if++;
					else if (yytext == "import") KEY_import++;
					else if (yytext == "interface") KEY_interface++;
					else if (yytext == "map") KEY_map++;
					else if (yytext == "package") KEY_package++;
					else if (yytext == "range") KEY_range++;
					else if (yytext == "return") KEY_return++;
					else if (yytext == "select") KEY_select++;
					else if (yytext == "struct") KEY_struct++;
					else if (yytext == "switch") KEY_switch++;
					else if (yytext == "type") KEY_type++;
					else if (yytext == "var") KEY_var++;
					else if (yytext == "class") KEY_class++;
					else if (yytext == "private") KEY_private++;
					else if (yytext == "protected") KEY_protected++;
					else if (yytext == "public") KEY_public++;
					else if (yytext == "static") KEY_static++;
					else if (yytext == "try") KEY_try++;
					else if (yytext == "catch") KEY_catch++;
					else if (yytext == "finally") KEY_finally++;
				}
{semi_colon}		{SemiColon++;}
{comma}			{Comma++;}
{binary_eq}		{OP_equality++;}
{assign}		{OP_Assign++;}
{plusplus}		{OP_unary_add++;}
{minusminus}		{OP_unary_sub++;}
{plus}			{OP_Add++;}
{minus}			{OP_Sub++;}
{mult}			{OP_Mult++;}
{divide}		{OP_Div++;}
{mod}			{OP_Mod++;}
{curly_open}		{L_Curly++;}
{curly_close}		{R_Curly++;}
{open_paren}		{L_Paran++;}
{close_paren}		{R_Paran++;}
{left_sqbracket}	{L_SqBracket++;}
{right_sqbracket}	{R_SqBracket++;}
{power}			{OP_Pow++;}
{unary_and}		{OP_unary_and++;}
{unary_or}		{OP_unary_or++;}
{not}			{OP_unary_not++;}
{relational_and}	{OP_relational_and++;}
{relational_or}		{OP_relational_or++;}
{int_lit}		{ Int_Const++;}
{float_lit}		{Float_Const++;}
{imaginary_lit}		{Complex_Const++;}
{boolean_true}		{Bool_True++;}
{boolean_false}		{Bool_False++;}
{string_lit}		{String_Const++;}
{identifier}		{Identifiers++;
			printf("%s\n", yytext);}


%%
int yywrap(void) {
return 1;
}
int main(void){
	yylex();
	printf("%d\t%d\t%d\t\n", Single_Line_Comment, Multiple_Line_Comment, Identifiers);
	return 0;
}
