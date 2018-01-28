%{
#include <stdio.h>
#include <stdlib.h>

char Identifier_Array[200][100], Int_Const_Array[200][20], Float_Const_Array[200][20], String_Const_Array[200][100], Complex_Const_Array[200][20];

int i;

int OP_Assign, OP_Add, OP_Sub, OP_Mult, OP_Div, OP_Mod, OP_unary_add, OP_unary_sub, OP_unary_and, OP_unary_or, OP_unary_not, OP_Pow, OP_relational_and, OP_relational_or, OP_equality, OP_less, OP_greater, OP_less_less, OP_greater_greater ; //operators. Ternary is yet to be included. How to differentiate unary add and binary add? 

int KEY_break, KEY_case, KEY_const, KEY_continue, KEY_default, KEY_else, KEY_fallthrough, KEY_for, KEY_func, KEY_if, KEY_import, KEY_interface, KEY_map, KEY_package, KEY_range, KEY_return, KEY_select, KEY_struct, KEY_switch, KEY_type, KEY_var, KEY_class, KEY_private, KEY_protected, KEY_public, KEY_static, KEY_try, KEY_catch, KEY_finally; //all keywords

int  L_Paran, R_Paran, L_Curly, R_Curly, L_SqBracket, R_SqBracket;

int  T_Int, T_Bool, T_String, T_Int8, T_Int16, T_Int32, T_Int64, T_Uint, T_Uint16, T_Uint32, T_Uint64, T_Uintptr,  T_Float32, T_Float64, T_Complex64, T_Complex128; //remember byte is an alias for U_Int8 and rune is an alias for int32

int Identifiers = 0;

int SemiColon, Comma, Question, Colon;

int Int_Const, Float_Const, Complex_Const, String_Const, Bool_True, Bool_False;

int Single_Line_Comment;
int Multiple_Line_Comment; //iske sath deal karna hai. Kab tak ignore karna hai
%}

digit		[0-9]
letter		[a-zA-Z]
whitespace	[  \t\n]
under_score	[_]
greatergreater	[>][>]
lessless	[<][<]
greater		[>]
less		[<]
question	[\?]
plus		[\+]
plusplus	[\+][\+]
minus		[\-]
minusminus	[\-][\-]
colon 		[:]
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
type		"int"|"bool"|"string"|"int8"|"int16"|"int32"|"int64"|"uint"|"uint16"|"uint32"|"uint64"|"uintptr"|"float32"|"float64"|"complex64"|"complex128"
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
{keyword}		{printf("%s", yytext);
					if ( strcmp(yytext,"break")==0) KEY_break++;
					else if (strcmp(yytext, "case")==0) KEY_case++;
					else if (strcmp(yytext,"const")==0) KEY_const++;
					else if (strcmp(yytext, "continue")==0) KEY_continue++;
					else if (strcmp(yytext,"default")==0) KEY_default++;
					else if (strcmp(yytext,"else")==0) KEY_else++;
					else if (strcmp(yytext,"fallthrough")==0) KEY_fallthrough++;
					else if (strcmp(yytext,"for")==0) KEY_for++;
					else if (strcmp(yytext,"func")==0) KEY_func++;
					else if (strcmp(yytext,"if")==0) KEY_if++;
					else if (strcmp(yytext,"import")==0) KEY_import++;
					else if (strcmp(yytext,"interface")==0) KEY_interface++;
					else if (strcmp(yytext,"map")==0) KEY_map++;
					else if (strcmp(yytext,"package")==0) KEY_package++;
					else if (strcmp(yytext,"range")==0) KEY_range++;
					else if (strcmp(yytext,"return")==0) KEY_return++;
					else if (strcmp(yytext,"select")==0) KEY_select++;
					else if (strcmp(yytext,"struct")==0) KEY_struct++;
					else if (strcmp(yytext,"switch")==0) KEY_switch++;
					else if (strcmp(yytext,"type")==0) KEY_type++;
					else if (strcmp(yytext,"var")==0) KEY_var++;
					else if (strcmp(yytext,"class")==0) KEY_class++;
					else if (strcmp(yytext,"private")==0) KEY_private++;
					else if (strcmp(yytext,"protected")==0) KEY_protected++;
					else if (strcmp(yytext,"public")==0) KEY_public++;
					else if (strcmp(yytext,"static")==0) KEY_static++;
					else if (strcmp(yytext,"try")==0) KEY_try++;
					else if (strcmp(yytext,"catch")==0) KEY_catch++;
					else if (strcmp(yytext,"finally")==0) KEY_finally++;
			}
{type}			{if(strcmp(yytext, "int")==0) T_Int++; 
				else if (strcmp(yytext, "bool")==0) T_Bool++;
				else if (strcmp(yytext, "string")==0) T_String++;
				else if (strcmp(yytext, "int8")==0 || strcmp(yytext, "byte")==0) T_Int8++;
				else if (strcmp(yytext, "int16")==0) T_Int16++;
				else if (strcmp(yytext, "int32")==0 || strcmp(yytext, "rune")==0) T_Int32++;
				else if (strcmp(yytext, "int64")==0) T_Int64++;
				else if (strcmp(yytext, "uint")==0) T_Uint++;
				else if (strcmp(yytext, "uint16")==0) T_Uint16++;
				else if (strcmp(yytext, "uint32")==0) T_Uint32++;
				else if (strcmp(yytext, "uint64")==0) T_Uint64++;
				else if (strcmp(yytext, "uintptr")==0) T_Uintptr++;
				else if (strcmp(yytext, "float32")==0) T_Float32++;
				else if (strcmp(yytext, "float64")==0) T_Float64++;
				else if (strcmp(yytext, "complex64")==0) T_Complex64++;
				else if (strcmp(yytext, "complex128")==0) T_Complex128++;
			}
{greatergreater}	{OP_greater_greater++;}
{lessless}		{OP_less_less++;}
{question}		{Question++;}
{greater}		{OP_greater++;}
{less}			{OP_less++;}
{semi_colon}		{SemiColon++;}
{colon}			{Colon++;}
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
{int_lit}		{strcpy(Int_Const_Array[Int_Const++],yytext);}
{float_lit}		{strcpy(Float_Const_Array[Float_Const++], yytext);}
{imaginary_lit}		{strcpy(Complex_Const_Array[Complex_Const++], yytext);}
{boolean_true}		{Bool_True++;}
{boolean_false}		{Bool_False++;}
{string_lit}		{strcpy(String_Const_Array[String_Const++], yytext);}
{identifier}		{strcpy(Identifier_Array[Identifiers++],yytext);
			}

%%
int yywrap(void) {
return 1;
}
int main(int argc, char* argv[]){
	FILE *fh;
	if (argc == 2 && (fh = fopen(argv[1], "r")))
        yyin = fh;
	yylex();
	printf("Token\tOccureneces\tLexemes\n");
	if(OP_Assign > 0){
		printf("OP_Assign\t%d\t=\n",OP_Assign);
	}
 	if(OP_Add > 0){
		printf("OP_Add\t%d\t+\n",OP_Add);
	}
	if(OP_Sub > 0){
		printf("OP_Sub\t%d\t-\n",OP_Sub);
	}
	if(OP_Mult > 0){
		printf("OP_Mult\t%d\t*\n",OP_Mult);
	}
	if(OP_Div > 0){
		printf("OP_Div\t%d\t/\n",OP_Div);
	}
	if(OP_Mod > 0){
		printf("OP_Mod\t%d\t%%\n",OP_Mod);
	}
	if(OP_unary_add > 0){
		printf("OP_unary_add\t%d\t+\n",OP_unary_add);  //unary add ka symbol
	}
	if(OP_unary_sub > 0){
		printf("OP_unary_sub\t%d\t-\n",OP_unary_sub); 	//unary sub ka symbol
	}
	if(OP_unary_and > 0){
		printf("OP_unary_and\t%d\t&\n",OP_unary_and);
	}
	if(OP_unary_or > 0){
		printf("OP_unary_or\t%d\t|\n",OP_unary_or);
	}
	if(OP_unary_not > 0){
		printf("OP_unary_not\t%d\t!\n",OP_unary_not);
	}
	if(OP_Pow > 0){
		printf("OP_Pow\t%d\t^\n",OP_Pow);
	}
	if(OP_relational_and > 0){
		printf("OP_relational_and\t%d\t&&\n",OP_relational_and);	
	}
	if(OP_relational_or > 0){
		printf("OP_relational_or\t%d\t||\n",OP_relational_or);
	}
	if(OP_equality > 0){
		printf("OP_equality\t%d\t==\n",OP_equality);
	}
	if(OP_greater_greater > 0){
		printf("OP_greater_greater\t%d\t>>\n",OP_greater_greater);
	}
	if(OP_greater > 0){
		printf("OP_greater\t%d\t>\n",OP_greater);
	}
	if(OP_less_less > 0){
		printf("OP_less_less\t%d\t<<\n",OP_less_less);
	}
	if(OP_less > 0){
		printf("OP_less\t%d\t<\n",OP_less);
	}
	if(Identifiers > 0){
		printf("Identifier\t%d\t%s\n", Identifiers, Identifier_Array[0]);
		for( int i = 1; i < Identifiers; i++){
			printf(" \t \t%s\n", Identifier_Array[i]);
		}
	}
	
	if(L_Paran > 0){
		printf("L_Paran\t%d\t(\n",L_Paran);
	}
	if(R_Paran > 0){
		printf("R_Paran\t%d\t)\n",R_Paran);
	}
	if(L_Curly > 0){
		printf("L_Curly\t%d\t{\n",L_Curly);
	}
	if(R_Curly > 0){
		printf("R_Curly\t%d\t}\n",R_Curly);
	}
	if(L_SqBracket > 0){
		printf("L_SqBracket\t%d\t[\n",L_SqBracket);
	}
	if(R_SqBracket > 0){
		printf("R_SqBracket\t%d\t]\n",R_SqBracket);
	}
	
	if(SemiColon > 0){
		printf("SemiColon\t%d\t;\n",SemiColon);
	}
	if(Comma > 0){
		printf("Comma\t%d\t,\n",Comma);
	}
	if(Question > 0){
		printf("Question\t%d\t?\n",Question);
	}
	if(Colon > 0){
		printf("Colon\t%d\t:\n",Colon);
	}
	if(Int_Const > 0){
		printf("Int_Const\t%d\t%s\n", Int_Const, Int_Const_Array[0]);
		for( int i = 1; i < Int_Const; i++){
			printf(" \t \t%s\n", Int_Const_Array[i]);
		}
	}
	if(Float_Const > 0){
		printf("Float_Const\t%d\t%s\n", Float_Const, Float_Const_Array[0]);
		for( int i = 1; i < Float_Const; i++){
			printf(" \t \t%s\n", Float_Const_Array[i]);
		}
	}
	if(Complex_Const > 0){
		printf("Complex_Const\t%d\t%s\n", Complex_Const, Complex_Const_Array[0]);
		for( int i = 1; i < Complex_Const; i++){
			printf(" \t \t%s\n", Complex_Const_Array[i]);
		}
	}
	if(String_Const > 0){
		printf("String_Const\t%d\t%s\n", String_Const, String_Const_Array[0]);
		for( int i = 1; i < String_Const; i++){
			printf(" \t \t%s\n", String_Const_Array[i]);
		}
	}
	
	if(Bool_True > 0){
		printf("Bool_True\t%d\tTrue\n",Bool_True);	
	}
	if(Bool_False > 0){
		printf("Bool_False\t%d\tFalse\n",Bool_False);
	}
	
//	printf("%s\t%d\t%d\n", Identifier_Array[0], Bool_False, KEY_finally);
//	printf("%d\t%d\t%d\t\n", Bool_True, Bool_False, KEY_finally);
	return 0;
}
