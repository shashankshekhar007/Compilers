%{
#include <stdio.h>
#include <stdlib.h>
int yylex(void);
void yyerror (char *);
FILE *yyin;
FILE * f;
char* outputfilename;
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

//ADD_OP:
//	Op_add							{fprintf(f, "ADD_OP: Op_add \n");}
//	|Op_sub							{fprintf(f, "ADD_OP: Op_sub \n");}
//	|Op_unary_or						{fprintf(f, "ADD_OP: Op_unary_or \n");}
//	|Op_pow							{fprintf(f, "ADD_OP: Op_pow \n");}
//	;

ASN_OP:
	Op_add Op_assign					{fprintf(f, "ASN_OP: Op_add Op_assign \n");}
	|Op_sub Op_assign					{fprintf(f, "ASN_OP: Op_sub Op_assign \n");}
	|Op_unary_or Op_assign					{fprintf(f, "ASN_OP: Op_pow Op_assign \n");}
	|Op_pow Op_assign					{fprintf(f, "ASN_OP: MUL_OP Op_assign \n");}
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
    Identifier							{fprintf(f, "IdentifierList: Identifier \n");}
    | IdentifierList M_comma Identifier				{fprintf(f, "IdentifierList: IdentifierList M_comma Identifier \n");}
    ;

//QualifiedIdent:
//    Identifier M_dot Identifier					{fprintf(f, "QualifiedIdent: Identifier M_dot Identifier \n");}
//    ;

MethodDecl:
    Key_func Receiver Identifier Signature			{fprintf(f, "MethodDecl: Key_func Receiver Identifier Signature \n");}
    ;

Receiver:
    Parameters							{fprintf(f, "Receiver: Parameters \n");}
    ;

TopLevelDeclList:
    TopLevelDeclList TopLevelDecl M_semicolon			{fprintf(f, "TopLevelDeclList: TopLevelDeclList TopLevelDecl M_semicolon \n");}
    | TopLevelDecl M_semicolon					{fprintf(f, "TopLevelDeclList: TopLevelDecl M_semicolon \n");}
    ;

CompositeLit:
    LiteralType LiteralValue					{fprintf(f, "CompositeLit: LiteralType LiteralValue \n");}
;

LiteralType:
    StructType							{fprintf(f, "LiteralType: StructType\n");}
    | ArrayType							{fprintf(f, "LiteralType: ArrayType\n");}
    | PointerType						{fprintf(f, "LiteralType: PointerType\n");}
    | M_lsqbracket DOTS M_rsqbracket Operand			{fprintf(f, "LiteralType: M_lsqbracket DOTS M_rsqbracket Operand\n");}
    | SliceType							{fprintf(f, "LiteralType: SliceType\n");}
    | MapType							{fprintf(f, "LiteralType: MapType\n");}
    ;

Type:
    LiteralType							{fprintf(f, "Type: LiteralType \n");}
    | OperandName						{fprintf(f, "Type: OperandName \n");}
    ;

Operand:
    Literal							{fprintf(f, "Operand: Literal \n");}
    | OperandName						{fprintf(f, "Operand: OperandName \n");}
    | M_lparan Expression M_rparan				{fprintf(f, "Operand: M_lparan Expression M_rparan\n");}
    ;

OperandName:
    Identifier							{fprintf(f, "OperandName: Identifier \n");}
    ;

LiteralValue:
    M_lcurly M_rcurly						{fprintf(f, "LiteralValue: M_lcurly M_rcurly \n");}
    | M_semicolon M_rcurly					{fprintf(f, "LiteralValue: M_semicolon M_rcurly \n");}
    | M_lcurly ElementList M_rcurly				{fprintf(f, "LiteralValue: M_lcurly ElementList M_rcurly \n");}
    | M_semicolon ElementList M_rcurly				{fprintf(f, "LiteralValue: M_semicolon ElementList M_rcurly \n");}
    | M_lcurly ElementList M_comma M_rcurly			{fprintf(f, "LiteralValue: M_lcurly ElementList M_comma M_rcurly \n");}
    | M_semicolon ElementList M_comma M_rcurly			{fprintf(f, "LiteralValue: M_semicolon ElementList M_comma M_rcurly \n");}
    ;

SliceType:
    M_lsqbracket M_rsqbracket Type				{fprintf(f, "SliceType: M_lsqbracket M_rsqbracket Type \n");}
    ;

ElementList:
    KeyedElement						{fprintf(f, "ElementList: KeyedElement \n");}
    | ElementList M_comma KeyedElement				{fprintf(f, "ElementList: ElementList M_comma KeyedElement \n");}
    ;

KeyedElement:
    Element							{fprintf(f, "KeyedElement: Element \n");}
    | Key M_colon Element					{fprintf(f, "KeyedElement: Key M_colon Element \n");}
    ;

Key:
    Expression							{fprintf(f, "Key: Expression \n");}
    | LiteralValue						{fprintf(f, "Key: LiteralValue \n");}
    ;

Element:
    Expression							{fprintf(f, "Element: Expression \n");}
    | LiteralValue						{fprintf(f, "Element: LiteralValue \n");}
    ;

TopLevelDecl:
    Declaration							{fprintf(f, "TopLevelDecl: Declaration \n");}
    | FunctionDecl						{fprintf(f, "TopLevelDecl: FunctionDecl \n");}
    | MethodDecl						{fprintf(f, "TopLevelDecl: MethodDecl \n");}
    ;

LabeledStmt:
    Identifier M_colon Statement				{fprintf(f, "LabeledStmt: Identifier M_colon Statement \n");}
    ;

ReturnStmt:
    Key_return							{fprintf(f, "ReturnStmt: Key_return \n");}
    | Key_return ExpressionList					{fprintf(f, "ReturnStmt: Key_return ExpressionList \n");}
    ;

BreakStmt:
    Key_break							{fprintf(f, "BreakStmt: Key_break \n");}
    | Key_break Identifier					{fprintf(f, "BreakStmt: Key_break Identifier \n");}
    ;

ContinueStmt:
    Key_continue						{fprintf(f, "ContinueStmt: Key_continue \n");}
    | Key_continue Identifier					{fprintf(f, "ContinueStmt: Key_continue Identifier \n");}
    ;

IfStmt:
    Key_if OPENB Expression Block CLOSEB				{fprintf(f, "IfStmt: Key_if OPENB Expression Block CLOSEB \n");}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block CLOSEB	{fprintf(f, "IfStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block CLOSEB \n");}
    | Key_if OPENB Expression Block Key_else Block CLOSEB		{fprintf(f, "IfStmt: Key_if OPENB Expression Block Key_else Block CLOSEB \n");}
    | Key_if OPENB Expression Block Key_else IfStmt CLOSEB		{fprintf(f, "IfStmt: Key_if OPENB Expression Block Key_else IfStmt CLOSEB \n");}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else IfStmt CLOSEB	{fprintf(f, "IfStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else IfStmt CLOSEB \n");}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB	{fprintf(f, "IfStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB \n");}
    ;

EmptyExpr:
     /*empty*/							{fprintf(f, "EmptyExpr: \n");}
     ;

Empty:
     /**/							{fprintf(f, "Empty: \n");}
     ;

ForStmt:
       Key_for OPENB SimpleStmt M_semicolon BrkBlk ExpressionStmt M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB						{fprintf(f, " \n");}
       | Key_for OPENB Expression BrkBlk Block BrkBlkEnd CLOSEB	{fprintf(f, "ForStmt: Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB \n");}
       | Key_for BrkBlk Block BrkBlkEnd				{fprintf(f, "ForStmt: Key_for BrkBlk Block BrkBlkEnd\n");}
       | Key_for OPENB SimpleStmt M_semicolon BrkBlk EmptyExpr M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB								{fprintf(f, "ForStmt: Key_for OPENB SimpleStmt M_semicolon BrkBlk EmptyExpr M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB \n");}
       | Key_for OPENB EmptyStmt Empty BrkBlk Expression Empty EmptyStmt Block BrkBlkEnd CLOSEB								{fprintf(f, "ForStmt: Key_for OPENB EmptyStmt Empty BrkBlk Expression Empty EmptyStmt Block BrkBlkEnd CLOSEB \n");}
       ;

//RangeClause:
//    Key_range Expression					{fprintf(f, "RangeClause: Key_range Expression \n");}
//    | ExpressionList Op_equality Key_range Expression		{fprintf(f, "RangeClause: ExpressionList Op_equality Key_range Expression\n");}
//    | ExpressionList Op_assign Key_range Expression		{fprintf(f, "RangeClause: ExpressionList Op_assign Key_range Expression \n");}
//    ;

Expression:
    Expression1							{fprintf(f, "Expression: Expression1 \n");}
    ;

Expression1:
    Expression1 Op_relational_or Expression2			{fprintf(f, "Expression1: Expression1 Op_relational_or Expression2 \n");}
    | Expression2						{fprintf(f, "Expression1: Expression2 \n");}
    ;

Expression2:
    Expression2 Op_relational_and Expression3			{fprintf(f, "Expression2: Expression2 Op_relational_and Expression3 \n");}
    | Expression3						{fprintf(f, "Expression2: Expression3 \n");}
    ;

Expression3:
    Expression3 REL_OP Expression4				{fprintf(f, "Expression3: Expression3 REL_OP Expression4\n");}
    | Expression4						{fprintf(f, "Expression3: Expression4 \n");}
    ;

Expression4:
    Expression4 Op_unary_or Expression5				{fprintf(f, "Expression4: Expression4 Op_unary_or Expression5 \n");}
    | Expression4 Op_add Expression5
    |Expression4 Op_sub Expression5
    |Expression4 Op_pow Expression5				{fprintf(f, "Expression4: Expression4 D4 Expression5 \n");}
    | Expression5						{fprintf(f, "Expression4: Expression5 \n");}
    ;


Expression5:
    Expression5 MUL_OP PrimaryExpr				{fprintf(f, "Expression5: Expression5 MUL_OP PrimaryExpr \n");}
    | Expression5 Op_unary_and PrimaryExpr			{fprintf(f, "Expression5: Expression5 Op_unary_and PrimaryExpr \n");}
    | Expression5 Op_mult PrimaryExpr				{fprintf(f, "Expression5: Expression5 Op_mult PrimaryExpr \n");}
    | UnaryExpr							{fprintf(f, "Expression5: UnaryExpr \n");}
    ;

//D4:
//	Op_add							{fprintf(f, "D4: Op_add \n");}
//	|Op_sub							{fprintf(f, "D4: Op_sub\n");}
//	|Op_pow							{fprintf(f, "D4: Op_pow \n");}
//	;

REL_OP:
	Op_assign						{fprintf(f, "REL_OP: Op_assign \n");}
	|Op_not_equal						{fprintf(f, "REL_OP: Op_not_equal\n");}
	|Op_less						{fprintf(f, "REL_OP: Op_less \n");}
	|Op_greater						{fprintf(f, "REL_OP: Op_greater \n");}
	|Op_greater_eq						{fprintf(f, "REL_OP: Op_greater_eq \n");}
	|Op_less_eq						{fprintf(f, "REL_OP: Op_less_eq \n");}
	;

MUL_OP:
	Op_mult							{fprintf(f, "MUL_OP: Op_mult \n");}
	|Op_divide						{fprintf(f, "MUL_OP: Op_divide \n");}
	|Op_mod							{fprintf(f, "MUL_OP: Op_mod \n");}
	|Op_less_less						{fprintf(f, "MUL_OP: Op_less_less \n");}
	|Op_greater_greater					{fprintf(f, "MUL_OP: Op_greater_greater \n");}
	|Op_unary_and						{fprintf(f, "MUL_OP: Op_unary_and \n");}
	;


UnaryExpr:
    PrimaryExpr							{fprintf(f, "UnaryExpr: PrimaryExpr \n");}
    | UnaryOp PrimaryExpr					{fprintf(f, "UnaryExpr: UnaryOp PrimaryExpr \n");}
    ;

PrimaryExpr:
    Operand							{fprintf(f, "PrimaryExpr: Operand \n");}
    | PrimaryExpr Selector					{fprintf(f, "PrimaryExpr: PrimaryExpr Selector \n");}
    | PrimaryExpr Index						{fprintf(f, "PrimaryExpr: PrimaryExpr Index \n");}
    | PrimaryExpr Slice						{fprintf(f, "PrimaryExpr: PrimaryExpr Slice \n");}
    | PrimaryExpr TypeAssertion					{fprintf(f, "PrimaryExpr: PrimaryExpr TypeAssertion \n");}
    | PrimaryExpr Arguments					{fprintf(f, "PrimaryExpr: PrimaryExpr Arguments \n");}
    | OperandName StructLiteral					{fprintf(f, "PrimaryExpr: OperandName StructLiteral \n");}
    ;

StructLiteral:
    M_lcurly KeyValList M_rcurly				{fprintf(f, "StructLiteral: M_lcurly KeyValList M_rcurly \n");}
    ;

KeyValList:
    /* empty */							{fprintf(f, "KeyValList: \n");}
    | Expression M_colon Expression				{fprintf(f, "KeyValList: Expression M_colon Expression \n");}
    | Expression M_colon Expression M_comma KeyValList		{fprintf(f, "KeyValList: Expression M_colon Expression M_comma KeyValList \n");}
    ;

Selector:
    M_dot Identifier						{fprintf(f, "Selector: M_dot Identifier \n");}
    ;

Index:
    M_lsqbracket Expression M_rsqbracket			{fprintf(f, "Index: M_lsqbracket Expression M_rsqbracket \n");}
    ;

Slice:
    M_lsqbracket M_colon M_rsqbracket				{fprintf(f, "Slice: M_lsqbracket M_colon M_rsqbracket \n");}
    | M_lsqbracket M_colon Expression M_rsqbracket		{fprintf(f, "Slice: M_lsqbracket M_colon Expression M_rsqbracket \n");}
    | M_lsqbracket Expression M_colon M_rsqbracket		{fprintf(f, "Slice: M_lsqbracket Expression M_colon M_rsqbracket \n");}
    | M_lsqbracket Expression M_colon Expression M_rsqbracket	{fprintf(f, "Slice: M_lsqbracket Expression M_colon Expression M_rsqbracket \n");}
    | M_lsqbracket M_colon Expression M_colon Expression M_rsqbracket	{fprintf(f, "Slice: M_lsqbracket M_colon Expression M_colon Expression M_rsqbracket \n");}
    | M_lsqbracket Expression M_colon Expression M_colon Expression M_rsqbracket	{fprintf(f, "Slice: M_lsqbracket Expression M_colon Expression M_colon Expression M_rsqbracket \n");}
    ;

TypeDecl:
    Key_type TypeSpec						{fprintf(f, "TypeDecl: Key_type TypeSpec \n");}
    ;

TypeSpec:
    Identifier Type						{fprintf(f, "TypeSpec: Identifier Type \n");}
    ;

TypeAssertion:
    M_dot M_lparan Type M_rparan				{fprintf(f, "TypeAssertion: M_dot M_lparan Type M_rparan \n");}
    ;

Arguments:
    M_lparan M_rparan						{fprintf(f, "Arguments: M_lparan M_rparan \n");}
    | M_lparan ExpressionList M_rparan				{fprintf(f, "Arguments: M_lparan ExpressionList M_rparan \n");}
    | M_lparan ExpressionList DOTS M_rparan			{fprintf(f, "Arguments: M_lparan ExpressionList DOTS M_rparan \n");}
    ;

DOTS:
	M_dot M_dot M_dot					{fprintf(f, "DOTS: M_dot M_dot M_dot \n");}
	;

ExpressionList:
    Expression							{fprintf(f, "ExpressionList: Expression \n");}
    | ExpressionList M_comma Expression				{fprintf(f, "ExpressionList: ExpressionList M_comma Expression \n");}
    ;

MapType:
    Key_map M_lsqbracket Type M_rsqbracket Type			{fprintf(f, "MapType: Key_map M_lsqbracket Type M_rsqbracket Type \n");}
    ;

StructType:
    Key_struct M_lcurly FieldDeclList M_rcurly			{fprintf(f, "StructType: Key_struct M_lcurly FieldDeclList M_rcurly\n");}
    | Key_struct M_semicolon FieldDeclList M_rcurly		{fprintf(f, "StructType: Key_struct M_semicolon FieldDeclList M_rcurly \n");}
    | Key_struct M_lcurly M_rcurly				{fprintf(f, "StructType: Key_struct M_lcurly M_rcurly \n");}
    | Key_struct M_semicolon M_rcurly				{fprintf(f, "StructType: Key_struct M_semicolon M_rcurly \n");}
    ;

FieldDeclList:
    FieldDecl M_semicolon					{fprintf(f, "FieldDeclList: FieldDecl M_semicolon \n");}
    | FieldDeclList FieldDecl M_semicolon			{fprintf(f, "FieldDeclList: FieldDeclList FieldDecl M_semicolon \n");}
    ;

FieldDecl:
    IdentifierList Type String					{fprintf(f, "FieldDecl: IdentifierList Type String \n");}
    | IdentifierList Type					{fprintf(f, "FieldDecl: IdentifierList Type \n");}
    ;

PointerType:
    Op_mult Type						{fprintf(f, "PointerType: Op_mult Type \n");}
    ;

ArrayType:
    M_lsqbracket Expression M_rsqbracket Type			{fprintf(f, "ArrayType: M_lsqbracket Expression M_rsqbracket Type \n");}
    ;

Literal:
    BasicLit							{fprintf(f, "Literal: BasicLit \n");}
    | CompositeLit						{fprintf(f, "Literal: CompositeLit \n");}
    ;

BasicLit:
    Int_lit							{fprintf(f, "BasicLit: Int_lit \n");}
    |Float_lit							{fprintf(f, "BasicLit: Float_lit \n");}
    |String							{fprintf(f, "BasicLit: String \n");}
    |Bool_true							{fprintf(f, "BasicLit: Bool_true \n");}
    |Bool_false							{fprintf(f, "BasicLit: Bool_false \n");}
    |Imaginary_lit						{fprintf(f, "BasicLit: Imaginary_lit \n");}
    ;

UnaryOp:
	Op_add							{fprintf(f, "UnaryOp: Op_add \n");}
	|Op_sub							{fprintf(f, "UnaryOp: Op_sub \n");}
	|Op_unary_not						{fprintf(f, "UnaryOp: Op_unary_not \n");}
	|Op_pow							{fprintf(f, "UnaryOp: Op_pow \n");}
	|Op_mult						{fprintf(f, "UnaryOp: Op_mult \n");}
	|Op_unary_and							{fprintf(f, "UnaryOp: Op_unary_and \n");}
	;

//UN_OP:
//	Op_add							{fprintf(f, "UN_OP: Op_add \n");}
//	|Op_sub							{fprintf(f, "UN_OP: Op_sub \n");}
//	|Op_unary_not						{fprintf(f, "UN_OP: Op_unary_not \n");}
//	|Op_pow							{fprintf(f, "UN_OP: Op_pow \n");}
//	|Op_mult						{fprintf(f, "UN_OP: Op_mult \n");}
//	|Op_unary_and						{fprintf(f, "UN_OP: Op_unary_and \n");}
//	;

String:
	String_lit						{fprintf(f, "String: String_lit \n");}
	;

PackageClause:
    Key_package Identifier					{fprintf(f, "PackageClause: Key_package Identifier \n");}
    ;

ImportDeclList:
    /* empty */							{fprintf(f, "ImportDeclList: \n");}
    | ImportDeclList ImportDecl M_semicolon			{fprintf(f, "ImportDeclList: ImportDeclList ImportDecl M_semicolon \n");}
    | ImportDecl M_semicolon					{fprintf(f, "ImportDeclList: ImportDecl M_semicolon \n");}
    ;

ImportDecl:
    Key_import M_lparan ImportSpecList M_rparan			{fprintf(f, "ImportDecl: Key_import M_lparan ImportSpecList M_rparan \n");}
    | Key_import ImportSpec					{fprintf(f, "ImportDecl: Key_import ImportSpec \n");}
    ;

ImportSpecList:
    /* empty */							{fprintf(f, "ImportSpecList: \n");}
    | ImportSpecList ImportSpec M_semicolon			{fprintf(f, "ImportSpecList: ImportSpecList ImportSpec M_semicolon \n");}
    | ImportSpec M_semicolon					{fprintf(f, "ImportSpecList: ImportSpec M_semicolon \n");}
    ;

ImportSpec:
    Identifier ImportPath					{fprintf(f, "ImportSpec: Identifier ImportPath \n");}
    | M_dot ImportPath						{fprintf(f, "ImportSpec: M_dot ImportPath \n");}
    | ImportPath						{fprintf(f, "ImportSpec: ImportPath \n");}
    ;

ImportPath:
    String							{fprintf(f, "ImportPath: String \n");}
    ;


%%
void yyerror (char * s){
	fprintf(stderr, "%s\n", s);
}
char result[100000];

char *strrev(char *str)
{
    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}

char *reduce( char *s, char *oldW, char *newW)
{
    int i, cnt = 0;int flag=0;
    int newWlen = strlen(newW);
    int oldWlen = strlen(oldW);
    strrev(s);
    strrev(oldW);
    strrev(newW);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (strstr(&s[i], oldW) == &s[i])
        {
            cnt++;
            i += oldWlen - 1;
            break;
        }
    }

    i = 0;
    while (*s)
    {
        if (strstr(s, oldW) == s && flag==0)
        {
            strcpy(&result[i], newW);
            i += newWlen;
            s += oldWlen;
            flag++;
        }
        else
            result[i++] = *s++;
    }

    result[i] = '\0';
    strrev(result);
    return result;
}



void printing () {



FILE *fp1=fopen("Penultimate.txt","r");

FILE *fp2=fopen("Penultimate.txt","r");;

FILE *fp=fopen(outputfilename,"w");

char s[100000];

fprintf(fp,"<!DOCTYPE html>\n<html>\n<head>\n<title>RSF</title>\n</head>\n<body>\n");
fprintf(fp,"SourceFile->");



 char * line = NULL;
 char * next_line = NULL;
 size_t len = 0;
 ssize_t read;



int a=getline( & line, & len, fp1);

a=getline( & next_line, & len, fp2);
a=getline( & next_line, & len, fp2);

char* html=strtok(next_line,":");
char temp[100]="<b>";
strcat(temp,html);
strcat(temp,"</b>");

char * left = strtok(line, ":");
char* right = strtok(NULL, "\n");

char ss[] = "SourceFile";
char empty[]="";

strcpy(s,reduce(ss,left,right));
strcpy(s,reduce(s,html,temp));

fprintf(fp,"%s\n",s);
fprintf(fp,"<br><br>");
int i=0;
while ((read = getline( & line, & len, fp1)) != -1) {

        left = strtok(line, ":");
        right = strtok(NULL, "\n");
        printf("%d\n",i++ );
        printf("left=%s    ",left);
        char temp1[100]="<b>";
	strcat(temp1,left);
	strcat(temp1,"</b>");
        if(right==NULL){right=empty;}
        printf("right=%s\n",right);
        strcpy(s,reduce(s,temp1,right));

	a=getline( & next_line, & len, fp2);
	if(a!=-1)
{
	html=strtok(next_line,":");
	char temp2[100]="<b>";
	strcat(temp2,html);
	strcat(temp2,"</b>");
	strcpy(s,reduce(s,html,temp2));
}
	 fprintf(fp,"->%s\n",s);
	fprintf(fp,"<br><br>");
    }

fprintf(fp,"\n</body>\n</html>");

    fclose(fp);
    fclose(fp1);
    fclose(fp2);


    return ;
}

char outputfile[100];

int main(int argc, char **argv){
	f = fopen("Rules.txt","w");
	FILE * fp;
	if (argc == 2 && (fp = fopen (argv[1], "r")))
		yyin = fp;
	else{
		printf("Unable to open file \n");
		return 1;
	}
  char * outputfilename2;
  outputfilename = (char *)malloc(100*sizeof(char));
  outputfilename2 = (char *)malloc(100*sizeof(char));
  strcpy(outputfile,argv[1]);
  outputfilename2 = strtok(outputfile,"/");
  outputfilename = strtok(NULL,".");
  strcat(outputfilename, ".html");
	yyin = fopen(argv[1],"r");
	yyparse();
	fclose(yyin);
	fclose(f);
	char a[] = "tail -r Rules.txt > Penultimate.txt";
	system(a);
	printing();
	return 0;
}
