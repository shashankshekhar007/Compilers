all:
	clear
	yacc -v -d lexer.y
	lex lexer.l
	cc lex.yy.c codes.c y.tab.c -o parser
