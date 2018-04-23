all:
	clear
	yacc -v -d ../asgn5/src/lexer.y -o ../asgn5/src/y.tab.c
	lex -o ../asgn5/src/lex.yy.c ../asgn5/src/lexer.l
	cc ../asgn5/src/lex.yy.c ../asgn5/src/codes.c ../asgn5/src/topPush.c ../asgn5/src/y.tab.c -o ../asgn5/bin/irgen

	gcc -o ../asgn2/bin/codegen ../asgn2/src/assignment2.c

	