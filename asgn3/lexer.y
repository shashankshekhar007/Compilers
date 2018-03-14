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
%start sourceFile

%%
 
sourceFile : packageClause eos zom_importDecl_eos zom_topLevelDecl_eos
	   ;
	   
zom_importDecl_eos : importDecl eos zom_importDecl_eos
                   | ;

zom_topLevelDecl_eos : topLevelDecl eos zom_topLevelDecl_eos
		     | ;

packageClause : Key_package Identifier {printf("checking");}
	      ;

importDecl : Key_import importSpec
	   | Key_import M_lparan zom_importSpec_eos M_rparan
	   ;

zom_importSpec_eos : importSpec eos zom_importSpec_eos
		   | ;

importSpec : oom_dot_or_identifier importPath
           ;

oom_dot_or_identifier : dot_or_identifier
                      |
		      ;

dot_or_identifier : M_dot
		  | Identifier
		  ;

importPath : String_lit
	   ;

topLevelDecl : declaration
	     | functionDecl
	     | methodDecl
	     ;

declaration : constDecl
	    | typeDecl
	    | varDecl
	    ;

constDecl : Key_const constSpec
	  | Key_const M_lparan zom_constSpec_eos M_rparan
	  ;

zom_constSpec_eos : constSpec eos zom_constSpec_eos
		  | ;
//here we are changing constant declaration to include the type of variables
constSpec : identifierList oom_alpha
	  ;

oom_alpha : M_lparan oom_type Op_assign expressionList M_rparan
	  |
	  ;

oom_type : Key_type
	 |
	 ;

identifierList : Identifier zom_comma_Identifier
	       ;

zom_comma_Identifier : M_comma Identifier zom_comma_Identifier
		     | ;

expressionList : expression zom_comma_expression
	       ;

zom_comma_expression : M_comma expression zom_comma_expression
		     | ;

typeDecl : Key_type typeSpec
	 | Key_type M_lparan zom_typespec_semicolon M_rparan
	 ;

zom_typespec_semicolon : typeSpec M_semicolon zom_typespec_semicolon
		       | ;

typeSpec : Identifier type
	 ; 

functionDecl : Key_func Identifier function
	     | Key_func Identifier signature
	     ;

function : signature block
	 ;

methodDecl : Key_func receiver Identifier function
	   | Key_func receiver Identifier signature
	   ;

receiver : parameters
	 ;

varDecl : Key_var varSpec
	| Key_var M_lparan zom_varSpec_eos M_rparan
	;

zom_varSpec_eos : varSpec eos zom_varSpec_eos
		| ;

//variables must have a declaration type
varSpec : identifierList type oom_equal_expressionList
	;

oom_equal_expressionList : Op_assign expressionList
			 | 
			 ;

block : M_lcurly statementList M_rcurly
      ;

statementList : zom_statement_eos
	      ;

zom_statement_eos : statement eos zom_statement_eos
		  | ;

statement : declaration
	  | labeledStmt
	  | simpleStmt
	  | returnStmt
	  | breakStmt
	  | continueStmt
	  | fallthroughStmt
	  | block
	  | ifStmt
	  | switchStmt
	  | selectStmt
	  | forStmt
	  ;

simpleStmt : sendStmt
	   | expressionStmt
	   | incDecStmt
	   | assignment
	   | shortVarDecl
	   | emptyStmt
	   ;

expressionStmt : expression
	       ;

sendStmt : expression Op_less Op_sub expression
	 ;

incDecStmt : expression Op_unary_add
	   | expression Op_unary_sub
	   ;

assignment : expressionList assign_op expressionList
	   ;

temp_asgn : Op_add 
	  | Op_sub
	  | Op_pow
	  | Op_mult
	  | Op_divide
	  | Op_mod
	  | Op_less_less
	  | Op_greater_greater
	  | Op_unary_and
	  | Op_unary_and Op_pow
	  ;

oom_temp_assign : temp_asgn
		| ;
		  
assign_op : oom_temp_assign Op_equality
	  ;

shortVarDecl : identifierList M_colon Op_equality expressionList
	     ;

emptyStmt : M_semicolon
	  ;

labeledStmt : Identifier M_colon statement
	    ;

returnStmt : Key_return zom_expressionList
	   ;

zom_expressionList : expressionList
		   | ;

breakStmt : Key_break zom_Identifier
	  ;

zom_Identifier : Identifier 
	       | ;

continueStmt : Key_continue zom_Identifier
	     ;

fallthroughStmt : Key_fallthrough
		;

ifStmt : Key_if simpleStmt M_semicolon expression block oom_else_ifstmtorblock 
       | Key_if expression block oom_else_ifstmtorblock
       ;

//oom_simpleStmt_semicolon : simpleStmt M_semicolon
//			 |
//			 ;

oom_else_ifstmtorblock : Key_else ifStmt
		       | Key_else block
		       | 
		       ;

switchStmt : exprSwitchStmt
	   | typeSwitchStmt
	   ;

exprSwitchStmt : Key_switch oom_simpleStmt_semicolon oom_expression M_lcurly zom_exprCaseClause M_rcurly
	       ;

oom_simpleStmt_semicolon : simpleStmt M_semicolon
			 | ;

oom_expression  : expression
		| ;

zom_exprCaseClause : exprCaseClause zom_exprCaseClause
		   | ;

exprCaseClause  : exprSwitchCase M_colon statementList
		;

exprSwitchCase  : Key_case expressionList
		| Key_default
		;

typeSwitchStmt  : Key_switch oom_simpleStmt_semicolon typeSwitchGuard M_lcurly zom_typeCaseClause M_rcurly
		;

zom_typeCaseClause : typeCaseClause zom_typeCaseClause
		   | ;

typeSwitchGuard : Identifier M_colon Op_assign primaryExpr M_dot M_lparan Key_type M_rparan
		| primaryExpr M_dot M_lparan Key_type M_rparan
		;

//zom_Identifier_coloneq  : Identifier M_colon Op_assign
//			| ;

typeCaseClause  : typeSwitchCase M_colon statementList
		;

typeSwitchCase  : Key_case typeList 
		| Key_default
		;

typeList : type zom_comma_type
	 ;

zom_comma_type  : M_comma type zom_comma_type
		| ;

selectStmt : Key_select M_lcurly zom_commClause M_rcurly
	   ;

zom_commClause  : commClause zom_commClause
		| ;

commClause : commCase M_colon statementList
	   ;

commCase : Key_case sendStmt
	 | Key_case recvStmt
	 | Key_default
	 ;

recvStmt : expressionList Op_assign expression
	 | identifierList M_colon Op_assign expression
	 | expression
	 ;

//oom_beta : expressionList Op_assign
//	 | identifierList M_colon Op_assign
//	 | ;

forStmt : Key_for oom_gamma block
	;

oom_gamma : expression
	  | forClause
	  | rangeClause
	  | ;

forClause : oom_simpleStmt M_semicolon expression M_semicolon oom_simpleStmt
	  | oom_simpleStmt M_semicolon M_semicolon oom_simpleStmt
	  ;

oom_simpleStmt  : simpleStmt
		| ;

//oom_expression  : 
//		| expression
//		;

rangeClause : expressionList Op_equality Key_range expression
	    | identifierList M_colon Op_equality Key_range expression
	    | Key_range expression
	    ;

//oom_expressionList_eq : expressionList Op_equality
//		      | ;

//oom_identifierList_coloneq : identifierList M_colon Op_equality
//			   | ;

type : typeName
     | typeLit
     | M_lparan type M_rparan
     ;

typeName : Identifier
	 | qualifiedIdent
	 ;

typeLit : arrayType
	| structType
	| pointerType
	| functionType
	| interfaceType
	| sliceType
	| mapType
	;

arrayType : M_lsqbracket arrayLength M_rsqbracket elementType
	  ;

arrayLength : expression
	    ;

elementType : type
	    ;

pointerType : Op_mult type
	    ;

interfaceType : Key_interface M_lcurly zom_methodSpec_eos M_rcurly
	      ; 

zom_methodSpec_eos : methodSpec eos zom_methodSpec_eos
		   | ;

sliceType : M_lsqbracket M_rsqbracket elementType
	  ;

mapType : Key_map M_lsqbracket type M_rsqbracket elementType
	;

methodSpec : Identifier signature
	   | typeName
	   ;

functionType : Key_func signature
	     ;

signature : parameters oom_result
	  ;

oom_result : result 
	   | ;

result  : parameters
	| type
	;

parameters : M_lparan oom_parameterList_comma M_rparan
	   ;

oom_parameterList_comma : parameterList oom_comma 
			| ;

oom_comma : M_comma 
	  | ;

parameterList : parameterDecl zom_comma_parameterDecl
	      ;

zom_comma_parameterDecl : M_comma parameterDecl zom_comma_parameterDecl
			| ;

parameterDecl : oom_identifierList oom_tripledot type
	      ;

oom_identifierList : identifierList
		   | ;

oom_tripledot : M_dot M_dot M_dot
	      | ;

operand : literal
	| operandName
	| methodExpr
	| M_lparan expression M_rparan
	;

literal : basicLit
	| compositeLit
	| functionLit
	;

basicLit : Int_lit
	 | Float_lit
	 | Imaginary_lit
	 | String_lit
	 ;

operandName : Identifier
	    | qualifiedIdent
	    ;

qualifiedIdent  : Identifier M_dot Identifier
		;

compositeLit : literalType literalValue
	     ; 

literalType : structType
	    | arrayType
	    | M_lsqbracket M_dot M_dot M_dot M_rsqbracket elementType
	    | sliceType
	    | mapType
	    | typeName
	    ;

literalValue : M_lcurly oom_elementList_comma M_rcurly
	     ;

oom_elementList_comma : elementList oom_comma
		      | ;

elementList : keyedElement zom_comma_keyedElement
	    | ;

zom_comma_keyedElement  : M_comma keyedElement zom_comma_keyedElement
			| ;

keyedElement : key M_colon element
	     | element
	     ;

//oom_key_colon : key M_colon
//	      | ;

key : expression
    | Identifier
    | literalValue
    ;

element : expression
	| literalValue
	;

structType : Key_struct M_lcurly zom_fieldDecl_eos M_rcurly
	   ;

zom_fieldDecl_eos : fieldDecl eos zom_fieldDecl_eos
		  | ;

fieldDecl : identifierList type String_lit
	  | identifierList type
	  | anonymousField String_lit
	  | anonymousField
	  ;

anonymousField  : Op_mult typeName
		| typeName
		;

functionLit : Key_func function
	    ;

primaryExpr : operand
	    | conversion
	    | primaryExpr selector
	    | primaryExpr index
	    | primaryExpr slice
	    | primaryExpr typeAssertion
//	    | primaryExpr arguments
	    ;


selector : M_dot Identifier
	 ;

index : M_lsqbracket expression M_rsqbracket
      ;

slice : M_lsqbracket oom_expression M_colon oom_expression M_rsqbracket
      | M_lsqbracket oom_expression M_colon expression M_colon expression M_rsqbracket
      ;

typeAssertion : M_dot M_lparan type M_rparan
	      ;

//arguments : M_lpa

methodExpr : receiverType M_dot Identifier
	   ;

receiverType : typeName
	     | M_lparan Op_mult typeName M_rparan
	     | M_lparan receiverType M_rparan
	     ;

expression : unaryExpr
	   | expression any_of_these_binary_operators expression
	   ;

any_of_these_binary_operators : Op_relational_and
			      | Op_relational_or
			      | Op_equality
			      | Op_not_equal
			      | Op_less
			      | Op_greater
			      | Op_less_eq
			      | Op_greater_eq
			      | Op_add
			      | Op_sub
			      | Op_unary_or
			      | Op_pow
			      | Op_mult
			      | Op_divide
			      | Op_mod
			      | Op_less_less
			      | Op_greater_greater
			      | Op_unary_and
			      | Op_unary_and Op_pow
			      ;

unaryExpr : primaryExpr
	  | any_of_these_unary_operators unaryExpr
	  ;


any_of_these_unary_operators      : Op_add
	  			  | Op_sub
	  			  | Op_unary_not
	  			  | Op_pow
	  			  | Op_mult
	  			  | Op_unary_and
	  			  | Op_less Op_sub
				  ;

conversion : type M_lparan expression M_comma M_rparan
	   | type M_lparan expression M_rparan
	   ;

eos : M_semicolon
    ;
/*
sourceFile : zom_key_import Identifier
           ;
zom_key_import : Key_import
	       | ;
*/
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
