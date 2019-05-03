all:
	bison -d parser.y
	flex scanner.l
	gcc lex.yy.c parser.tab.c intermediate.c -o cparser

parser:
	bison -d parser.y
	flex scanner.l
	gcc lex.yy.c parser.tab.c intermediate.c -o cparser
	rm -f lex.yy.c parser.tab.c parser.tab.h

debug:
	bison -d -t parser.y
	flex -d scanner.l
	gcc -g lex.yy.c parser.tab.c intermediate.c -o cparser

clean:
	rm -f lex.yy.c parser.tab.c parser.tab.h cparser 

clean_all:
	rm -f lex.yy.c parser.tab.c parser.tab.h cparser *.lis *.png *.dot *.eps
	
png:
	dot -Tpng  test_function.dot -o test_function.png

eps:
	dot -Teps  test_function.dot -o test_function.eps