%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "tac.h"
#include "nodes.h"
int nl=0;
int yylex(void);
void yyerror (char *);
FILE *yyin;
char t[100];
FILE * f;
char* outputfilename;
%}

%union{
    int ival;
    char *sval;
    Attr* attr;
    OpAttr* opattr;
    Codn* codn;
    ElIF* elif;
}

%token <sval> T_int64
%token <sval> Identifier T_string
%token <sval> Op_add
%token Single_line_comment Multi_line_comment T_bool T_int T_int8 T_int16 T_int32 T_uint T_uint16 T_uint32 T_uint64 T_uintptr T_float32 T_float64 T_complex64 T_complex128
%token Key_break Key_case Key_const Key_continue Key_default Key_else Key_fallthrough Key_for Key_func Key_if Key_import Key_interface Key_map Key_package Key_range Key_return Key_select Key_struct Key_switch Key_type Key_var Key_class Key_private Key_protected Key_public Key_static Key_try Key_catch Key_finally
%token <sval> Imaginary_lit Float_lit Int_lit String_lit
%token <sval> Op_greater_greater Op_less_less Op_greater Op_less Op_greater_eq Op_less_eq Op_not_equal Op_equality Op_assign Op_unary_add Op_unary_sub Op_sub Op_mult Op_divide Op_mod Op_pow Op_relational_and Op_relational_or Op_unary_and Op_unary_or Op_unary_not
%token M_question M_semicolon M_colon M_comma M_lcurly M_rcurly M_lparan M_rparan M_lsqbracket M_rsqbracket M_dot M_doublequotes M_singlequotes M_underscore
%token Bool_true Bool_false

%type <attr> SourceFile Block OPENB CLOSEB BrkBlk BrkBlkEnd StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt Assignment ASN_OP ShortVarDecl VarDecl VarSpec Declaration FunctionDecl Signature Result Parameters ParameterList ParameterDecl TypeList IdentifierList MethodDecl Receiver TopLevelDeclList CompositeLit LiteralType VarType Type Operand OperandName LiteralValue SliceType ElementList KeyedElement Key Element TopLevelDecl LabeledStmt ReturnStmt BreakStmt ContinueStmt IfStmt EmptyExpr Empty ForStmt Expression Expression1 Expression2 Expression3 Expression5 REL_OP MUL_OP UnaryExpr PrimaryExpr StructLiteral KeyValList Selector Index Slice TypeDecl  TypeSpec TypeAssertion Arguments DOTS ExpressionList MapType StructType FieldDeclList FieldDecl PointerType ArrayType Literal BasicLit UnaryOp String PackageClause ImportDeclList ImportDecl ImportSpecList ImportSpec ImportPath Expression4

//%start SourceFile

%%

SourceFile:
    PackageClause M_semicolon ImportDeclList TopLevelDeclList   {	}
    ;

Block:
    M_lcurly OPENB StatementList CLOSEB M_rcurly        {	}
    ;

OPENB:                              {	}
    /* empty */
    ;

CLOSEB:                             {	}
    /* empty */
    ;

BrkBlk:                             {	}
    ;

BrkBlkEnd:                          {	}
    ;

StatementList:
    StatementList Statement M_semicolon             {	}
    | Statement M_semicolon                 {	}
    ;

Statement:
    Declaration                         {	}
    | LabeledStmt                       {	}
    | SimpleStmt                        {	}
    | ReturnStmt                        {	}
    | BreakStmt                         {	}
    | ContinueStmt                      {	}
    /*| GotoStmt*/
    | Block                         {	}
    | IfStmt                            {	}
    //| SwitchStmt
    /* | SelectStmt      { $$ = &(init() << $1 >> "Statement"); } */
    | ForStmt                           {	}
    ;

SimpleStmt:
    EmptyStmt                           {	}
    | ExpressionStmt                        {	}
//    | SendStmt
    | IncDecStmt                        {	}
    | Assignment                        {	}
    | ShortVarDecl                      {	}
    ;

EmptyStmt:                          {	}
    /* blank */
    ;


ExpressionStmt:
    Expression                          {	}
    ;

IncDecStmt:
    Expression Op_unary_add                 {	}
    | Expression Op_unary_sub                   {	}
    | Expression Op_add Op_assign Expression            {	}
    | Expression Op_sub Op_assign Expression            {	}
    ;

Assignment:
    ExpressionList ASN_OP ExpressionList            {	}
    ;

//ADD_OP:
//  Op_add                          {	}
//  |Op_sub                         {	}
//  |Op_unary_or                        {	}
//  |Op_pow                         {	}
//  ;

ASN_OP:
    Op_add Op_assign                    {	}
    |Op_sub Op_assign                   {	}
    |Op_unary_or Op_assign                  {	}
    |Op_pow Op_assign                   {	}
    |MUL_OP Op_assign                   {	}
    |Op_assign                      {	}
    ;


ShortVarDecl:
    ExpressionList Op_assign ExpressionList         {sprintf(t,"=,%s,%s",$1->place,$3->place);
            $$->code=append($1->code,$3->code);
            $$->code=append($$->code,gen(t));
            printcode($$->code);
    	}
    ;

VarDecl:
    Key_var VarSpec                     {	}
    ;

VarSpec:
    IdentifierList Type                     {	}
    | IdentifierList Type ASN_OP ExpressionList         {	}
    | IdentifierList ASN_OP ExpressionList          {	}
    ;

Declaration:
    TypeDecl                            {	}
    | VarDecl                           {	}
    ;

FunctionDecl:
    Key_func Identifier OPENB Signature CLOSEB          {	}
    | Key_func Identifier OPENB Signature Block CLOSEB      {	}
    ;

Signature:
    Parameters                          {	}
    | Parameters Result                     {	}
    ;

Result:
    M_lparan TypeList M_rparan                  {	}
    | Type                          {	}
    ;

Parameters:
    M_lparan M_rparan                       {	}
    | M_lparan ParameterList  M_rparan              {	}
    | M_lparan ParameterList M_comma M_rparan           {	}
    ;

ParameterList:
    ParameterDecl                       {	}
    | ParameterList M_comma ParameterDecl           {	}
    ;

ParameterDecl:
    IdentifierList Type                     {	}
    ;

TypeList:
    TypeList M_comma Type                   {	}
    | Type                          {	}
    ;

IdentifierList:
    Identifier                          {	}
    | IdentifierList M_comma Identifier             {	}
    ;

//QualifiedIdent:
//    Identifier M_dot Identifier                   {	}
//    ;

MethodDecl:
    Key_func Receiver Identifier Signature          {	}
    ;

Receiver:
    Parameters                          {	}
    ;

TopLevelDeclList:
    TopLevelDeclList TopLevelDecl M_semicolon           {	}
    | TopLevelDecl M_semicolon                  {	}
    ;

CompositeLit:
    LiteralType LiteralValue                    {	}
;

LiteralType:
    StructType                          {	}
    | ArrayType                         {	}
    | PointerType                       {	}
    | M_lsqbracket DOTS M_rsqbracket Operand            {	}
    | SliceType                         {	}
    | MapType                           {	}
    ;

VarType:
    T_int16                             {	}
    |T_int8                             {	}
    |T_int32                            {	}
    |T_int64                            {	}
    |T_int                              {	}
    |T_bool                             {	}
    |T_string                           {	}
    |T_uint                             {	}
    |T_uint16                           {	}
    |T_uint32                           {	}
    |T_uint64                           {	}
    |T_uintptr                          {	}
    |T_float32                          {	}
    |T_float64                          {	}
    |T_complex64                        {	}
    |T_complex128                       {	}
    ;

Type:
    LiteralType                         {	}
    | OperandName                       {	}
    |VarType                            {	}
    ;

Operand:
    Literal                             {	}
    | OperandName                       
    | M_lparan Expression M_rparan      {	}
    ;

OperandName:
    Identifier          {$$=malloc(sizeof(Attr)); strcpy($$->place,$1);}
    ;

LiteralValue:
    M_lcurly M_rcurly                       {	}
    | M_semicolon M_rcurly                  {	}
    | M_lcurly ElementList M_rcurly             {	}
    | M_semicolon ElementList M_rcurly              {	}
    | M_lcurly ElementList M_comma M_rcurly         {	}
    | M_semicolon ElementList M_comma M_rcurly          {	}
    ;

SliceType:
    M_lsqbracket M_rsqbracket Type              {	}
    ;

ElementList:
    KeyedElement                        {	}
    | ElementList M_comma KeyedElement              {	}
    ;

KeyedElement:
    Element                         {	}
    | Key M_colon Element                   {	}
    ;

Key:
    Expression                          {	}
    | LiteralValue                      {	}
    ;

Element:
    Expression                          {	}
    | LiteralValue                      {	}
    ;

TopLevelDecl:
    Declaration                         {	}
    | FunctionDecl                      {	}
    | MethodDecl                        {	}
    ;

LabeledStmt:
    Identifier M_colon Statement                {	}
    ;

ReturnStmt:
    Key_return                          {	}
    | Key_return ExpressionList                 {	}
    ;

BreakStmt:
    Key_break                           {	}
    | Key_break Identifier                  {	}
    ;

ContinueStmt:
    Key_continue                        {	}
    | Key_continue Identifier                   {	}
    ;

IfStmt:
    Key_if OPENB Expression Block CLOSEB                {	}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block CLOSEB   {	}
    | Key_if OPENB Expression Block Key_else Block CLOSEB       {	}
    | Key_if OPENB Expression Block Key_else IfStmt CLOSEB      {	}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else IfStmt CLOSEB   {	}
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB    {	}
    ;

EmptyExpr:
     /*empty*/                          {	}
     ;

Empty:
     /**/                           {	}
     ;

ForStmt:
       Key_for OPENB SimpleStmt M_semicolon BrkBlk ExpressionStmt M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB                     {	}
       | Key_for OPENB Expression BrkBlk Block BrkBlkEnd CLOSEB {	}
       | Key_for BrkBlk Block BrkBlkEnd             {	}
       | Key_for OPENB SimpleStmt M_semicolon BrkBlk EmptyExpr M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB                                {	}
       | Key_for OPENB EmptyStmt Empty BrkBlk Expression Empty EmptyStmt Block BrkBlkEnd CLOSEB                             {	}
       ;

//RangeClause:
//    Key_range Expression                  {	}
//    | ExpressionList Op_equality Key_range Expression     {	}
//    | ExpressionList Op_assign Key_range Expression       {	}
//    ;

Expression:
    Expression1                         //{	}
    ;

Expression1:
    Expression1 Op_relational_or Expression2            {	}
    | Expression2                       //{	}
    ;

Expression2:
    Expression2 Op_relational_and Expression3           {	}
    | Expression3                       //{	}
    ;

Expression3:
    Expression3 REL_OP Expression4              {	}
    | Expression4                       //{	}
    ;

Expression4:
    Expression4 Op_unary_or Expression5             {	}
    | Expression4 Op_add Expression5        {$$=malloc(sizeof(Attr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"+,%s,%s,%s",$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));printcode($$->code);}
    |Expression4 Op_sub Expression5     {$$=malloc(sizeof(Attr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"-,%s,%s,%s",$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));printcode($$->code);}
    | Expression5                       //{	}
    ;


Expression5:
    Expression5 MUL_OP PrimaryExpr              {$$=malloc(sizeof(Attr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"%s,%s,%s,%s",$2->place,$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));printcode($$->code);}
    | Expression5 Op_unary_and PrimaryExpr          {	}
    | UnaryExpr                         //{	}
    ;

//D4:
//  Op_add                          {	}
//  |Op_sub                         {	}
//  |Op_pow                         {	}
//  ;

REL_OP:
    Op_equality                     {	}
    |Op_not_equal                       {	}
    |Op_less                        {	}
    |Op_greater                     {	}
    |Op_greater_eq                      {	}
    |Op_less_eq                     {	}
    ;

MUL_OP:
    Op_mult                         {$$=malloc(sizeof(Attr)); strcpy($$->place,$1);}
    |Op_divide                      {$$=malloc(sizeof(Attr)); strcpy($$->place,$1);	}
    |Op_mod                         {$$=malloc(sizeof(Attr)); strcpy($$->place,$1);	}
    |Op_less_less                       {$$=malloc(sizeof(Attr)); strcpy($$->place,$1);	}
    |Op_greater_greater                 {$$=malloc(sizeof(Attr)); strcpy($$->place,$1);	}
    |Op_unary_and                       {$$=malloc(sizeof(Attr)); strcpy($$->place,$1);	}
    ;


UnaryExpr:
    PrimaryExpr                         //{	}
    | UnaryOp PrimaryExpr                   {	}
    ;

PrimaryExpr:
    Operand                         //{	}
    | PrimaryExpr Selector                  {	}
    | PrimaryExpr Index                     {	}
    | PrimaryExpr Slice                     {	}
    | PrimaryExpr TypeAssertion                 {	}
    | PrimaryExpr Arguments                 {	}
    | OperandName StructLiteral                 {	}
    ;

StructLiteral:
    M_lcurly KeyValList M_rcurly                {	}
    ;

KeyValList:
    /* empty */                         {	}
    | Expression M_colon Expression             {	}
    | Expression M_colon Expression M_comma KeyValList      {	}
    ;

Selector:
    M_dot Identifier                        {	}
    ;

Index:
    M_lsqbracket Expression M_rsqbracket            {	}
    ;

Slice:
    M_lsqbracket M_colon M_rsqbracket               {	}
    | M_lsqbracket M_colon Expression M_rsqbracket      {	}
    | M_lsqbracket Expression M_colon M_rsqbracket      {	}
    | M_lsqbracket Expression M_colon Expression M_rsqbracket   {	}
    | M_lsqbracket M_colon Expression M_colon Expression M_rsqbracket   {	}
    | M_lsqbracket Expression M_colon Expression M_colon Expression M_rsqbracket    {	}
    ;

TypeDecl:
    Key_type TypeSpec                       {	}
    ;

TypeSpec:
    Identifier Type                     {	}
    ;

TypeAssertion:
    M_dot M_lparan Type M_rparan                {	}
    ;

Arguments:
    M_lparan M_rparan                       {	}
    | M_lparan ExpressionList M_rparan              {	}
    | M_lparan ExpressionList DOTS M_rparan         {	}
    ;

DOTS:
    M_dot M_dot M_dot                   {	}
    ;

ExpressionList:
    Expression                          {$$=$1;	}
    | ExpressionList M_comma Expression             {	}
    ;

MapType:
    Key_map M_lsqbracket Type M_rsqbracket Type         {	}
    ;

StructType:
    Key_struct M_lcurly FieldDeclList M_rcurly          {	}
    | Key_struct M_semicolon FieldDeclList M_rcurly     {	}
    | Key_struct M_lcurly M_rcurly              {	}
    | Key_struct M_semicolon M_rcurly               {	}
    ;

FieldDeclList:
    FieldDecl M_semicolon                   {	}
    | FieldDeclList FieldDecl M_semicolon           {	}
    ;

FieldDecl:
    IdentifierList Type String                  {	}
    | IdentifierList Type                   {	}
    ;

PointerType:
    Op_mult Type                        {	}
    ;

ArrayType:
    M_lsqbracket Expression M_rsqbracket Type           {	}
    ;

Literal:
    BasicLit                            {	}
    | CompositeLit                      {	}
    ;

BasicLit:
    Int_lit                         {	}
    |Float_lit                          {	}
    |String                         {	}
    |Bool_true                          {	}
    |Bool_false                         {	}
    |Imaginary_lit                      {	}
    ;

UnaryOp:
    Op_add                          {	}
    |Op_sub                         {	}
    |Op_unary_not                       {	}
    |Op_pow                         {	}
    |Op_mult                        {	}
    |Op_unary_and                           {	}
    ;

//UN_OP:
//  Op_add                          {	}
//  |Op_sub                         {	}
//  |Op_unary_not                       {	}
//  |Op_pow                         {	}
//  |Op_mult                        {	}
//  |Op_unary_and                       {	}
//  ;

String:
    String_lit                      {	}
    ;

PackageClause:
    Key_package Identifier                  {	}
    ;

ImportDeclList:
    /* empty */                         {	}
    | ImportDeclList ImportDecl M_semicolon         {	}
    | ImportDecl M_semicolon                    {	}
    ;

ImportDecl:
    Key_import M_lparan ImportSpecList M_rparan         {	}
    | Key_import ImportSpec                 {	}
    ;

ImportSpecList:
    /* empty */                         {	}
    | ImportSpecList ImportSpec M_semicolon         {	}
    | ImportSpec M_semicolon                    {	}
    ;

ImportSpec:
    Identifier ImportPath                   {	}
    | M_dot ImportPath                      {	}
    | ImportPath                        {	}
    ;

ImportPath:
    String                          {	}
    ;


%%
void yyerror (char * s){
    	
}

int main(int argc, char **argv){
    FILE * fp;
    if (argc == 2 && (fp = fopen (argv[1], "r")))
        yyin = fp;
    else{
        printf("Unable to open file \n");
        return 1;
    }
    yyin = fopen(argv[1],"r");
    yyparse();
    fclose(yyin);
    return 0;
}