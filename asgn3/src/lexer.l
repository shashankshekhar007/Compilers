%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
void yyerror(char *);

char Identifier_Array[2000][100], Int_Const_Array[2000][20], Float_Const_Array[2000][20], String_Const_Array[2000][100], Complex_Const_Array[2000][20], Error_Array[2000][100];

int i;
int yylineno;

int OP_Assign, OP_Add, OP_Sub, OP_Mult, OP_Div, OP_Mod, OP_unary_add, OP_unary_sub, OP_unary_and, OP_unary_or, OP_unary_not, OP_Pow, OP_relational_and, OP_relational_or, OP_equality, OP_less, OP_greater, OP_less_less, OP_greater_greater, OP_not_equal, OP_greater_eq, OP_less_eq ; //operators. Ternary is yet to be included. How to differentiate unary add and binary add? 

int KEY_break, KEY_case, KEY_const, KEY_continue, KEY_default, KEY_else, KEY_fallthrough, KEY_for, KEY_func, KEY_if, KEY_import, KEY_interface, KEY_map, KEY_package, KEY_range, KEY_return, KEY_select, KEY_struct, KEY_switch, KEY_type, KEY_var, KEY_class, KEY_private, KEY_protected, KEY_public, KEY_static, KEY_try, KEY_catch, KEY_finally; //all keywords

int  L_Paran, R_Paran, L_Curly, R_Curly, L_SqBracket, R_SqBracket;

int  T_Int, T_Bool, T_String, T_Int8, T_Int16, T_Int32, T_Int64, T_Uint, T_Uint16, T_Uint32, T_Uint64, T_Uintptr,  T_Float32, T_Float64, T_Complex64, T_Complex128; //remember byte is an alias for U_Int8 and rune is an alias for int32

int Identifiers = 0;

int SemiColon, Comma, Question, Colon, UnderScore, Dots, DoubleQuotes, SingleQuotes;
int Line_No[2000];
int Int_Const, Float_Const, Complex_Const, String_Const, Bool_True, Bool_False;
int Error;
int Single_Line_Comment;
int Multiple_Line_Comment; //iske sath deal karna hai. Kab tak ignore karna hai
%}

doublequotes 	[\"]
singlequotes 	[\']
digit		[0-9]
letter		[a-zA-Z]
newline		[\n]
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
dot			[.]
semi_colon	[;]
curly_open	[{]
curly_close	[}]
open_paren	[(]
close_paren	[)]
left_sqbracket	[\[]
right_sqbracket	[\]]
mod		[%]
not		[!]
relational_and	[&][&]
relational_or	[|][|]
unary_and	[&]
unary_or	[|]
not_eq		[!][=]
binary_eq	[=][=]
greater_eq	[>][=]
less_eq		[<][=]
keyword		"break"|"case"|"const"|"continue"|"default"|"else"|"fallthrough"|"for"|"func"|"if"|"import"|"interface"|"map"|"package"|"range"|"return"|"select"|"struct"|"switch"|"type"|"var"|"class"|"private"|"protected"|"public"|"static"|"try"|"catch"|"finally"
type		"int"|"bool"|"string"|"int8"|"int16"|"int32"|"int64"|"uint"|"uint16"|"uint32"|"uint64"|"uintptr"|"float32"|"float64"|"complex64"|"complex128"
identifier	{letter}+({letter}|{digit}|{under_score})*

decimal_int	(plus|minus)?[1-9]+{digit}*
octal_int	(plus|minus)?[0]{digit}+
hex_int		(plus|minus)?[0][xX]([A-F]|{digit})+
int_lit		{decimal_int}|{octal_int}|{hex_int}|[0]
decimals	{digit}+
float_lit	({decimals}[.]{decimals}|[.]{decimals})
imaginary_lit	({decimals}|{float_lit})[i]
string_lit	["][^"\n]*["]

single_comment	[/][/][^\n]*
multi_comment	[/][*][^*]*[*][/]
boolean_true	"True"
boolean_false	"False"
error			.
%%

{single_comment}	{Single_Line_Comment++; return Single_line_comment;}
{multi_comment}		{Multiple_Line_Comment++;return Multi_line_comment;}
{keyword}		{if ( strcmp(yytext,"break")==0){ KEY_break++; return Key_break;}
				else if (strcmp(yytext, "case")==0) {KEY_case++; return Key_case;}
				else if (strcmp(yytext,"const")==0) {KEY_const++; return Key_const;}
				else if (strcmp(yytext, "continue")==0) {KEY_continue++; return Key_continue;}
				else if (strcmp(yytext,"default")==0) {KEY_default++; return Key_default;}
				else if (strcmp(yytext,"else")==0) {KEY_else++; return Key_else;}
				else if (strcmp(yytext,"fallthrough")==0) {KEY_fallthrough++; return Key_fallthrough;}
				else if (strcmp(yytext,"for")==0) {KEY_for++; return Key_for;}
				else if (strcmp(yytext,"func")==0) {KEY_func++; return Key_func;}
				else if (strcmp(yytext,"if")==0) {KEY_if++; return Key_if;}
				else if (strcmp(yytext,"import")==0) {KEY_import++; return Key_import;}
				else if (strcmp(yytext,"interface")==0) {KEY_interface++; return Key_interface;}
				else if (strcmp(yytext,"map")==0) {KEY_map++; return Key_map;}
				else if (strcmp(yytext,"package")==0) {KEY_package++; return Key_package;}
				else if (strcmp(yytext,"range")==0) {KEY_range++; return Key_range;}
				else if (strcmp(yytext,"return")==0) {KEY_return++; return Key_return;}
				else if (strcmp(yytext,"select")==0) {KEY_select++; return Key_select;}
				else if (strcmp(yytext,"struct")==0) {KEY_struct++; return Key_struct;}
				else if (strcmp(yytext,"switch")==0) {KEY_switch++; return Key_switch;}
				else if (strcmp(yytext,"type")==0) {KEY_type++; return Key_type;}
				else if (strcmp(yytext,"var")==0) {KEY_var++; return Key_var;}
				else if (strcmp(yytext,"class")==0) {KEY_class++; return Key_class;}
				else if (strcmp(yytext,"private")==0) {KEY_private++; return Key_private;}
				else if (strcmp(yytext,"protected")==0) {KEY_protected++; return Key_protected;}
				else if (strcmp(yytext,"public")==0) {KEY_public++; return Key_public;}
				else if (strcmp(yytext,"static")==0) {KEY_static++; return Key_static;}
				else if (strcmp(yytext,"try")==0) {KEY_try++; return Key_try;}
				else if (strcmp(yytext,"catch")==0) {KEY_catch++; return Key_catch;}
				else if (strcmp(yytext,"finally")==0) {KEY_finally++; return Key_finally;}
			return Keyword;
			}
{type}			{if(strcmp(yytext, "int")==0) {T_Int++;return T_int;} 
				else if (strcmp(yytext, "bool")==0) {T_Bool++; return T_bool;}
				else if (strcmp(yytext, "string")==0) {T_String++; return T_string;}
				else if (strcmp(yytext, "int8")==0 || strcmp(yytext, "byte")==0) {T_Int8++; return T_int8;}
				else if (strcmp(yytext, "int16")==0) {T_Int16++; return T_int16;}
				else if (strcmp(yytext, "int32")==0 || strcmp(yytext, "rune")==0) {T_Int32++; return T_int32;}
				else if (strcmp(yytext, "int64")==0) { T_Int64++; return T_int64;}
				else if (strcmp(yytext, "uint")==0) { T_Uint++; return T_uint;}
				else if (strcmp(yytext, "uint16")==0) { T_Uint16++; return T_uint16; }
				else if (strcmp(yytext, "uint32")==0) { T_Uint32++; return T_uint32; }
				else if (strcmp(yytext, "uint64")==0) { T_Uint64++; return T_uint64; }
				else if (strcmp(yytext, "uintptr")==0) { T_Uintptr++; return T_uintptr;}
				else if (strcmp(yytext, "float32")==0) { T_Float32++; return T_float32;}
				else if (strcmp(yytext, "float64")==0) { T_Float64++; return T_float64;}
				else if (strcmp(yytext, "complex64")==0) { T_Complex64++; return T_complex64; }
				else if (strcmp(yytext, "complex128")==0) { T_Complex128++; return T_complex128; }
			}
{imaginary_lit}		{strcpy(Complex_Const_Array[Complex_Const++], yytext); return Imaginary_lit;}
{float_lit}		{strcpy(Float_Const_Array[Float_Const++], yytext); return Float_lit;}
{int_lit}		{strcpy(Int_Const_Array[Int_Const++],yytext); return Int_lit;} 
{greatergreater}	{OP_greater_greater++; return Op_greater_greater;}
{lessless}		{OP_less_less++; return Op_less_less;}
{question}		{Question++; return M_question;}
{greater_eq}		{OP_greater_eq++; return Op_greater_eq;}
{less_eq}		{OP_less_eq++; return Op_less_eq;}
{greater}		{OP_greater++; return Op_greater;}
{less}			{OP_less++; return Op_less;}
{semi_colon}		{SemiColon++; return M_semicolon;}
{colon}			{Colon++; return M_colon;}
{comma}			{Comma++; return M_comma;} 
{not_eq}		{OP_not_equal++; return Op_not_equal;}
{binary_eq}		{OP_equality++; return Op_equality;}
{assign}		{OP_Assign++; return Op_assign;}
{plusplus}		{OP_unary_add++; return Op_unary_add;}
{minusminus}		{OP_unary_sub++; return Op_unary_sub;}
{plus}			{OP_Add++; return Op_add;}
{minus}			{OP_Sub++; return Op_sub;}
{mult}			{OP_Mult++; return Op_mult;}
{divide}		{OP_Div++; return Op_divide;}
{mod}			{OP_Mod++; return Op_mod;}
{curly_open}		{L_Curly++; return M_lcurly;}
{curly_close}		{R_Curly++; return M_rcurly;}
{open_paren}		{L_Paran++; return M_lparan;}
{close_paren}		{R_Paran++; return M_rparan;}
{left_sqbracket}	{L_SqBracket++; return M_lsqbracket;}
{right_sqbracket}	{R_SqBracket++; return M_rsqbracket;}
{power}			{OP_Pow++; return Op_pow;}
{relational_and}	{OP_relational_and++; return Op_relational_and;}
{relational_or}		{OP_relational_or++; return Op_relational_or;}
{unary_and}		{OP_unary_and++; return Op_unary_and;}
{unary_or}		{OP_unary_or++; return Op_unary_or;}
{not}			{OP_unary_not++; return Op_unary_not;}
{dot}			{Dots++; return M_dot;}
{boolean_true}		{Bool_True++; return Bool_true;}
{boolean_false}		{Bool_False++; return Bool_false;}
{string_lit}		{strcpy(String_Const_Array[String_Const++], yytext); return String_lit;}
{doublequotes}		{DoubleQuotes++; return M_doublequotes;}
{singlequotes}		{SingleQuotes++; return M_singlequotes;}
{identifier}		{strcpy(Identifier_Array[Identifiers++],yytext); return Identifier;}
{under_score}	{UnderScore++; return M_underscore;}
[\n]				{yylineno++; }
{whitespace}	{; }
{error}				{Line_No[Error]=yylineno;strcpy(Error_Array[Error++],yytext); yyerror(Error_Array[Error-1]);}
%%
int yywrap(void) {
return 1;
}
/*int main(int argc, char* argv[]){
	FILE *fh;
	if (argc == 2 && (fh = fopen(argv[1], "r")))
        yyin = fh;
    else{
    	printf("File not given or unable to open\n");
    	return 1;
    }
	yylex();
	printf("\nToken\t  Occureneces\tLexemes\n");
	printf("_______________________________________\n\n");
	if(KEY_break > 0)printf("KEY_break\t%d\tbreak\n",KEY_break);
	if(KEY_case > 0)printf("KEY_case\t%d\tcase\n",KEY_case);
	if(KEY_const > 0)printf("KEY_const\t%d\tconst\n",KEY_const);
	if(KEY_continue > 0)printf("KEY_continue\t%d\tcontinue\n",KEY_continue);
	if(KEY_default > 0)printf("KEY_default\t%d\tdefault\n",KEY_default);
	if(KEY_else > 0)printf("KEY_else\t%d\telse\n",KEY_else);
	if(KEY_fallthrough > 0)printf("KEY_fallthrough\t%d\tfallthrough\n",KEY_fallthrough);
	if(KEY_for > 0)printf("KEY_for\t\t%d\tfor\n",KEY_for);
	if(KEY_func > 0)printf("KEY_func\t%d\tfunc\n",KEY_func);
	if(KEY_if > 0)printf("KEY_if\t\t%d\tif\n",KEY_if);
	if(KEY_import > 0)printf("KEY_import\t%d\timport\n",KEY_import);
	if(KEY_interface > 0)printf("KEY_interface\t%d\tinterface\n",KEY_interface);
	if(KEY_map > 0)printf("KEY_map\t\t%d\tmap\n",KEY_map);
	if(KEY_package > 0)printf("KEY_package\t%d\tpackage\n",KEY_package);
	if(KEY_range > 0)printf("KEY_range\t%d\trange\n",KEY_range);
	if(KEY_return > 0)printf("KEY_return\t%d\treturn\n",KEY_return);
	if(KEY_select > 0)printf("KEY_select\t%d\tselect\n",KEY_select);
	if(KEY_struct > 0)printf("KEY_struct\t%d\tstruct\n",KEY_struct);
	if(KEY_switch > 0)printf("KEY_switch\t%d\tswitch\n",KEY_switch);
	if(KEY_type > 0)printf("KEY_type\t%d\ttype\n",KEY_type);
	if(KEY_var > 0)printf("KEY_var\t\t%d\tvar\n",KEY_var);
	if(KEY_class > 0)printf("KEY_class\t%d\tclass\n",KEY_class);
	if(KEY_private > 0)printf("KEY_private\t%d\tprivate\n",KEY_private);
	if(KEY_protected > 0)printf("KEY_protected\t%d\tprotected\n",KEY_protected);
	if(KEY_public > 0)printf("KEY_public\t%d\tpublic\n",KEY_public);
	if(KEY_static > 0)printf("KEY_static\t%d\tstatic\n",KEY_static);
	if(KEY_try > 0)printf("KEY_try\t\t%d\ttry\n",KEY_try);
	if(KEY_catch > 0)printf("KEY_catch\t%d\tcatch\n",KEY_catch);
	if(KEY_finally > 0)printf("KEY_finally\t%d\tfinally\n",KEY_finally);
	
	
	if(T_Int > 0)printf("T_Int\t\t%d\tint\n",T_Int);
	if(T_Bool > 0)printf("T_Bool\t\t%d\tbool\n",T_Bool);
	if(T_String > 0)printf("T_String\t%d\tstring\n",T_String);
	if(T_Int8 > 0)printf("T_Int8\t\t%d\tint8\n",T_Int8);
	if(T_Int16 > 0)printf("T_Int16\t\t%d\tint16\n",T_Int16);
	if(T_Int32 > 0)printf("T_Int32\t\t%d\tint32\n",T_Int32);
	if(T_Int64 > 0)printf("T_Int64\t\t%d\tint64\n",T_Int64);
	if(T_Uint > 0)printf("T_Uint\t\t%d\tuint\n",T_Uint);
	if(T_Uint16 > 0)printf("T_Uint16\t%d\tuint16\n",T_Uint16);
	if(T_Uint32 > 0)printf("T_Uint32\t%d\tuint32\n",T_Uint32);
	if(T_Uint64 > 0)printf("T_Uint64\t%d\tuint64\n",T_Uint64);
	if(T_Uintptr > 0)printf("T_Uintptr\t%d\tuintptr\n",T_Uintptr);
	if(T_Float32 > 0)printf("T_Float32\t%d\tfloat32\n",T_Float32);
	if(T_Float64 > 0)printf("T_Float64\t%d\tfloat64\n",T_Float64);
	if(T_Complex64 > 0)printf("T_Complex64\t%d\tcomplex64\n",T_Complex64);
	if(T_Complex128 > 0)printf("T_Complex128\t%d\tcomplex128\n",T_Complex128);
	
	if(OP_Assign > 0){
		printf("OP_Assign\t%d\t=\n",OP_Assign);
	}
 	if(OP_Add > 0){
		printf("OP_Add\t\t%d\t+\n",OP_Add);
	}
	if(OP_Sub > 0){
		printf("OP_Sub\t\t%d\t-\n",OP_Sub);
	}
	if(OP_Mult > 0){
		printf("OP_Mult\t\t%d\t*\n",OP_Mult);
	}
	if(OP_Div > 0){
		printf("OP_Div\t\t%d\t/\n",OP_Div);
	}
	if(OP_Mod > 0){
		printf("OP_Mod\t\t%d\t%%\n",OP_Mod);
	}
	if(OP_unary_add > 0){
		printf("OP_unary_add\t%d\t++\n",OP_unary_add);  //unary add ka symbol
	}
	if(OP_unary_sub > 0){
		printf("OP_unary_sub\t%d\t--\n",OP_unary_sub); 	//unary sub ka symbol
	}
	if(OP_not_equal > 0){
		printf("OP_not_equal\t%d\t!=\n", OP_not_equal);
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
		printf("OP_Pow\t\t%d\t^\n",OP_Pow);
	}
	if(OP_relational_and > 0){
		printf("OP_rel_and\t%d\t&&\n",OP_relational_and);	
	}
	if(OP_relational_or > 0){
		printf("OP_rel_or\t%d\t||\n",OP_relational_or);
	}
	if(OP_equality > 0){
		printf("OP_equality\t%d\t==\n",OP_equality);
	}
	if(OP_greater_greater > 0){
		printf("OP_gr_gr\t%d\t>>\n",OP_greater_greater);
	}
	if(OP_greater > 0){
		printf("OP_greater\t%d\t>\n",OP_greater);
	}
	if(OP_less_less > 0){
		printf("OP_less_less\t%d\t<<\n",OP_less_less);
	}
	if(OP_less > 0){
		printf("OP_less\t\t%d\t<\n",OP_less);
	}
	if(Identifiers > 0){
		printf("Identifier\t%d\t%s\n", Identifiers, Identifier_Array[0]);
		for( int i = 1; i < Identifiers; i++){
			printf(" \t \t \t%s\n", Identifier_Array[i]);
		}
	}
	
	if(L_Paran > 0){
		printf("L_Paran\t\t%d\t(\n",L_Paran);
	}
	if(R_Paran > 0){
		printf("R_Paran\t\t%d\t)\n",R_Paran);
	}
	if(L_Curly > 0){
		printf("L_Curly\t\t%d\t{\n",L_Curly);
	}
	if(R_Curly > 0){
		printf("R_Curly\t\t%d\t}\n",R_Curly);
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
		printf("Comma\t\t%d\t,\n",Comma);
	}
	if(Dots>0){
		printf("Dots\t\t%d\t.\n",Dots);
	}
	if(Question > 0){
		printf("Question\t\t%d\t?\n",Question);
	}
	if(Colon > 0){
		printf("Colon\t\t%d\t:\n",Colon);
	}
	if(UnderScore>0){
		printf("UnderScore\t%d\t_\n",UnderScore);
	}
	if(DoubleQuotes > 0){
		printf("DoubleQuotes\t%d\t\"\n",DoubleQuotes);
	}
	if(SingleQuotes > 0){
		printf("SingleQuotes\t%d\t\'\n",SingleQuotes);
	}
	if(Int_Const > 0){
		printf("Int_Const\t%d\t%s\n", Int_Const, Int_Const_Array[0]);
		for( int i = 1; i < Int_Const; i++){
			printf(" \t \t \t%s\n", Int_Const_Array[i]);
		}
	}
	if(Float_Const > 0){
		printf("Float_Const\t%d\t%s\n", Float_Const, Float_Const_Array[0]);
		for( int i = 1; i < Float_Const; i++){
			printf(" \t \t \t%s\n", Float_Const_Array[i]);
		}
	}
	if(Complex_Const > 0){
		printf("Complex_Const\t%d\t%s\n", Complex_Const, Complex_Const_Array[0]);
		for( int i = 1; i < Complex_Const; i++){
			printf(" \t \t \t%s\n", Complex_Const_Array[i]);
		}
	}
	if(String_Const > 0){
		printf("String_Const\t%d\t%s\n", String_Const, String_Const_Array[0]);
		for( int i = 1; i < String_Const; i++){
			printf(" \t \t \t%s\n", String_Const_Array[i]);
		}
	}
	
	if(Bool_True > 0){
		printf("Bool_True\t%d\tTrue\n",Bool_True);	
	}
	if(Bool_False > 0){
		printf("Bool_False\t%d\tFalse\n",Bool_False);
	}
	if(Error>0){
		printf("Total numbers of error: %d\n",Error);
		for(int i=0;i<Error;i++){
			printf("Unrecognized symbol %s in %d\n",Error_Array[i], Line_No[i]);
		}
		printf("\n");
	}
	
//	printf("%s\t%d\t%d\n", Identifier_Array[0], Bool_False, KEY_finally);
//	printf("%d\t%d\t%d\t\n", Bool_True, Bool_False, KEY_finally);
	fclose(fh);
	return 0;
}*/
