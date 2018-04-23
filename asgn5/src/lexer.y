%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "tac.h"
#include "nodes.h"
int nl=0;

int a_flag=0;
int a_size;

TAC* func_code[100];
int func_count=0;

int b_flag=0;
char b_target[100];

int break_count=0;
char break_label[100][100];

int continue_count=0;
char continue_label[100][100];

int yylex(void);
void yyerror (char *);
FILE *yyin;
char t[100];
FILE * f;
char* outputfilename;

char r_start[100];
char r_end[100];

TAC *list;
int print_arg=1;
sym_table* global;

string print[100];

char forArray[10];
char forIndex[10];
char forIndexName[100];
%}

%union{
    int ival;
    char *sval;
    Attr* attr;
    Codn* codn;
    Elif* elif;
    VarAttr* varattr;
}

%token T_int64
%token <sval> Identifier T_string
%token <sval> Op_add
%token Single_line_comment Multi_line_comment T_bool T_int T_int8 T_int16 T_int32 T_uint T_uint16 T_uint32 T_uint64 T_uintptr T_float32 T_float64 T_complex64 T_complex128
%token Key_break Key_case Key_const Key_continue Key_default Key_else Key_fallthrough Key_for Key_func Key_if Key_elif Key_import Key_interface Key_map Key_package Key_range Key_return Key_select Key_struct Key_switch Key_type Key_var Key_class Key_private Key_protected Key_public Key_static Key_try Key_catch Key_finally
%token <sval> Imaginary_lit Float_lit Int_lit String_lit
%token <sval> Op_AddAssign Op_SubAssign Op_MultAssign Op_DivAssign Op_ModAssign Op_unary_or_assign Op_unary_and_assign Op_greater_greater Op_less_less Op_greater Op_less Op_greater_eq Op_less_eq Op_not_equal Op_equality Op_assign Op_unary_add Op_unary_sub Op_sub Op_mult Op_divide Op_mod Op_pow Op_relational_and Op_relational_or Op_unary_and Op_unary_or Op_unary_not
%token M_question M_semicolon M_colon M_comma M_lcurly M_rcurly M_lparan M_rparan M_lsqbracket M_rsqbracket M_dot M_doublequotes M_singlequotes M_underscore
%token <sval> Bool_true Bool_false
%type <codn> ForStmt
%type <elif> if_stmt elif_test_suite
%type <varattr> SourceFile Block OPENB CLOSEB BrkBlk BrkBlkEnd ArrayList PrimaryExpr2 StatementList Statement SimpleStmt EmptyStmt ExpressionStmt IncDecStmt Assignment ASN_OP ShortVarDecl VarDecl VarSpec Declaration FunctionDecl Signature Result Parameters ParameterList ParameterDecl TypeList IdentifierList MethodDecl Receiver TopLevelDeclList CompositeLit LiteralType VarType Type Operand OperandName LiteralValue SliceType ElementList KeyedElement Key Element TopLevelDecl LabeledStmt ReturnStmt BreakStmt ContinueStmt Expression Expression1 Expression2 Expression3 Expression5 REL_OP MUL_OP UnaryExpr PrimaryExpr StructLiteral KeyValList Selector Index Slice TypeDecl  TypeSpec TypeAssertion Arguments DOTS ExpressionList MapType StructType FieldDeclList FieldDecl PointerType ArrayType Literal BasicLit UnaryOp String PackageClause ImportDeclList ImportDecl ImportSpecList ImportSpec ImportPath Expression4

//%start SourceFile
%%

SourceFile:
    PackageClause M_semicolon ImportDeclList TopLevelDeclList   {for(int i=0;i<func_count;i++){
        printcode(func_code[i]);
        }}
    ;
Block:
    M_lcurly OPENB StatementList CLOSEB M_rcurly        {$$=malloc(sizeof(VarAttr));$$->code=$3->code;}
    ;

OPENB:                              {$$=malloc(sizeof(VarAttr));}
    /* empty */
    ;

CLOSEB:                             {$$=malloc(sizeof(VarAttr));}
    /* empty */
    ;

BrkBlk:                             {$$=malloc(sizeof(VarAttr));   }
    ;

BrkBlkEnd:                          {$$=malloc(sizeof(VarAttr));   }
    ;

StatementList:
    StatementList Statement M_semicolon             {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$2->code);}
    | Statement M_semicolon                 {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    ;

Statement:
    Declaration                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | LabeledStmt                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | SimpleStmt                        {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | ReturnStmt                        {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | BreakStmt                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | ContinueStmt                      {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    /*| GotoStmt*/
    | Block                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | if_stmt                           {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    //| SwitchStmt
    /* | SelectStmt      { $$ = &(init() << $1 >> "Statement"); } */
    | ForStmt                           {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    ;

SimpleStmt:
    EmptyStmt                           {$$=malloc(sizeof(VarAttr));$$->code=$1->code; }
    | ExpressionStmt                        {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
//    | SendStmt
    | IncDecStmt                        {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | Assignment                        {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | ShortVarDecl                      {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    ;

EmptyStmt:                          {$$=malloc(sizeof(VarAttr));}
    /* blank */
    ;


ExpressionStmt:
    Expression                          {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);}
    ;

IncDecStmt:
    Expression Op_unary_add                 {$$=malloc(sizeof(VarAttr));sprintf(t,"+,%s,%s,1",$1->place,$1->place);$$->code=append($1->code,gen(t));}
    | Expression Op_unary_sub                   {$$=malloc(sizeof(VarAttr));sprintf(t,"-,%s,%s,1",$1->place,$1->place);$$->code=append($1->code,gen(t));}
    //| Expression Op_add Op_assign Expression            {$$=malloc(sizeof(VarAttr));sprintf(t,"+,%s,%s,%s",$1->place,$1->place,$4->place);$$->code=append($1->code,$4->code);$$->code=append($$->code,gen(t));}
    //| Expression Op_sub Op_assign Expression            {$$=malloc(sizeof(VarAttr));sprintf(t,"-,%s,%s,%s",$1->place,$1->place,$4->place);$$->code=append($1->code,$4->code);$$->code=append($$->code,gen(t));}
    ;

Assignment:
    ExpressionList ASN_OP ExpressionList            {$$=malloc(sizeof(VarAttr));sprintf(t,"%s,%s,%s,%s",$2->place,$1->place,$1->place,$3->place);$$->code=append($1->code,$3->code);$$->code=append($$->code,gen(t));}
    ;

//ADD_OP:
//  Op_add                          {   }
//  |Op_sub                         {   }
//  |Op_unary_or                        {   }
//  |Op_pow                         {   }
//  ;

ASN_OP:
    Op_AddAssign                   {$$=malloc(sizeof(VarAttr)); strcpy($$->place,"+");}
    |Op_SubAssign                   {$$=malloc(sizeof(VarAttr)); strcpy($$->place,"-");}
    |Op_unary_or_assign                  {$$=malloc(sizeof(VarAttr)); strcpy($$->place,"|");}
    |Op_unary_and_assign            {$$=malloc(sizeof(VarAttr)); strcpy($$->place,"&");}
    |Op_MultAssign          {$$=malloc(sizeof(VarAttr)); strcpy($$->place,"*");}
    |Op_DivAssign       {$$=malloc(sizeof(VarAttr)); strcpy($$->place,"/");}
    |Op_ModAssign               {$$=malloc(sizeof(VarAttr)); strcpy($$->place,"%");}
    //|Op_pow Op_assign                   {   }
    //|MUL_OP Op_assign                   {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1->place);}
    //|Op_assign                      {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1);}
    ;


ShortVarDecl:
    ExpressionList Op_assign ExpressionList         {
        //printf("DEBUG_NEW: $3->type=%s $3->type1=%s\n",$3->type,$3->type1);
        //printf("DEBUG_NEW: $1->type=%s\n",$1->type);
        symtable_ent *first=malloc(sizeof(struct symtable_entry));
        symtable_ent *second=malloc(sizeof(struct symtable_entry));
            if(!strcmp($3->type,"identifier")&&(second=lookup(top(),$3->place))){
                printf("here\n");
                if(!strcmp($1->type,"identifier")&&(first=lookup(top(),$1->place))){
                    if(!strcmp(first->type,second->type)){
                        //printf("SUCCESS: Both Identifiers are defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,%s",$1->place,$3->place);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else{
                        printf("ERROR: Type not defined OR does not match.1\n");
                    }
                }
                else{printf("ERROR: Type not defined OR does not match.2\n");}
            }
            else if(!strcmp($3->type,"lit")){
               // printf("DEBUG_NEW $1->place=%s\n",$1->place);
                if(!strcmp($1->type,"identifier")&&(first=lookup(top(),$1->place))){
                 //   printf("DEBUG_NEW: first->name=%s first->type=%s\n",first->name,first->type);
                    if(!strcmp(first->type,$3->type1)&&strcmp($3->type1,"bool")){
                   //     printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,%s",$1->place,$3->place);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else if(!strcmp(first->type,$3->type1)&&!strcmp($3->type1,"bool")&&!strcmp($3->type2,"true")){
                     //   printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,1",$1->place);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else if(!strcmp(first->type,$3->type1)&&!strcmp($3->type1,"bool")&&!strcmp($3->type2,"false")){
                       // printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"=,%s,0",$1->place);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else{
                        printf("ERROR: Type not defined OR does not match.3\n");
                    }
                }
                else{
                    printf("ERROR: Type not defined OR does not match.4\n");
                }
            }
            else{
                printf("ERROR: Type not defined OR does not match.5\n");
            }
        }
    |ArrayList Op_assign ExpressionList{
        //printf("DEBUG_NEW: $3->type=%s $3->type1=%s\n",$3->type,$3->type1);
        //printf("DEBUG_NEW: $1->type=%s\n",$1->type);
        symtable_ent *first=malloc(sizeof(struct symtable_entry));
        symtable_ent *second=malloc(sizeof(struct symtable_entry));
            if(!strcmp($3->type,"identifier")&&(second=lookup(top(),$3->place))){
                if(!strcmp($1->type,"identifier")&&(first=lookup(top(),$1->place))){
                    if(!strcmp(first->type,second->type)){
          //              printf("SUCCESS: Both Identifiers are defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,%s,%s",$1->place,$1->place2,$3->place);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                }
            }
            else if(!strcmp($3->type,"lit")){
            //    printf("DEBUG_NEW $1->place=%s\n",$1->place);
                if(!strcmp($1->type,"identifier")&&(first=lookup(top(),$1->place))){
              //      printf("DEBUG_NEW: first->name=%s first->type=%s\n",first->name,first->type);
                    if(!strcmp(first->type,$3->type1)&&strcmp($3->type1,"bool")){
                //        printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,%s,%s",$1->place,$1->place2,$3->place);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else if(!strcmp(first->type,$3->type1)&&!strcmp($3->type1,"bool")&&!strcmp($3->type2,"true")){
                  //      printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,,%s,1",$1->place,$1->place2);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else if(!strcmp(first->type,$3->type1)&&!strcmp($3->type1,"bool")&&!strcmp($3->type2,"false")){
                    //    printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"sta,%s,%s,0",$1->place,$1->place2);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                }
            }
            else{
                printf("ERROR: Type not defined OR does not match.\n");
            }
        }
    |ExpressionList Op_assign ArrayList{
       // printf("DEBUG_NEW: $3->type=%s $3->type1=%s\n",$3->type,$3->type1);
       // printf("DEBUG_NEW: $1->type=%s\n",$1->type);
        symtable_ent *first=malloc(sizeof(struct symtable_entry));
        symtable_ent *second=malloc(sizeof(struct symtable_entry));
            if(!strcmp($3->type,"identifier")&&(second=lookup(top(),$3->place))){
                if(!strcmp($1->type,"identifier")&&(first=lookup(top(),$1->place))){
                    if(!strcmp(first->type,second->type)){
                       // printf("SUCCESS: Both Identifiers are defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,%s,%s",$1->place,$3->place,$3->place2);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                }
            }
            else if(!strcmp($3->type,"lit")){
                //printf("DEBUG_NEW $1->place=%s\n",$1->place);
                if(!strcmp($1->type,"identifier")&&(first=lookup(top(),$1->place))){
                  //  printf("DEBUG_NEW: first->name=%s first->type=%s\n",first->name,first->type);
                    if(!strcmp(first->type,$3->type1)&&strcmp($3->type1,"bool")){
                    //    printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,%s,%s",$1->place,$3->place,$3->place2);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else if(!strcmp(first->type,$3->type1)&&!strcmp($3->type1,"bool")&&!strcmp($3->type2,"true")){
                      //  printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,,%s,1",$3->place,$3->place2);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                    else if(!strcmp(first->type,$3->type1)&&!strcmp($3->type1,"bool")&&!strcmp($3->type2,"false")){
                        //printf("SUCCESS: the Identifier is defined\n");
                        $$=malloc(sizeof(VarAttr));
                        sprintf(t,"lfa,%s,%s,0",$3->place,$3->place2);
                        $$->code=append($1->code,$3->code);
                        $$->code=append($$->code,gen(t));
                    }
                }
            }
            else{
                printf("ERROR: Type not defined OR does not match.\n");
            }
        }
    ;

VarDecl:
    Key_var VarSpec                     {$$=malloc(sizeof(VarAttr));$$->code=$2->code;}
    ;

VarSpec:
    IdentifierList Type                 {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$2->code);strcpy($$->place,$1->place);strcpy($$->type,$2->type);enter(top(),$1->place,$2->type,1);}
    | IdentifierList ArrayType                     {$$=malloc(sizeof(VarAttr));sprintf(t,"array,%s,%s",$1->place,forArray);$$->code=append($1->code,$2->code);$$->code=append($$->code,gen(t));enter(top(),$1->place,$2->type,1);}
    | IdentifierList Type ASN_OP ExpressionList         {$$=malloc(sizeof(VarAttr));sprintf(t,"=,%s,%s",$1->place,$4->place);$$->code=append($1->code,$4->code);$$->code=append($$->code,gen(t));}
    | IdentifierList ASN_OP ExpressionList          {$$=malloc(sizeof(VarAttr));sprintf(t,"=,%s,%s",$1->place,$3->place);$$->code=append($1->code,$3->code);$$->code=append($$->code,gen(t));}
    ;

Declaration:
    TypeDecl                            {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | VarDecl                           {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->type,$1->type);}
    ;

FunctionDecl:
    //Key_func Identifier OPENB Signature CLOSEB          {}
    Key_func Identifier  {  sym_table* t;enterproc( top(),$2,t );t=mktable(top()->tail);push(t);}  OPENB Signature Block CLOSEB      {$$=malloc(sizeof(Attr));sprintf(t,"label,%s",$2); pop();$$->code=append(gen(t),$6->code);
    func_code[func_count++]=$$->code;
    //enter(top()->tail->fn,"DEBUG: name_of_variable","DEBUG: its_type",1);printf("%s\n",top()->tail->fn->head->name);printf("\n\n");
    //printsymtable(global);
}
    ;

Signature:
    Parameters                          {   }
    | Parameters Result                     {   }
    ;

Result:
    M_lparan TypeList M_rparan                  {   }
    | Type                          {   }
    ;

Parameters:
    M_lparan M_rparan                       {   }
    | M_lparan ParameterList  M_rparan              {   }
    | M_lparan ParameterList M_comma M_rparan           {   }
    ;

ParameterList:
    ParameterDecl                       {   }
    | ParameterList M_comma ParameterDecl           {   }
    ;

ParameterDecl:
    IdentifierList Type                     {   }
    ;

TypeList:
    TypeList M_comma Type                   {   }
    | Type                          {   }
    ;

IdentifierList:
    Identifier                          {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1);strcpy($$->type,"identifier");}
    | IdentifierList M_comma Identifier             {   }
    ;

//QualifiedIdent:
//    Identifier M_dot Identifier                   {   }
//    ;

MethodDecl:
    Key_func Receiver Identifier Signature          {   }
    ;

Receiver:
    Parameters                          {   }
    ;

TopLevelDeclList:
    TopLevelDeclList TopLevelDecl M_semicolon           {   }
    | TopLevelDecl M_semicolon                  {   }
    ;

CompositeLit:
    LiteralType LiteralValue                    {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$2->code);}
;

LiteralType:
    StructType                          {}
    //| ArrayType                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | PointerType                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | M_lsqbracket DOTS M_rsqbracket Operand            {   }
    | SliceType                         {   }
    | MapType                           {   }
    ;

VarType:
    T_int16                             {$$=malloc(sizeof(VarAttr));strcpy($$->type,"int");}
    |T_int8                             {$$=malloc(sizeof(VarAttr));strcpy($$->type,"int");}
    |T_int32                            {$$=malloc(sizeof(VarAttr));strcpy($$->type,"int");}
    |T_int64                            {$$=malloc(sizeof(VarAttr));strcpy($$->type,"int");}
    |T_int                              {$$=malloc(sizeof(VarAttr));strcpy($$->type,"int");}
    |T_bool                             {$$=malloc(sizeof(VarAttr));strcpy($$->type,"bool");}
    |T_string                           {$$=malloc(sizeof(VarAttr));strcpy($$->type,"string");}
    |T_uint                             {$$=malloc(sizeof(VarAttr));strcpy($$->type,"uint");}
    |T_uint16                           {$$=malloc(sizeof(VarAttr));strcpy($$->type,"uint");}
    |T_uint32                           {$$=malloc(sizeof(VarAttr));strcpy($$->type,"uint");}
    |T_uint64                           {$$=malloc(sizeof(VarAttr));strcpy($$->type,"uint");}
    |T_uintptr                          {$$=malloc(sizeof(VarAttr));strcpy($$->type,"uintptr");}
    |T_float32                          {$$=malloc(sizeof(VarAttr));strcpy($$->type,"float");}
    |T_float64                          {$$=malloc(sizeof(VarAttr));strcpy($$->type,"float");}
    |T_complex64                        {$$=malloc(sizeof(VarAttr));strcpy($$->type,"complex");}
    |T_complex128                       {$$=malloc(sizeof(VarAttr));strcpy($$->type,"complex");}
    ;

Type:
    LiteralType                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | OperandName                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    |VarType                            {$$=malloc(sizeof(VarAttr));strcpy($$->type,$1->type);}
    ;

Operand:
    Literal                             {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    | OperandName                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    | M_lparan Expression M_rparan      {   }
    ;

OperandName:
    Identifier          {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1);strcpy($$->type,"identifier");}
    ;

LiteralValue:
    M_lcurly M_rcurly                       {   }
    | M_semicolon M_rcurly                  {   }
    | M_lcurly ElementList M_rcurly             {   }
    | M_semicolon ElementList M_rcurly              {   }
    | M_lcurly ElementList M_comma M_rcurly         {   }
    | M_semicolon ElementList M_comma M_rcurly          {   }
    ;

SliceType:
    M_lsqbracket M_rsqbracket Type              {   }
    ;

ElementList:
    KeyedElement                        {   }
    | ElementList M_comma KeyedElement              {   }
    ;

KeyedElement:
    Element                         {   }
    | Key M_colon Element                   {   }
    ;

Key:
    Expression                          {   }
    | LiteralValue                      {   }
    ;

Element:
    Expression                          {   }
    | LiteralValue                      {   }
    ;

TopLevelDecl:
    Declaration                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->type,$1->type);}
    | FunctionDecl                      {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    | MethodDecl                        {$$=malloc(sizeof(VarAttr));$$->code=$1->code;}
    ;

LabeledStmt:
    Identifier M_colon Statement                {   }
    ;

ReturnStmt:
    Key_return                          {$$=malloc(sizeof(VarAttr));sprintf(t,"return");$$->code=gen(t);}
    | Key_return ExpressionList                 {$$=malloc(sizeof(VarAttr));sprintf(t,"return %s",$2->place);$$->code=append($2->code,gen(t));}
    ;

BreakStmt:
    Key_break                           {strcpy(break_label[break_count++],newlabel());sprintf(t,"goto,%s",break_label[break_count-1]);$$->code=append($$->code,gen(t));}
    | Key_break Identifier                  {   }
    ;

ContinueStmt:
    Key_continue                        {   }
    | Key_continue Identifier                   {   }
    ;

/*IfStmt:
    Key_if OPENB Expression Block CLOSEB       {
    }
    | Key_if OPENB SimpleStmt M_semicolon Expression Block CLOSEB   {   }
    | Key_if OPENB Expression Block Key_else Block CLOSEB       {
        
        $$=malloc(sizeof(Elif));
        strcpy($$->Else,newlabel());
        strcpy($$->after,$6->after);
        sprintf(t,"ifgoto,==,%s,%s,%s",$3->place,"0",$$->Else);
        $$->code=append($3->code,gen(t));

    }
    | Key_if OPENB Expression Block Key_else IfStmt CLOSEB      {   }
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else IfStmt CLOSEB   {   }
    | Key_if OPENB SimpleStmt M_semicolon Expression Block Key_else Block CLOSEB    {   }
    ;
*/
if_stmt: Key_if Expression OPENB Block elif_test_suite
{
    $$=malloc(sizeof(Elif));
    strcpy($$->Else,newlabel());

        if($5->code!=NULL)
    strcpy($$->after,$5->after);
        else strcpy($$->after,$$->Else);

    sprintf(t,"ifgoto,==,%s,0,%s",$2->place,$$->Else);
    $$->code=append($2->code,gen(t));
    $$->code=append($$->code,$4->code);

        if($5->code!=NULL)
    {
        sprintf(t,"goto,%s",$$->after);
    $$->code=append($$->code,gen(t));}

    sprintf(t,"label,%s",$$->Else);
    $$->code=append($$->code,gen(t));
    $$->code=append($$->code,$5->code);
        if(strcmp($$->Else,$$->after)!=0 && strcmp($$->after,$5->after)!=0)
    {sprintf(t,"label,%s",$$->after);
    $$->code=append($$->code,gen(t));}
        if(strcmp($$->Else,$$->after)!=0)
    {sprintf(t,"label,%s",$5->after);
    $$->code=append($$->code,gen(t));}
    
}
    | Key_if Expression OPENB Block elif_test_suite Key_else CLOSEB Block   {
    $$=malloc(sizeof(Elif));
    strcpy($$->Else,newlabel());
 Elif* extra=malloc(sizeof(Elif));
        if($5->code!=NULL)
    strcpy($$->after,$5->after);
        else strcpy($$->after,$$->Else);

    sprintf(t,"ifgoto,==,%s,0,%s",$2->place,$$->Else);
    $$->code=append($2->code,gen(t));
    $$->code=append($$->code,$4->code);
        if($5->code==NULL){
       
        strcpy(extra->Else,newlabel());
         sprintf(t,"goto,%s",extra->Else);  
    $$->code=append($$->code,gen(t));
}
        
        if($5->code!=NULL)
    {
        sprintf(t,"goto,%s",$$->after);
    $$->code=append($$->code,gen(t));}
    sprintf(t,"label,%s",$$->Else);
    $$->code=append($$->code,gen(t));
    $$->code=append($$->code,$5->code);
        $$->code=append($$->code,$8->code);
        if($5->code==NULL)
{sprintf(t,"label,%s",extra->Else);$$->code=append($$->code,gen(t));}
        if(strcmp($$->Else,$$->after)!=0 && strcmp($$->after,$5->after)!=0)
    {sprintf(t,"label,%s",$$->after);
    $$->code=append($$->code,gen(t));}
        if(strcmp($$->Else,$$->after)!=0)
    {sprintf(t,"label,%s",$5->after);
    $$->code=append($$->code,gen(t));}
    
}
    ;

elif_test_suite :                   {$$=malloc(sizeof(Elif));}
    | elif_test_suite Key_elif Expression OPENB Block 
{
    $$=malloc(sizeof(Elif));
        if($1->code==NULL)
            if(b_flag==0)strcpy($$->after,newlabel()); else {b_flag=0;strcpy($$->after,b_target);}
        else
            strcpy($$->after,$1->after);
    strcpy($$->Else,newlabel());
    $$->code=append($$->code,$1->code);
        $$->code=append($$->code,$3->code);
    sprintf(t,"ifgoto,==,%s,0,%s",$3->place,$$->Else);
    $$->code=append($$->code,gen(t));
    $$->code=append($$->code,$5->code);
         sprintf(t,"goto,%s",$$->after);
    $$->code=append($$->code,gen(t));
         sprintf(t,"label,%s",$$->Else);
    $$->code=append($$->code,gen(t));
}
    ;

//EmptyExpr:
//     /*empty*/                          {   }
//     ;

//Empty:
  //   /**/                           {   }
   //  ;

ForStmt:
       Key_for OPENB SimpleStmt M_semicolon BrkBlk ExpressionStmt M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB     {
        //printf("DEBUG: I am here\n");
        $$=malloc(sizeof(Codn));
        strcpy($$->begin,newlabel());
        if(strcmp(break_label[break_count-1],"")!=0)
        {
        strcpy($$->after,break_label[break_count-1]);break_count--;}
        else
        strcpy($$->after,newlabel());
        $$->code=$3->code;
        //printf("herejof\n");
        TAC *rough = (TAC *)malloc(sizeof(TAC));
        strcpy(rough->text,$6->code->text);
        rough->next=NULL;
        $$->code=append($$->code,rough);
        //printf("herejoffa3\n");
        sprintf(t,"label,%s",$$->begin);
        $$->code=append($$->code,gen(t));
        //printf("herejof4\n");
        sprintf(t,"ifgoto,==,%s,%s,%s",$6->place,"0",$$->after);
        $$->code=append($$->code,gen(t));
        $$->code=append($$->code,$9->code);
        $$->code=append($$->code,$8->code);
        $$->code=append($$->code,$6->code);
        //printf("herejof5\n");
        sprintf(t,"goto,%s",$$->begin);
        //printf("herejof7\n");
        $$->code=append($$->code,gen(t));
        //printf("herejof8\n");
        sprintf(t,"label,%s",$$->after);
        //printf("herejof9\n");
        $$->code=append($$->code,gen(t));
        //printf("herejof6\n");
        
    }
       //| Key_for OPENB Expression BrkBlk Block BrkBlkEnd CLOSEB {   }
       //| Key_for BrkBlk Block BrkBlkEnd             {   }
       //| Key_for OPENB SimpleStmt M_semicolon BrkBlk EmptyExpr M_semicolon SimpleStmt Block BrkBlkEnd CLOSEB                                {   }
       //| Key_for OPENB EmptyStmt Empty BrkBlk Expression Empty EmptyStmt Block BrkBlkEnd CLOSEB                             {   }
       ;

//RangeClause:
//    Key_range Expression                  {   }
//    | ExpressionList Op_equality Key_range Expression     {   }
//    | ExpressionList Op_assign Key_range Expression       {   }
//    ;

Expression:
    Expression1                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    ;

Expression1:
    Expression1 Op_relational_or Expression2           // {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"|,%s,%s,%s",$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));}
    | Expression2                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    ;

Expression2:
    Expression2 Op_relational_and Expression3           {}
    | Expression3                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    ;

Expression3:
    Expression3 REL_OP Expression4              {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"%s,%s,%s,%s",$2->place,$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));}
    | Expression4                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    ;

Expression4:
    Expression4 Op_unary_or Expression5             {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"|,%s,%s,%s",$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));}
    | Expression4 Op_add Expression5        {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"+,%s,%s,%s",$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));}
    |Expression4 Op_sub Expression5     {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"-,%s,%s,%s",$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));}
    | Expression5                       {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    ;


Expression5:
    Expression5 MUL_OP PrimaryExpr              {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$3->code);strcpy($$->place,newtmp());sprintf(t,"%s,%s,%s,%s",$2->place,$$->place,$1->place,$3->place);$$->code=append($$->code,gen(t));}
    //| Expression5 Op_unary_and PrimaryExpr          {}
    | UnaryExpr                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    ;

//D4:
//  Op_add                          {   }
//  |Op_sub                         {   }
//  |Op_pow                         {   }
//  ;

REL_OP:
    Op_equality                     {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_not_equal                       {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_less                        {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_greater                     {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_greater_eq                      {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_less_eq                     {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    ;

MUL_OP:
    Op_mult                         {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1);}
    |Op_divide                      {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_mod                         {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_less_less                       {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_greater_greater                 {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    |Op_unary_and                       {$$=malloc(sizeof(VarAttr)); strcpy($$->place,$1); }
    ;


UnaryExpr:
    PrimaryExpr                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    | UnaryOp PrimaryExpr                   {   }
    ;

PrimaryExpr:
    Operand                         {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    | PrimaryExpr Selector                  {   }
    | PrimaryExpr Slice                     {   }
    | PrimaryExpr TypeAssertion                 {   }
    | PrimaryExpr Arguments                 {   }
    | OperandName StructLiteral                 {   }
    ;

PrimaryExpr2:
    PrimaryExpr Index {$$=malloc(sizeof(VarAttr));$$->code=append($1->code,$2->code);strcpy($$->place,$1->place);strcpy($$->place2,$2->place);strcpy($$->type,$1->type),strcpy($$->type1,$1->type1);}

StructLiteral:
    M_lcurly KeyValList M_rcurly                {   }
    ;

KeyValList:
    /* empty */                         {   }
    | Expression M_colon Expression             {   }
    | Expression M_colon Expression M_comma KeyValList      {   }
    ;

Selector:
    M_dot Identifier                        {   }
    ;

Index:
    M_lsqbracket Expression M_rsqbracket            {$$=malloc(sizeof(VarAttr));$$->code=$2->code;strcpy($$->place,$2->place);}
    ;

Slice:
    M_lsqbracket M_colon M_rsqbracket               {   }
    | M_lsqbracket M_colon Expression M_rsqbracket      {   }
    | M_lsqbracket Expression M_colon M_rsqbracket      {   }
    | M_lsqbracket Expression M_colon Expression M_rsqbracket   {   }
    | M_lsqbracket M_colon Expression M_colon Expression M_rsqbracket   {   }
    | M_lsqbracket Expression M_colon Expression M_colon Expression M_rsqbracket    {   }
    ;

TypeDecl:
    Key_type TypeSpec                       {   }
    ;

TypeSpec:
    Identifier Type                     {   }
    ;

TypeAssertion:
    M_dot M_lparan Type M_rparan                {   }
    ;

Arguments:
    M_lparan M_rparan                       {   }
    | M_lparan ExpressionList M_rparan              {   }
    | M_lparan ExpressionList DOTS M_rparan         {   }
    ;

DOTS:
    M_dot M_dot M_dot                   {   }
    ;

ExpressionList:
    Expression                          {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    | ExpressionList M_comma Expression             {   }
    ;

ArrayList:
    PrimaryExpr2        {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->place2,$1->place2);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}

MapType:
    Key_map M_lsqbracket Type M_rsqbracket Type         {   }
    ;

StructType:
    Key_struct M_lcurly FieldDeclList M_rcurly          {   }
    | Key_struct M_semicolon FieldDeclList M_rcurly     {   }
    | Key_struct M_lcurly M_rcurly              {   }
    | Key_struct M_semicolon M_rcurly               {   }
    ;

FieldDeclList:
    FieldDecl M_semicolon                   {   }
    | FieldDeclList FieldDecl M_semicolon           {   }
    ;

FieldDecl:
    IdentifierList Type String                  {   }
    | IdentifierList Type                   {   }
    ;

PointerType:
    Op_mult Type                        {   }
    ;

ArrayType:
    M_lsqbracket Expression M_rsqbracket Type           {$$=malloc(sizeof(VarAttr));$$->code=append($2->code,$4->code);strcpy(forArray,$2->place);strcpy($$->type,$4->type);}
    ;

Literal:
    BasicLit                            {$$=malloc(sizeof(VarAttr));$$->code=$1->code;strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    | CompositeLit                      {   }
    ;

BasicLit:
    Int_lit                         {$$=malloc(sizeof(VarAttr));strcpy($$->place,$1);strcpy($$->type,"lit");strcpy($$->type1,"int");}
    |Float_lit                          {$$=malloc(sizeof(VarAttr));strcpy($$->place,$1);strcpy($$->type,"lit");strcpy($$->type1,"float");}
    |String                         {$$=malloc(sizeof(VarAttr));strcpy($$->place,$1->place);strcpy($$->type,$1->type);strcpy($$->type1,$1->type1);}
    |Bool_true                          {$$=malloc(sizeof(VarAttr));strcpy($$->place,$1);strcpy($$->type,"lit");strcpy($$->type1,"bool");strcpy($$->type2,"true");}
    |Bool_false                         {$$=malloc(sizeof(VarAttr));strcpy($$->place,$1);strcpy($$->type,"lit");strcpy($$->type1,"bool");strcpy($$->type2,"false");}
    |Imaginary_lit                      {$$=malloc(sizeof(VarAttr));strcpy($$->place,$1);strcpy($$->type,"lit");strcpy($$->type1,"complex");}
    ;

UnaryOp:
    Op_add                          {   }
    |Op_sub                         {   }
    |Op_unary_not                       {   }
    |Op_pow                         {   }
    |Op_mult                        {   }
    |Op_unary_and                           {   }
    ;

//UN_OP:
//  Op_add                          {   }
//  |Op_sub                         {   }
//  |Op_unary_not                       {   }
//  |Op_pow                         {   }
//  |Op_mult                        {   }
//  |Op_unary_and                       {   }
//  ;

String:
    String_lit                      {$$=malloc(sizeof(VarAttr));strcpy($$->place,$1);strcpy($$->type,"lit");strcpy($$->type1,"string");}
    ;

PackageClause:
    Key_package Identifier                  {   }
    ;

ImportDeclList:
    /* empty */                         {   }
    | ImportDeclList ImportDecl M_semicolon         {   }
    | ImportDecl M_semicolon                    {   }
    ;

ImportDecl:
    Key_import M_lparan ImportSpecList M_rparan         {   }
    | Key_import ImportSpec                 {   }
    ;

ImportSpecList:
    /* empty */                         {   }
    | ImportSpecList ImportSpec M_semicolon         {   }
    | ImportSpec M_semicolon                    {   }
    ;

ImportSpec:
    Identifier ImportPath                   {   }
    | M_dot ImportPath                      {   }
    | ImportPath                        {   }
    ;

ImportPath:
    String                          {   }
    ;


%%
void yyerror (char * s){
        
}

int main(int argc, char **argv){
    global=malloc(sizeof(sym_table));
    //printf("DEBUG: Putting global table");
    push(global);
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
    //printf("DEBUG: printing everything about global: \nglobal->head->name: %s\nglobal->tail->name: %s\n",global->head->name,global->tail->name);
    return 0;
}
