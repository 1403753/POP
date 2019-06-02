##
## %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
## %%  COMMAND LIST FOR THIS MAKEFILE  %%
## %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
##
PARAMS = -i -n

all:       ##
           ## generates the parser
           ##
	bison -d parser.y
	flex scanner.l
	gcc lex.yy.c parser.tab.c intermediate.c -o cparser -lm
	
help:      ##
           ## how to use this makefile
           ##
	@fgrep -h "##" $(MAKEFILE_LIST) | fgrep -v fgrep | sed -e 's/\\$$//' | sed -e 's/##//'


parser:
	bison -d parser.y
	flex scanner.l
	gcc lex.yy.c parser.tab.c intermediate.c -o cparser
	rm -f lex.yy.c parser.tab.c parser.tab.h

debug:
	bison -d -t parser.y
	flex -d scanner.l
	gcc -g lex.yy.c parser.tab.c intermediate.c -o cparser


clean:     ##
           ## removes all generated files
           ##
	rm -f lex.yy.c parser.tab.c parser.tab.h *_out.c cparser *_out *.png *.dot *.eps


transform: ##
           ## type ' make FILE=<filename> transform ' to parse and fully transform 
           ## the file <filename>.c and to store the result in <filename>_out.c.
           ## 
           ## To perform loop interchange only type
           ## ' make FILE=<filename> PARAMS='-i' transform '.
           ##
           ## To perform loop normalization only type
           ## ' make FILE=<filename> PARAMS='-n' transform '.
           ##
	./cparser $(FILE).c $(PARAMS) > $(FILE)_out.c 2>&1

run:       ##
           ## type ' make FILE=<filename> run ' to compile both files <filename>.c
           ## and <filename>_out.c and to execute them for comparison.
           ##
	gcc $(FILE).c -o $(FILE)_original_out
	./$(FILE)_original_out
	gcc $(FILE)_out.c -o $(FILE)_out
	./$(FILE)_out
	
png:       ##
           ## generates the dot- and .png file for the abstract syntax tree of
           ## the most recently transformed input file.
           ##
	dot -Tpng  test_function.dot -o test_function.png

eps:       ##
           ## generates the dot- and .eps file for the abstract syntax tree of 
           ## the most recently transformed input file.
           ##
	dot -Teps  test_function.dot -o test_function.eps
