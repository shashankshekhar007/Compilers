default : program
program : src/lexer.l src/lexer.y 
	lex src/lexer.l
	yacc -d src/lexer.y
	gcc lex.yy.c y.tab.c -o bin/parser	

clean : 
	rm Rules.txt
	rm Penultimate.txt
	rm *.html
	rm lex.yy.c
	rm y.tab.c
	rm y.tab.h
