%{
#include <stdio.h>
#include <stdlib.h>

char Identifier_Array[2000][100], Int_Const_Array[2000][20], Float_Const_Array[2000][20], String_Const_Array[2000][100], Complex_Const_Array[2000][20];

int i;

int OP_Assign, OP_Add, OP_Sub, OP_Mult, OP_Div, OP_Mod, OP_unary_add, OP_unary_sub, OP_unary_and, OP_unary_or, OP_unary_not, OP_Pow, OP_relational_and, OP_relational_or, OP_equality, OP_less, OP_greater, OP_less_less, OP_greater_greater ; //operators. Ternary is yet to be included. How to differentiate unary add and binary add? 

int KEY_break, KEY_case, KEY_const, KEY_continue, KEY_default, KEY_else, KEY_fallthrough, KEY_for, KEY_func, KEY_if, KEY_import, KEY_interface, KEY_map, KEY_package, KEY_range, KEY_return, KEY_select, KEY_struct, KEY_switch, KEY_type, KEY_var, KEY_class, KEY_private, KEY_protected, KEY_public, KEY_static, KEY_try, KEY_catch, KEY_finally; //all keywords

int  L_Paran, R_Paran, L_Curly, R_Curly, L_SqBracket, R_SqBracket;

int  T_Int, T_Bool, T_String, T_Int8, T_Int16, T_Int32, T_Int64, T_Uint, T_Uint16, T_Uint32, T_Uint64, T_Uintptr,  T_Float32, T_Float64, T_Complex64, T_Complex128; //remember byte is an alias for U_Int8 and rune is an alias for int32

int Identifiers = 0;

int SemiColon, Comma, Question, Colon, UnderScore, Dots;

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
binary_eq	[=][=]
keyword		"break"|"case"|"const"|"continue"|"default"|"else"|"fallthrough"|"for"|"func"|"if"|"import"|"interface"|"map"|"package"|"range"|"return"|"select"|"struct"|"switch"|"type"|"var"|"class"|"private"|"protected"|"public"|"static"|"try"|"catch"|"finally"
type		"int"|"bool"|"string"|"int8"|"int16"|"int32"|"int64"|"uint"|"uint16"|"uint32"|"uint64"|"uintptr"|"float32"|"float64"|"complex64"|"complex128"
identifier	{letter}+({letter}|{digit}|{under_score})*

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
{keyword}		{
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
{dot}			{Dots++;}
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
{relational_and}	{OP_relational_and++;}
{relational_or}		{OP_relational_or++;}
{unary_and}		{OP_unary_and++;}
{unary_or}		{OP_unary_or++;}
{not}			{OP_unary_not++;}
{int_lit}		{strcpy(Int_Const_Array[Int_Const++],yytext);}
{float_lit}		{strcpy(Float_Const_Array[Float_Const++], yytext);}
{imaginary_lit}		{strcpy(Complex_Const_Array[Complex_Const++], yytext);}
{boolean_true}		{Bool_True++;}
{boolean_false}		{Bool_False++;}
{string_lit}		{strcpy(String_Const_Array[String_Const++], yytext);}
{identifier}		{strcpy(Identifier_Array[Identifiers++],yytext);}
{under_score}	{UnderScore++;}
{whitespace}	{;}

%%
int yywrap(void) {
return 1;
}
int main(int argc, char* argv[]){
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
	if(KEY_for > 0)printf("KEY_for\t%d\tfor\n",KEY_for);
	if(KEY_func > 0)printf("KEY_func\t%d\tfunc\n",KEY_func);
	if(KEY_if > 0)printf("KEY_if\t%d\tif\n",KEY_if);
	if(KEY_import > 0)printf("KEY_import\t%d\timport\n",KEY_import);
	if(KEY_interface > 0)printf("KEY_interface\t%d\tinterface\n",KEY_interface);
	if(KEY_map > 0)printf("KEY_map\t%d\tmap\n",KEY_map);
	if(KEY_package > 0)printf("KEY_package\t%d\tpackage\n",KEY_package);
	if(KEY_range > 0)printf("KEY_range\t%d\trange\n",KEY_range);
	if(KEY_return > 0)printf("KEY_return\t%d\treturn\n",KEY_return);
	if(KEY_select > 0)printf("KEY_select\t%d\tselect\n",KEY_select);
	if(KEY_struct > 0)printf("KEY_struct\t%d\tstruct\n",KEY_struct);
	if(KEY_switch > 0)printf("KEY_switch\t%d\tswitch\n",KEY_switch);
	if(KEY_type > 0)printf("KEY_type\t%d\ttype\n",KEY_type);
	if(KEY_var > 0)printf("KEY_var\t%d\tvar\n",KEY_var);
	if(KEY_class > 0)printf("KEY_class\t%d\tclass\n",KEY_class);
	if(KEY_private > 0)printf("KEY_private\t%d\tprivate\n",KEY_private);
	if(KEY_protected > 0)printf("KEY_protected\t%d\tprotected\n",KEY_protected);
	if(KEY_public > 0)printf("KEY_public\t%d\tpublic\n",KEY_public);
	if(KEY_static > 0)printf("KEY_static\t%d\tstatic\n",KEY_static);
	if(KEY_try > 0)printf("KEY_try\t%d\ttry\n",KEY_try);
	if(KEY_catch > 0)printf("KEY_catch\t%d\tcatch\n",KEY_catch);
	if(KEY_finally > 0)printf("KEY_finally\t%d\tfinally\n",KEY_finally);
	
	
	if(T_Int > 0)printf("T_Int\t\t%d\tint\n",T_Int);
	if(T_Bool > 0)printf("T_Bool\t\t%d\tbool\n",T_Bool);
	if(T_String > 0)printf("T_String\t\t%d\tstring\n",T_String);
	if(T_Int8 > 0)printf("T_Int8\t\t%d\tint8\n",T_Int8);
	if(T_Int16 > 0)printf("T_Int16\t\t%d\tint16\n",T_Int16);
	if(T_Int32 > 0)printf("T_Int32\t\t%d\tint32\n",T_Int32);
	if(T_Int64 > 0)printf("T_Int64\t\t%d\tint64\n",T_Int64);
	if(T_Uint > 0)printf("T_Uint\t\t%d\tuint\n",T_Uint);
	if(T_Uint16 > 0)printf("T_Uint16\t\t%d\tuint16\n",T_Uint16);
	if(T_Uint32 > 0)printf("T_Uint32\t\t%d\tuint32\n",T_Uint32);
	if(T_Uint64 > 0)printf("T_Uint64\t\t%d\tuint64\n",T_Uint64);
	if(T_Uintptr > 0)printf("T_Uintptr\t\t%d\tuintptr\n",T_Uintptr);
	if(T_Float32 > 0)printf("T_Float32\t\t%d\tfloat32\n",T_Float32);
	if(T_Float64 > 0)printf("T_Float64\t\t%d\tfloat64\n",T_Float64);
	if(T_Complex64 > 0)printf("T_Complex64\t%d\tcomplex64\n",T_Complex64);
	if(T_Complex128 > 0)printf("T_Complex128\t%d\tcomplex128\n",T_Complex128);
	
	if(OP_Assign > 0){
		printf("OP_Assign\t\t%d\t=\n",OP_Assign);
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
		printf("OP_Pow\t\t%d\t^\n",OP_Pow);
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
	
//	printf("%s\t%d\t%d\n", Identifier_Array[0], Bool_False, KEY_finally);
//	printf("%d\t%d\t%d\t\n", Bool_True, Bool_False, KEY_finally);
	fclose(fh);
	return 0;
}
