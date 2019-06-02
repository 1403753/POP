all:
	bison -d parser.y
	flex scanner.l
	gcc lex.yy.c parser.tab.c intermediate.c -o cparser -lm

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
	rm -f lex.yy.c parser.tab.c parser.tab.h out.c cparser out *.png *.dot


run:
	gcc a3.c -o out
	./out
	./cparser a3.c > out.c 2>&1
	gcc out.c -o out
	./out

png:
	dot -Tpng  test_function.dot -o test_function.png

eps:
	dot -Teps  test_function.dot -o test_function.eps
