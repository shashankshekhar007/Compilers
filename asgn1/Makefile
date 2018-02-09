default: program
program: ./src/*
	lex -o ./src/lex.yy.c ./src/lexer.l
	gcc -lfl -o ./bin/lexer ./src/lex.yy.c
clean:
	-rm -f ./bin/lexer
	-rm -f ./src/lex.yy.c

