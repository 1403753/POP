%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "intermediate.h"

char *input_filename = NULL;
char *output_filename = "a.c";
int yylex();
int yyerror(char *s);

// prototypes
nodeType *opr(int oper, int nops, ...);
nodeType *id(int i);
nodeType *con(int value);
void freeNode(nodeType *p);

int sym[26]; /* symbol table */

static int counter = 0;

%}

%union {
	int iValue; /* integer value */
	char sIndex; /* symbol table index */
	nodeType *nPtr; /* node pointer */
};

%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <nPtr> additive_expression multiplicative_expression cast_expression

%start translation_unit

%%

primary_expression
	: IDENTIFIER
	| CONSTANT
	| STRING_LITERAL
	| '(' expression ')'
	;

postfix_expression 
	: primary_expression 																				
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression
	| argument_expression_list ',' assignment_expression
	;

unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF '(' type_name ')'
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression																			{													  }
	| '(' type_name ')' cast_expression  										{														}
	;

multiplicative_expression
	: cast_expression																				{		eval($$);  }
	| multiplicative_expression '*' cast_expression					{	$$ = opr('*', 2, $1, $3); }
	| multiplicative_expression '/' cast_expression					{	$$ = opr('/', 2, $1, $3); }
	| multiplicative_expression '%' cast_expression					{	$$ = opr('%', 2, $1, $3); }
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression 		{ $$ = opr('+', 2, $1, $3); }
	| additive_expression '-' multiplicative_expression			{	$$ = opr('-', 2, $1, $3); }
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression
	| relational_expression '>' shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	| expression ',' assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers init_declarator_list ';'
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator
	| declarator '=' initializer
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID
	| CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| SIGNED
	| UNSIGNED
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator
	;

direct_declarator
	: IDENTIFIER
	| '(' declarator ')'
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: initializer
	| initializer_list ',' initializer
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'
	| '{' declaration_list '}'
	| '{' declaration_list statement_list '}'
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ';'
	| expression ';'
	;

selection_statement
	: IF '(' expression ')' statement
	| IF '(' expression ')' statement ELSE statement
	| SWITCH '(' expression ')' statement
	;

iteration_statement
	: WHILE '(' expression ')' statement
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' expression_statement expression_statement ')' statement
	| FOR '(' expression_statement expression_statement expression ')' statement
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN expression ';'
	;

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;

external_declaration
	: function_definition
	| declaration
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement
	| declaration_specifiers declarator compound_statement
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;
	
%%
#include <stdio.h>

extern char yytext[];
extern int column;

int yyerror(s)
char *s;
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

nodeType *opr(int oper, int nops, ...)
{
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
	printf(" Hi! %d\n", oper);
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

double eval(struct ast *a)
{
	FILE *fp;
	fp = fopen("file.dot", "a+");
	
  double v;  //calculated value of this subtree
  switch(a->nodetype) {
		case 'K': 
			v = ((struct numval *)a)->number; 
			break;
		case '+':
			fprintf(fp, "%d -> " a->id, a->l->id);
			fprintf(fp, "%d -> " a->id, a->r->id);
			v = eval(a->l) + eval(a->r);
			break;
		case '-':
			v = eval(a->l) - eval(a->r);
			break;
		case '*':
			v = eval(a->l) * eval(a->r);
			break;
		case '/':
			v = eval(a->l) / eval(a->r);
			break;
		case '|':
			v = eval(a->l); if(v < 0) v = -v;
			break;
		case 'M':
			v = -eval(a->l);
			break;
		default:
			printf("internal error: bad node %c\n", a->nodetype);
  }
  return v;
	fclose(fp);
}

void treefree(struct ast *a)
{
  switch(a->nodetype) {
    /* two subtrees */
  case '+':
  case '-':
  case '*':
  case '/':
    treefree(a->r);
    /* one subtree */
  case '|':
  case 'M':
    treefree(a->l);
    /* no subtree */
  case 'K':
    free(a);
    break;
  default: printf("internal error: free bad node %c\n", a->nodetype);
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

