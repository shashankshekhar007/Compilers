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
%token Op_greater_greater Op_less_less Op_greater Op_less Op_greater_eq Op_less_eq Op_not_equal Op_equality Op_assign Op_unary_add Op_unary_sub Op_add Op_sub Op_mult Op_divide Op_mod Op_pow Op_relational_and Op_relational_or Op_unary_and Op_unary_or Op_unary_not Op_mult
%token M_question M_semicolon M_colon M_comma M_lcurly M_rcurly M_lparan M_rparan M_lsqbracket M_rsqbracket M_dot M_doublequotes M_singlequotes M_underscore
%token Bool_true Bool_false
%start SourceFile

%%

SourceFile:
    PackageClause M_semicolon ImportDeclList TopLevelDeclList
    ;

Block:
    M_semicolon OPENB StatementList CLOSEB M_rcurly
    ;

OPENB:
    /* empty */
    ;

CLOSEB:
    /* empty */
    ;

BrkBlk:
    ;

BrkBlkEnd:
    ;

StatementList:
    StatementList Statement M_semicolon
    | Statement M_semicolon
    ;

Statement:
    Declaration
    | LabeledStmt
    | SimpleStmt
    | ReturnStmt
    | BreakStmt
    | ContinueStmt
    /*| GotoStmt*/
    | Block
    | IfStmt
    //| SwitchStmt
    /* | SelectStmt      { $$ = &(init() << $1 >> "Statement"); } */
    | ForStmt
    ;

SimpleStmt:
    EmptyStmt
    | ExpressionStmt
//    | SendStmt
    | IncDecStmt
    | Assignment
    | ShortVarDecl
    ;

EmptyStmt:
    /* blank */
    ;

ExpressionStmt:
    Expression
    ;

IncDecStmt:
    Expression Op_unary_add
    | Expression Op_unary_sub
    | Expression Op_add Op_assign Expression
    | Expression Op_sub Op_assign Expression
    ;

Assignment:
    ExpressionList Op_assign ExpressionList 
    ;

ShortVarDecl:
    ExpressionList Op_equality ExpressionList
    ;

VarDecl:
    Key_var VarSpec
    ;

VarSpec:
    IdentifierList Type
    | IdentifierList Type Op_assign ExpressionList
    | IdentifierList Op_assign ExpressionList
    ;

Declaration:
    TypeDecl
    | VarDecl
    ;

FunctionDecl:
    Key_func Identifier OPENB Signature CLOSEB
    | Key_func Identifier OPENB Signature
    ;

Signature:
    Parameters
    | Parameters Result
    ;

Result:
    '(' TypeList ')'
    | Type
    ;

Parameters:
    '('  ')'
    | '(' ParameterList  ')'
    | '(' ParameterList ',' ')'
    ;

ParameterList:
    ParameterDecl
    | ParameterList ',' ParameterDecl
    ;

ParameterDecl:
    IdentifierList Type
    ;

TypeList:
    TypeList ',' Type
    | Type
    ;

IdentifierList:
    Identifier
    | IdentifierList ',' Identifier
    ;

QualifiedIdent:
    Identifier '.' Identifier
    ;

MethodDecl:
    Key_func Receiver Identifier Signature
    ;

Receiver:
    Parameters
    ;

TopLevelDeclList:
    TopLevelDeclList TopLevelDecl M_semicolon
    | TopLevelDecl M_semicolon
    ;

CompositeLit:
    LiteralType LiteralValue
;

LiteralType:
    StructType
    | ArrayType
    | PointerType
    | '[' DOTS ']' Operand
    | SliceType
    | MapType
    ;

Type:
    LiteralType
    | OperandName
    ;

Operand:
    Literal
    | OperandName
    | '(' Expression ')'
    ;

OperandName:
    Identifier
    ;

LiteralValue:
    '{' '}'
    | M_semicolon '}'
    | '{' ElementList '}'
    | M_semicolon ElementList '}'
    | '{' ElementList ',' '}'
    | M_semicolon ElementList ',' '}'
    ;

SliceType:
    '[' ']' Type
    ;

ElementList:
    KeyedElement
    | ElementList ',' KeyedElement
    ;

KeyedElement:
    Element
    | Key ':' Element
    ;

Key:
    Expression
    | LiteralValue
    ;

Element:
    Expression
    | LiteralValue
    ;

TopLevelDecl:
    Declaration
    | FunctionDecl
    | MethodDecl
    ;

LabeledStmt:
    Identifier M_colon Statement
    ;

ReturnStmt:
    Key_return
    | Key_return ExpressionList
    ;

BreakStmt:
    Key_break
    | Key_break Identifier
    ;

ContinueStmt:
    Key_continue
    | Key_continue Identifier
    ;

IfStmt:
    Key_if OPENB Expression Block CLOSEB
    | Key_if OPENB SimpleStmt ';' Expression Block CLOSEB
    | Key_if OPENB Expression Block Key_else Block CLOSEB
    | Key_if OPENB Expression Block Key_else IfStmt CLOSEB
    | Key_if OPENB SimpleStmt ';' Expression Block Key_else IfStmt CLOSEB
    | Key_if OPENB SimpleStmt ';' Expression Block Key_else Block CLOSEB
    ;

EmptyExpr:
     /*empty*/
     ;
     
Empty:
     /**/
     ;
     
ForStmt:
       Key_for OPENB SimpleStmt ';' BrkBlk ExpressionStmt ';' SimpleStmt Block BrkBlkEnd CLOSEB
       | Key_for OPENB Expression BrkBlk Block BrkBlkEnd CLOSEB 
       | Key_for BrkBlk Block BrkBlkEnd 
       | Key_for OPENB SimpleStmt ';' BrkBlk EmptyExpr ';' SimpleStmt Block BrkBlkEnd CLOSEB 
       | Key_for OPENB EmptyStmt Empty BrkBlk Expression Empty EmptyStmt Block BrkBlkEnd CLOSEB 
       ;

RangeClause:
    Key_range Expression
    | ExpressionList Op_equality Key_range Expression
    | ExpressionList '=' Key_range Expression
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
    '{' KeyValList '}'
    ;

KeyValList:
    /* empty */
    | Expression ':' Expression
    | Expression ':' Expression ',' KeyValList
    ;

Selector:
    '.' Identifier
    ;

Index:
	'[' Expression ']'
    ;

Slice:
    '[' ':' ']'
    | '[' ':' Expression ']'
    | '[' Expression ':' ']'
    | '[' Expression ':' Expression ']'
    | '[' ':' Expression ':' Expression ']'
    | '[' Expression ':' Expression ':' Expression ']'
    ;

TypeDecl:
    Key_type TypeSpec
    ;

TypeSpec:
    Identifier Type
    ;

TypeAssertion:
    '.' '(' Type ')'
    ;

Arguments:
    '(' ')'
    | '(' ExpressionList ')'
    | '(' ExpressionList DOTS ')'
    ;

DOTS:
	M_dot M_dot M_dot
	;

ExpressionList:
    Expression
    | ExpressionList ',' Expression
    ;

MapType:
    Key_map '[' Type ']' Type
    ;

StructType:
    Key_struct '{' FieldDeclList '}'
    | Key_struct M_semicolon FieldDeclList '}'
    | Key_struct '{' '}'
    | Key_struct M_semicolon '}'
    ;

FieldDeclList:
    FieldDecl ';'
    | FieldDeclList FieldDecl ';'
    ;

FieldDecl:
    IdentifierList Type String
    | IdentifierList Type
    ;

PointerType:
    Op_mult Type
    ;

ArrayType:
    '[' Expression ']' Type
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
    Key_import '(' ImportSpecList ')'
    | Key_import ImportSpec
    ;

ImportSpecList:
    /* empty */
    | ImportSpecList ImportSpec M_semicolon
    | ImportSpec M_semicolon
    ;

ImportSpec:
    Identifier ImportPath
    | '.' ImportPath
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
