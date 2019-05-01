%{

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "intermediate.h"

char *input_filename = NULL;
char *output_filename = "a.c";
int yylex();
int yyerror(struct ast **astree, char *s);

int debug = 0;

extern char *yytext;
%}

%parse-param {struct ast **astree}

%union {
  struct ast *astree;
  double d;
}

%token <d> IDENTIFIER CONSTANT STRING_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <astree> primary_expression additive_expression multiplicative_expression 
%type <astree> cast_expression expression unary_expression postfix_expression function_definition
%type <astree> statement parse_tree compound_statement expression_statement labeled_statement
%type <astree> selection_statement iteration_statement jump_statement statement_list declaration_list


%start translation_unit

%%

primary_expression
	: IDENTIFIER						{ $$ = newnum($1); 						if(debug)printf(" l:46\n"); }
	| CONSTANT							{ $$ = newnum((double)$1);    if(debug)printf(" l:47\n"); }
	| STRING_LITERAL				{ $$ = newnum($1); 						if(debug)printf(" l:48\n"); }
	| '(' expression ')'		{ $$ = $2; 										if(debug)printf(" l:49\n"); }
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
	| unary_operator cast_expression {  }
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
	: unary_expression																			{ if(debug)printf(" l:87\n"); }
	| '(' type_name ')' cast_expression  										{ if(debug)printf(" l:86\n"); }
	;

multiplicative_expression
	: cast_expression																				{ $$ = $1; if(debug)printf(" l:92\n"); }
	| multiplicative_expression '*' cast_expression					{	$$ = newast('*', $1, $3); if(debug)printf(" l:93\n"); }
	| multiplicative_expression '/' cast_expression					{	$$ = newast('/', $1, $3); if(debug)printf(" l:94\n"); }
	| multiplicative_expression '%' cast_expression					{	$$ = newast('%', $1, $3); if(debug)printf(" l:95\n"); }
	;

additive_expression
	: multiplicative_expression															{ $$ = $1; if(debug)printf(" l:99\n");}
	| additive_expression '+' multiplicative_expression 		{ $$ = newast('+', $1, $3); if(debug)printf(" l:100\n"); }
	| additive_expression '-' multiplicative_expression			{	$$ = newast('-', $1, $3); if(debug)printf(" l:101\n"); }
	;

shift_expression
	: additive_expression  																	{ if(debug)printf(" l:105\n"); }
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
	: assignment_expression {}
	| expression ',' assignment_expression {}
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
	: labeled_statement														{ $$ = $1; }
	| compound_statement													{ $$ = $1; }
	| expression_statement												{ $$ = $1; }
	| selection_statement													{ $$ = $1; }
	| iteration_statement													{ $$ = $1; }
	| jump_statement															{ $$ = $1; }
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'
	| '{' statement_list '}'											{ $$ = $2; }
	| '{' declaration_list '}'										{ $$ = $2; }
	| '{' declaration_list statement_list '}'			{ $$ = $2; }
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement																		{ $$ = $1; }
	| statement_list statement										{ $$ = $1; }
	;

expression_statement
	: ';'																					
	| expression ';'															{ $$ = $1; }
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
	: parse_tree																		
	| declaration
	;
	
parse_tree
	: function_definition { *astree = $1; }
	;
	
function_definition
	: declaration_specifiers declarator declaration_list compound_statement 	{ $$ = $4; }
	| declaration_specifiers declarator compound_statement										{ $$ = $3; }
	| declarator declaration_list compound_statement													{ $$ = $3; }
	| declarator compound_statement																						{ $$ = $2; }
	;
	
%%
#include <stdio.h>

//extern char yytext[];
extern int column;

int yyerror(struct ast **astree, char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}

double eval(struct ast *a, int node, int parent)
{
	FILE *fp;
	fp = fopen("file.dot", "a+");

  double v;  //calculated value of this subtree
	
  //if(!a) {
  //  yyerror("internal error, null eval");
  //  return 0.0;
  //}	
	
  switch(a->nodetype) {
			/* constant */
		case 'K': 
			v = a->value;
			//fprintf(fp, " %d -> %d;\n", parent, node);
			break;
			
			/* expressions */
		case '+':
			fprintf(fp, " %d [label=\"%c\"];\n", node, a->nodetype);			
			v = eval(a->l, 2*node, node) + eval(a->r, 2*node+1, node);
			fprintf(fp, " %d -> %d;\n", node, 2*node);
			fprintf(fp, " %d -> %d;\n", node, 2*node+1);
			break;
		case '-':
			v = eval(a->l, 2*node, node) - eval(a->r, 2*node+1, node);
			break;
		case '*':
			fprintf(fp, " %d [label=\"%c\"];\n", node, a->nodetype);					
			v = eval(a->l, 2*node, node) * eval(a->r, 2*node+1, node);
			fprintf(fp, " %d -> %d;\n", node, 2*node);
			fprintf(fp, " %d -> %d;\n", node, 2*node+1);
			break;
		case '/':
			v = eval(a->l, 2*node, node) / eval(a->r, 2*node+1, node);
			break;
		case '|':
			v = eval(a->l, 2*node, node); if(v < 0) v = -v;
			break;
		case 'M':
			v = -eval(a->l, 2*node, node);
			break;
		default:
			printf("internal error: bad node %c\n", a->nodetype);
  }
  return v;
	fclose(fp);
}


void write_node(struct ast *e, FILE *dotfile, int node, int parent){
	printf("NODE\n");
  fprintf(dotfile, " %d -> %d;\n", parent, node);
  write_tree(e, dotfile, node);
}

void write_tree(struct ast *e, FILE *dotfile, int node){
	printf("TREE\n");
	if (e->nodetype == 'K')
		fprintf(dotfile, " %d [label=\"%.2f\"];\n", node, e->value);
	else
		fprintf(dotfile, " %d [label=\"%c\"];\n", node, (char)e->nodetype);
  if (e->l != NULL)
		write_node(e->l, dotfile, 2*node, node);
  if (e->r != NULL)
		write_node(e->r, dotfile, 2*node+1, node);
}

void write_graphviz(struct ast *e){
  FILE *dotfile = fopen("file.dot", "w");
  fprintf(dotfile, "digraph tree {\n");
  write_tree(e, dotfile, 1);
  fprintf(dotfile, "}\n");
  fclose(dotfile);
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
	
	struct ast *astree;
	
	yyresult = yyparse(&astree);
	
	write_graphviz(astree);
	
	if (yyresult)
		fprintf(stdout,"\n\nErrors detected.\n");
	else
		fprintf(stdout,"\n\nNo errors detected.\n");

		
	exit(yyresult);
}

