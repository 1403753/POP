all:
	bison -d parser.y
	flex scanner.l
	gcc lex.yy.c parser.tab.c -o cparser

parser:
	bison -d parser.y
	flex scanner.l
	gcc lex.yy.c parser.tab.c -o cparser
	rm -f lex.yy.c parser.tab.c parser.tab.h

debug:
	bison -d -t parser.y
	flex -d scanner.l
	gcc -g lex.yy.c parser.tab.c -o cparser

clean:
	rm -f lex.yy.c parser.tab.c parser.tab.h cparser 

clean_all:
	rm -f lex.yy.c parser.tab.c parser.tab.h cparser *.lis 

dot:
	dot -Tpng foo.dot -o foo.png