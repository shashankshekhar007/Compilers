default : program
program : lexer.l lexer.y 
	lex lexer.l
	yacc -d lexer.y
	gcc lex.yy.c y.tab.c -o bas.exe
 
