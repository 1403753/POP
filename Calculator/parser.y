%{
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h>
	#include "calc3.h"

	/* prototypes */
	nodeType *opr(int oper, int nops, ...);
	nodeType *id(int i);
	nodeType *con(int value);
	void freeNode(nodeType *p);
	int ex(nodeType *p);

	int yylex();
	void yyerror(const char *s);
	
	char *input_filename = NULL;
	char *output_filename = "a.c";
	
	int sym[26]; /* symbol table */
%}

%union {
	int iValue; /* integer value */
	char sIndex; /* symbol table index */
	nodeType *nPtr; /* node pointer */
};

%token <iValue> INTEGER
%token <sIndex> VARIABLE
%token WHILE IF PRINT
%nonassoc IFX
%nonassoc ELSE

%left GE LE EQ NE '>' '<'
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%type <nPtr> stmt expr stmt_list

%%

program:
	function '.' { exit(0); }
	;

function:
	function stmt { printf(" ===?=== "); ex($2); freeNode($2); }
	| /* NULL */
	;

stmt:
	';' { $$ = opr(';', 2, NULL, NULL); }
	| expr ';' { $$ = $1; }
	| PRINT expr ';' { $$ = opr(PRINT, 1, $2); }
	| VARIABLE '=' expr ';' { $$ = opr('=', 2, id($1), $3); }
	| WHILE '(' expr ')' stmt
	{ $$ = opr(WHILE, 2, $3, $5); }
	| IF '(' expr ')' stmt %prec IFX
	{ $$ = opr(IF, 2, $3, $5); }
	| IF '(' expr ')' stmt ELSE stmt
	{ $$ = opr(IF, 3, $3, $5, $7); }
	| '{' stmt_list '}' { $$ = $2; }
	;

stmt_list:
	stmt { $$ = $1; }
	| stmt_list stmt { $$ = opr(';', 2, $1, $2); }
	;

expr:
	INTEGER { $$ = con($1); }
	| VARIABLE { $$ = id($1); }
	| '-' expr %prec UMINUS { $$ = opr(UMINUS, 1, $2); }
	| expr '+' expr { $$ = opr('+', 2, $1, $3); }
	| expr '-' expr { $$ = opr('-', 2, $1, $3); }
	| expr '*' expr { $$ = opr('*', 2, $1, $3); }
	| expr '/' expr { $$ = opr('/', 2, $1, $3); }
	| expr '<' expr { $$ = opr('<', 2, $1, $3); }
	| expr '>' expr { $$ = opr('>', 2, $1, $3); }
	| expr GE expr { $$ = opr(GE, 2, $1, $3); }
	| expr LE expr { $$ = opr(LE, 2, $1, $3); }
	| expr NE expr { $$ = opr(NE, 2, $1, $3); }
	| expr EQ expr { $$ = opr(EQ, 2, $1, $3); }
	| '(' expr ')' { $$ = $2; }
	;

%%
#include <stdio.h>

nodeType *con(int value) {
	nodeType *p;

	/* allocate node */
	if ((p = malloc(sizeof(conNodeType))) == NULL)
		yyerror("out of memory");

	/* copy information */
	p->type = typeCon;
	p->con.value = value;

	return p;
}

nodeType *id(int i) {
	nodeType *p;

	/* allocate node */
	if ((p = malloc(sizeof(idNodeType))) == NULL)
	yyerror("out of memory");

	/* copy information */
	p->type = typeId;
	p->id.i = i;

	return p;
}

nodeType *opr(int oper, int nops, ...) {
	va_list ap;
	nodeType *p;
	size_t size;
	int i;

	/* allocate node */
	size = sizeof(oprNodeType) + (nops - 1) * sizeof(nodeType*);
	if ((p = malloc(size)) == NULL)
		yyerror("out of memory");

	/* copy information */
	p->type = typeOpr;
	p->opr.oper = oper;
	p->opr.nops = nops;
	va_start(ap, nops);
	for (i = 0; i < nops; i++)
		p->opr.op[i] = va_arg(ap, nodeType*);
	va_end(ap);
	return p;

}

void freeNode(nodeType *p) {
	int i;

	if (!p) return;
	if (p->type == typeOpr) {
		for (i = 0; i < p->opr.nops; i++)
			freeNode(p->opr.op[i]);
	}
	free (p);
}

void yyerror(const char *s) {
	fprintf(stdout, "%s\n", s);
}

/*
int ex(nodeType *p) {
if (!p) return 0;
switch(p->type) {
case typeCon: return p->con.value;
case typeId: return sym[p->id.i];
case typeOpr:
switch(p->opr.oper) {
case WHILE: while(ex(p->opr.op[0]))
ex(p->opr.op[1]);
return 0;
case IF: if (ex(p->opr.op[0]))
ex(p->opr.op[1]);
else if (p->opr.nops > 2)
ex(p->opr.op[2]);
return 0;
case PRINT: printf("%d\n", ex(p->opr.op[0]));
return 0;
case ';': ex(p->opr.op[0]);
return ex(p->opr.op[1]);
case '=': return sym[p->opr.op[0]->id.i] =
ex(p->opr.op[1]);
case UMINUS: return -ex(p->opr.op[0]);
case '+': return ex(p->opr.op[0]) + ex(p->opr.op[1]);
case '-': return ex(p->opr.op[0]) - ex(p->opr.op[1]);
case '*': return ex(p->opr.op[0]) * ex(p->opr.op[1]);
case '/': return ex(p->opr.op[0]) / ex(p->opr.op[1]);
case '<': return ex(p->opr.op[0]) < ex(p->opr.op[1]);
case '>': return ex(p->opr.op[0]) > ex(p->opr.op[1]);
case GE: return ex(p->opr.op[0]) >= ex(p->opr.op[1]);
case LE: return ex(p->opr.op[0]) <= ex(p->opr.op[1]);
case NE: return ex(p->opr.op[0]) != ex(p->opr.op[1]);
case EQ: return ex(p->opr.op[0]) == ex(p->opr.op[1]);
}
}
}
*/









static int lbl;

int ex(nodeType *p) {
	
	int lbl1, lbl2;

	if (!p) return 0;
	switch(p->type) {
		case typeCon:
			printf("\tpush\t%d\n", p->con.value);
			break;
		case typeId:
			printf("\tpush\t%c\n", p->id.i + 'a');
			break;
		case typeOpr:
			switch(p->opr.oper) {
				case WHILE:
					printf("L%03d:\n", lbl1 = lbl++);
					ex(p->opr.op[0]);
					printf("\tjz\tL%03d\n", lbl2 = lbl++);
					ex(p->opr.op[1]);
					printf("\tjmp\tL%03d\n", lbl1);
					printf("L%03d:\n", lbl2);
					break;
				case IF:
					ex(p->opr.op[0]);
					if (p->opr.nops > 2) {
						// if else 
						printf("\tjz\tL%03d\n", lbl1 = lbl++);
						ex(p->opr.op[1]);
						printf("\tjmp\tL%03d\n", lbl2 = lbl++);
						printf("L%03d:\n", lbl1);
						ex(p->opr.op[2]);
						printf("L%03d:\n", lbl2);
					} else {
						// if 
						printf("\tjz\tL%03d\n", lbl1 = lbl++);
						ex(p->opr.op[1]);
						printf("L%03d:\n", lbl1);
					}
					break;
				case PRINT:
					ex(p->opr.op[0]);
					printf("\tprint\n");
					break;
				case '=':
					ex(p->opr.op[1]);
					printf("\tpop\t%c\n", p->opr.op[0]->id.i + 'a');
					break;
				case UMINUS:
					ex(p->opr.op[0]);
					printf("\tneg\n");
					break;
				default:
					ex(p->opr.op[0]);
					ex(p->opr.op[1]);
					switch(p->opr.oper) {
						case '+': printf("\tadd\n"); break;
						case '-': printf("\tsub\n"); break;
						case '*': printf("\tmul\n"); break;
						case '/': printf("\tdiv\n"); break;
						case '<': printf("\tcompLT\n"); break;
						case '>': printf("\tcompGT\n"); break;
						case GE: printf("\tcompGE\n"); break;
						case LE: printf("\tcompLE\n"); break;
						case NE: printf("\tcompNE\n"); break;
						case EQ: printf("\tcompEQ\n"); break;
					}
			}
	}
}


int main(int argc, char **argv)
{
 int i, yyresult;

 for(i=1;i<argc;i++) {
    if (*argv[i]=='-') {
       switch(*(argv[i]+1)) {
       /* output option */
       case 'o':
          output_filename=argv[i]+2;
          break;

       /********************************/
       /* specify your own option here */
       /********************************/

       default:
          fprintf(stderr,"%s: unknown argument option\n",argv[0]);
          exit(1);
       }
    } else {
      if (input_filename != NULL) {
         fprintf(stderr,"%s: only one input file allowed\n",argv[0]);
         exit(1);
      }
      input_filename = argv[i];
    }
 }

 if (input_filename != NULL) {
    if ((freopen(input_filename, "r",stdin))==NULL) {
      fprintf(stdout,"%s: cannot open input file %s\n",argv[0],input_filename);

      exit(1);
    }
 }
 yyresult = yyparse();

 if (yyresult)
		fprintf(stdout,"Errors detected.\n");
 else
		fprintf(stdout,"No errors detected.\n");

 exit(yyresult);
}