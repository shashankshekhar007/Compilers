all:
	clear
	yacc -v -d src/lexer.y -o src/y.tab.c
	lex -o src/lex.yy.c src/lexer.l
	cc src/lex.yy.c src/codes.c src/topPush.c src/y.tab.c -o bin/irgen

clean:
	rm src/y.tab.c
	rm src/y.tab.h
	rm src/lex.yy.c
	rm src/y.output
