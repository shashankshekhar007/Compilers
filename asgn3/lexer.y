%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
void yyerror (char *);
FILE *yyin;
%}

%token Keyword Identifier Single_line_comment Multi_line_comment T_int T_bool T_string T_int8 T_int16 T_int32 T_int64 T_uint T_uint16 T_uint32 T_uint64 T_uintptr T_float32 T_float64 T_complex64 T_complex128
%token Key_break Key_case Key_const Key_continue Key_default Key_else Key_fallthrough Key_for Key_func Key_if Key_import Key_interface Key_map Key_package Key_range Key_return Key_select Key_struct Key_switch Key_type Key_var Key_class Key_private Key_protected Key_public Key_static Key_try Key_catch Key_finally
%token Imaginary_lit Float_lit Int_lit String_lit
%token Op_greater_greater Op_less_less Op_greater Op_less Op_greater_eq Op_less_eq Op_not_equal Op_equality Op_assign Op_unary_add Op_unary_sub Op_add Op_sub Op_mult Op_divide Op_mod Op_pow Op_relational_and Op_relational_or Op_unary_and Op_unary_or Op_unary_not
%token M_question M_semicolon M_colon M_comma M_lcurly M_rcurly M_lparan M_rparan M_lsqbracket M_rsqbracket M_dot M_doublequotes M_singlequotes M_underscore
%token Bool_true Bool_false


//%start SourceFile

%%

SourceFile:
    PackageClause M_semicolon ImportDeclList TopLevelDeclList	{fprintf(f, "SourceFile: PackageClause M_semicolon ImportDeclList TopLevelDeclList \n");}
    ;

Block:
    M_lcurly OPENB StatementList CLOSEB M_rcurly		{fprintf(f, "Block: M_lcurly OPENB StatementList CLOSEB M_rcurly \n");}
    ;

OPENB:								{fprintf(f, "OPENB: \n");}
    /* empty */ 
    ;

CLOSEB:								{fprintf(f, "CLOSEB: \n");}
    /* empty */ 
    ;

BrkBlk:								{fprintf(f, "BrkBlk: \n");}
    ;

BrkBlkEnd:							{fprintf(f, "BrkBlkEnd: \n");}
    ;

StatementList:
    StatementList Statement M_semicolon				{fprintf(f, "StatementList: StatementList Statement M_semicolon \n");}
    | Statement M_semicolon					{fprintf(f, "StatementList: Statement M_semicolon \n");}
    ;

Statement:
    Declaration							{fprintf(f, "Statement: Declaration \n");}
    | LabeledStmt						{fprintf(f, "Statement: LabeledStmt \n");}
    | SimpleStmt						{fprintf(f, "Statement: SimpleStmt \n");}
    | ReturnStmt						{fprintf(f, "Statement: ReturnStmt \n");}
    | BreakStmt							{fprintf(f, "Statement: BreakStmt \n");}
    | ContinueStmt						{fprintf(f, "Statement: ContinueStmt \n");}
    /*| GotoStmt*/
    | Block							{fprintf(f, "Statement: Block \n");}
    | IfStmt							{fprintf(f, "Statement: IfStmt \n");}
    //| SwitchStmt
    /* | SelectStmt      { $$ = &(init() << $1 >> "Statement"); } */
    | ForStmt							{fprintf(f, "Statement: ForStmt \n");}
    ;

SimpleStmt:
    EmptyStmt							{fprintf(f, "SimpleStmt: EmptyStmt \n");}
    | ExpressionStmt						{fprintf(f, "SimpleStmt: ExpressionStmt \n");}
//    | SendStmt
    | IncDecStmt						{fprintf(f, "SimpleStmt: IncDecStmt \n");}
    | Assignment						{fprintf(f, "SimpleStmt: Assignment \n");}
    | ShortVarDecl						{fprintf(f, "SimpleStmt: ShortVarDecl \n");}
    ;

EmptyStmt:							{fprintf(f, "EmptyStmt: \n");}
    /* blank */
    ;


ExpressionStmt:
    Expression							{fprintf(f, "ExpressionStmt: Expression\n");}
    ;

IncDecStmt:
    Expression Op_unary_add					{fprintf(f, "IncDecStmt: Expression Op_unary_add \n");}
    | Expression Op_unary_sub					{fprintf(f, "IncDecStmt: Expression Op_unary_sub\n");}
    | Expression Op_add Op_assign Expression			{fprintf(f, "IncDecStmt: Expression Op_add Op_assign Expression \n");}
    | Expression Op_sub Op_assign Expression			{fprintf(f, "IncDecStmt: Expression Op_sub Op_assign Expression \n");}
    ;

Assignment:
    ExpressionList ASN_OP ExpressionList 			{fprintf(f, "Assignment: ExpressionList ASN_OP ExpressionList \n");}
    ;

ADD_OP:
	Op_add							{fprintf(f, "ADD_OP: Op_add \n");}
	|Op_sub							{fprintf(f, "ADD_OP: Op_sub \n");}
	|Op_unary_or						{fprintf(f, "ADD_OP: Op_unary_or \n");}
	|Op_pow							{fprintf(f, "ADD_OP: Op_pow \n");}
	;

ASN_OP:
	ADD_OP Op_assign					{fprintf(f, "ASN_OP: ADD_OP Op_assign \n");}
	|MUL_OP Op_assign					{fprintf(f, "ASN_OP: MUL_OP Op_assign \n");}
	|Op_assign						{fprintf(f, "ASN_OP: Op_assign \n");}
	;

ShortVarDecl:
    ExpressionList Op_equality ExpressionList			{fprintf(f, "ShortVarDecl: ExpressionList Op_equality ExpressionList\n");}
    ;

VarDecl:
    Key_var VarSpec						{fprintf(f, "VarDecl: Key_var VarSpec \n");}
    ;

VarSpec:
    IdentifierList Type						{fprintf(f, "VarSpec: IdentifierList Type \n");}
    | IdentifierList Type ASN_OP ExpressionList			{fprintf(f, "VarSpec: IdentifierList Type ASN_OP ExpressionList \n");}
    | IdentifierList ASN_OP ExpressionList			{fprintf(f, "VarSpec: IdentifierList ASN_OP ExpressionList \n");}
    ;

Declaration:
    TypeDecl							{fprintf(f, "Declaration: TypeDecl \n");}
    | VarDecl							{fprintf(f, "Declaration: VarDecl \n");}
    ;

FunctionDecl:
    Key_func Identifier OPENB Signature CLOSEB 			{fprintf(f, "FunctionDecl: Key_func Identifier OPENB Signature CLOSEB\n");}
    | Key_func Identifier OPENB Signature Block CLOSEB		{fprintf(f, "FunctionDecl: Key_func Identifier OPENB Signature Block CLOSEB \n");}
    ;

Signature:
    Parameters							{fprintf(f, "Signature: Parameters\n");}
    | Parameters Result						{fprintf(f, "Signature: Parameters Result \n");}
    ;

Result:
    M_lparan TypeList M_rparan					{fprintf(f, "Result: M_lparan TypeList M_rparan\n");}
    | Type							{fprintf(f, "Result: Type \n");}
    ;

Parameters:
    M_lparan M_rparan						{fprintf(f, "Parameters: M_lparan M_rparan \n");}
    | M_lparan ParameterList  M_rparan				{fprintf(f, "Parameters: M_lparan ParameterList M_rparan \n");}
    | M_lparan ParameterList M_comma M_rparan			{fprintf(f, "Parameters: M_lparan ParameterList M_comma M_rparan \n");}
    ;

ParameterList:
    ParameterDecl						{fprintf(f, "ParameterList: ParameterDecl \n");}
    | ParameterList M_comma ParameterDecl			{fprintf(f, "ParameterList: ParameterList M_comma ParameterDecl \n");}
    ;

ParameterDecl:
    IdentifierList Type						{fprintf(f, "ParameterDecl: IdentifierList Type \n");}
    ;

TypeList:
    TypeList M_comma Type					{fprintf(f, "TypeList: TypeList M_comma Type \n");}
    | Type							{fprintf(f, "TypeList: Type \n");}
    ;

IdentifierList:
    Identifier							{fprintf(f, " \n");}
    | IdentifierList M_comma Identifier				{fprintf(f, " \n");}
    ;

QualifiedIdent:
    Identifier M_dot Identifier					{fprintf(f, " \n");}
    ;

MethodDecl:
    Key_func Receiver Identifier Signature			{fprintf(f, " \n");}
    ;

Receiver:
    Parameters							{fprintf(f, " \n");}
    ;

TopLevelDeclList:
    TopLevelDeclList TopLevelDecl M_semicolon			{fprintf(f, " \n");}
    | TopLevelDecl M_semicolon					{fprintf(f, " \n");}
    ;

CompositeLit:
    LiteralType LiteralValue					{fprintf(f, " \n");}
;

LiteralType:
    StructType							{fprintf(f, " \n");}
    | ArrayType							{fprintf(f, " \n");}
    | PointerType						{fprintf(f, " \n");}
    | M_lsqbracket DOTS M_rsqbracket Operand			{fprintf(f, " \n");}
    | SliceType							{fprintf(f, " \n");}
    | MapType							{fprintf(f, " \n");}
    ;

Type:
    LiteralType							{fprintf(f, " \n");}
    | OperandName						{fprintf(f, " \n");}
    ;

Operand:
    Literal							{fprintf(f, " \n");}
    | OperandName						{fprintf(f, " \n");}
    | M_lparan Expression M_rparan				{fprintf(f, " \n");}
    ;

OperandName:
    Identifier							{fprintf(f, " \n");}
    ;

LiteralValue:
    M_lcurly M_rcurly						{fprintf(f, " \n");}
    | M_semicolon M_rcurly					{fprintf(f, " \n");}
    | M_lcurly ElementList M_rcurly				{fprintf(f, " \n");}
    | M_semicolon ElementList M_rcurly				{fprintf(f, " \n");}
    | M_lcurly ElementList M_comma M_rcurly			{fprintf(f, " \n");}
    | M_semicolon ElementList M_comma M_rcurly			{fprintf(f, " \n");}
    ;

SliceType:
    M_lsqbracket M_rsqbracket Type				{fprintf(f, " \n");}
    ;

ElementList:
    KeyedElement						{fprintf(f, " \n");}
    | ElementList M_comma KeyedElement				{fprintf(f, " \n");}
    ;

KeyedElement:
    Element							{fprintf(f, " \n");}
    | Key M_colon Element					{fprintf(f, " \n");}
    ;

Key:
    Expression							{fprintf(f, " \n");}
    | LiteralValue						{fprintf(f, " \n");}
    ;

Element:
    Expression							{fprintf(f, " \n");}
    | LiteralValue						{fprintf(f, " \n");}
    ;

TopLevelDecl:
    Declaration							{fprintf(f, " \n");}
    | FunctionDecl						{fprintf(f, " \n");}
    | MethodDecl						{fprintf(f, " \n");}
    ;

LabeledStmt:
    Identifier M_colon Statement				{fprintf(f, " \n");}
    ;

ReturnStmt:
    Key_return							{fprintf(f, " \n");}
    | Key_return ExpressionList					{fprintf(f, " \n");}
    ;

BreakStmt:
    Key_break							{fprintf(f, " \n");}
    | Key_break Identifier					{fprintf(f, " \n");}
    ;

ContinueStmt:
    Key_continue						{fprintf(f, " \n");}
    | Key_continue Identifier					{fprintf(f, " \n");}
    ;

IfStmt:
    Key_if OPENB Expression Block CLOSEB				{fprintf(f, " \n");}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block CLOSEB	{fprintf(f, " \n");}
    | Key_if OPENB Expression Block Key_else Block CLOSEB		{fprintf(f, " \n");}
    | Key_if OPENB Expression Block Key_else IfStmt CLOSEB		{fprintf(f, " \n");}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else IfStmt CLOSEB	{fprintf(f, " \n");}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB	{fprintf(f, " \n");}
    ;

EmptyExpr:
     /*empty*/							{fprintf(f, "EmptyExpr: \n");}
     ;
     
Empty:
     /**/							{fprintf(f, "Empty: \n");}
     ;
     
ForStmt:
       Key_for OPENB SimpleStmt M_semicolon BrkBlk ExpressionStmt M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB						{fprintf(f, " \n");}
       | Key_for OPENB Expression BrkBlk Block BrkBlkEnd CLOSEB	{fprintf(f, " \n");}
       | Key_for BrkBlk Block BrkBlkEnd				{fprintf(f, " \n");}
       | Key_for OPENB SimpleStmt M_semicolon BrkBlk EmptyExpr M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB								{fprintf(f, " \n");}
       | Key_for OPENB EmptyStmt Empty BrkBlk Expression Empty EmptyStmt Block BrkBlkEnd CLOSEB								{fprintf(f, " \n");}
       ;

RangeClause:
    Key_range Expression					{fprintf(f, " \n");}
    | ExpressionList Op_equality Key_range Expression		{fprintf(f, " \n");}
    | ExpressionList Op_assign Key_range Expression		{fprintf(f, " \n");}
    ;

Expression:
    Expression1
    ;

Expression1:
    Expression1 Op_relational_or Expression2
    | Expression2
    ;

Expression2:
    Expression2 Op_relational_and Expression3
    | Expression3
    ;

Expression3:
    Expression3 REL_OP Expression4
    | Expression4
    ;

Expression4:
    Expression4 Op_unary_or Expression5
    | Expression4 D4 Expression5
    | Expression5
    ;

Expression5:
    Expression5 MUL_OP PrimaryExpr
    | Expression5 Op_unary_and PrimaryExpr
    | Expression5 Op_mult PrimaryExpr
    | UnaryExpr
    ;

D4:
	Op_add
	|Op_sub
	|Op_pow
	;

REL_OP:
	Op_assign
	|Op_not_equal
	|Op_less
	|Op_greater
	|Op_greater_eq
	|Op_less_eq
	;

MUL_OP:
	Op_mult
	|Op_divide
	|Op_mod
	|Op_less_less
	|Op_greater_greater
	|Op_unary_and
	;


UnaryExpr:
    PrimaryExpr
    | UnaryOp PrimaryExpr
    ;

PrimaryExpr:
    Operand
    | PrimaryExpr Selector
    | PrimaryExpr Index
    | PrimaryExpr Slice
    | PrimaryExpr TypeAssertion
    | PrimaryExpr Arguments
    | OperandName StructLiteral
    ;

StructLiteral:
    M_lcurly KeyValList M_rcurly
    ;

KeyValList:
    /* empty */
    | Expression M_colon Expression
    | Expression M_colon Expression M_comma KeyValList
    ;

Selector:
    M_dot Identifier
    ;

Index:
	M_lsqbracket Expression M_rsqbracket
    ;

Slice:
    M_lsqbracket M_colon M_rsqbracket
    | M_lsqbracket M_colon Expression M_rsqbracket
    | M_lsqbracket Expression M_colon M_rsqbracket
    | M_lsqbracket Expression M_colon Expression M_rsqbracket
    | M_lsqbracket M_colon Expression M_colon Expression M_rsqbracket
    | M_lsqbracket Expression M_colon Expression M_colon Expression M_rsqbracket
    ;

TypeDecl:
    Key_type TypeSpec
    ;

TypeSpec:
    Identifier Type
    ;

TypeAssertion:
    M_dot M_lparan Type M_rparan
    ;

Arguments:
    M_lparan M_rparan
    | M_lparan ExpressionList M_rparan
    | M_lparan ExpressionList DOTS M_rparan
    ;

DOTS:
	M_dot M_dot M_dot
	;

ExpressionList:
    Expression
    | ExpressionList M_comma Expression
    ;

MapType:
    Key_map M_lsqbracket Type M_rsqbracket Type
    ;

StructType:
    Key_struct M_lcurly FieldDeclList M_rcurly
    | Key_struct M_semicolon FieldDeclList M_rcurly
    | Key_struct M_lcurly M_rcurly
    | Key_struct M_semicolon M_rcurly
    ;

FieldDeclList:
    FieldDecl M_semicolon
    | FieldDeclList FieldDecl M_semicolon
    ;

FieldDecl:
    IdentifierList Type String
    | IdentifierList Type
    ;

PointerType:
    Op_mult Type
    ;

ArrayType:
    M_lsqbracket Expression M_rsqbracket Type
    ;

Literal:
    BasicLit
    | CompositeLit
    ;

BasicLit:
    Int_lit
    |Float_lit
    |String
    |Bool_true
    |Bool_false
    |Imaginary_lit // this is the extra added support
    ;

UnaryOp:
	UN_OP
	| D4
	| Op_unary_and
	| Op_mult
	;

UN_OP:
	Op_add
	|Op_sub
	|Op_unary_not
	|Op_pow
	|Op_mult
	|Op_unary_and
	;
	
String:
	String_lit
	;

PackageClause:
    Key_package Identifier
    ;

ImportDeclList:
    /* empty */
    | ImportDeclList ImportDecl M_semicolon
    | ImportDecl M_semicolon
    ;

ImportDecl:
    Key_import M_lparan ImportSpecList M_rparan
    | Key_import ImportSpec
    ;

ImportSpecList:
    /* empty */
    | ImportSpecList ImportSpec M_semicolon
    | ImportSpec M_semicolon
    ;

ImportSpec:
    Identifier ImportPath
    | M_dot ImportPath
    | ImportPath
    ;

ImportPath:
    String
    ;


%%
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
