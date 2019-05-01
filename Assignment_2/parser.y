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

int debug = 1;
extern char *yytext;
%}

%parse-param {struct ast **astree}

%union {
  struct ast *astree;
  double d;
	char *id;
}

%token <d> CONSTANT STRING_LITERAL SIZEOF
%token <id> IDENTIFIER
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
	: IDENTIFIER						{ $$ = newid($1); 						if(debug)printf(" line:46 (primary_expression : IDENTIFIER)\n"); }
	| CONSTANT							{ $$ = newnum($1);    				if(debug)printf(" line:47 (primary_expression : CONSTANT)\n"); }
	| STRING_LITERAL				{ $$ = newnum($1); 						if(debug)printf(" line:48 (primary_expression : STRING_LITERAL)\n"); }
	| '(' expression ')'		{ $$ = $2; 										if(debug)printf(" line:49 (primary_expression : '(' expression ')')\n"); }
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
	: assignment_expression																	{ if(debug)printf(" line:64 (argument_expression_list : assignment_expression)\n"); }
	| argument_expression_list ',' assignment_expression		{ if(debug)printf(" line:65 (argument_expression_list : argument_expression_list ',' assignment_expression)\n"); }
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
	: unary_expression																			{ if(debug)printf(" line:87 (cast_expression : unary_expression)\n"); }
	| '(' type_name ')' cast_expression  										{ if(debug)printf(" line:86 (cast_expression : '(' type_name ')' cast_expression)\n"); }
	;

multiplicative_expression
	: cast_expression																				{ $$ = $1; if(debug)printf(" line:92 (multiplicative_expression : cast_expression\n"); }
	| multiplicative_expression '*' cast_expression					{	$$ = newast('*', $1, $3); if(debug)printf(" line:93 (multiplicative_expression : multiplicative_expression '*' cast_expression\n"); }
	| multiplicative_expression '/' cast_expression					{	$$ = newast('/', $1, $3); if(debug)printf(" line:94 (multiplicative_expression : multiplicative_expression '/' cast_expression\n"); }
	| multiplicative_expression '%' cast_expression					{	$$ = newast('%', $1, $3); if(debug)printf(" line:95 (multiplicative_expression : multiplicative_expression 'prozent' cast_expression\n"); }
	;

additive_expression
	: multiplicative_expression															{ $$ = $1; if(debug)printf(" line:99 (additive_expression : multiplicative_expression\n");}
	| additive_expression '+' multiplicative_expression 		{ $$ = newast('+', $1, $3); if(debug)printf(" line:100 (additive_expression : additive_expression '+' multiplicative_expression\n"); }
	| additive_expression '-' multiplicative_expression			{	$$ = newast('-', $1, $3); if(debug)printf(" line:101 (additive_expression : additive_expression '-' multiplicative_expression\n"); }
	;

shift_expression
	: additive_expression  																	{ if(debug)printf(" line:105 (shift_expression : additive_expression)\n"); }
	| shift_expression LEFT_OP additive_expression					{ if(debug)printf(" line:106 (shift_expression : shift_expression LEFT_OP additive_expression)\n"); }
	| shift_expression RIGHT_OP additive_expression					{ if(debug)printf(" line:107 (shift_expression : shift_expression RIGHT_OP additive_expression)\n"); }
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
	: conditional_expression																					{ if(debug)printf(" line:155 (assignment_expression : conditional_expression)\n"); }
	| unary_expression assignment_operator assignment_expression			{ if(debug)printf(" line:156 (assignment_expression : unary_expression assignment_operator assignment_expression)\n"); }
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
	: assignment_expression 																{ if(debug)printf(" line:174 (expression : assignment_expression)\n"); }
	| expression ',' assignment_expression 									{ if(debug)printf(" line:175 (expression : expression ',' assignment_expression)\n"); }
	;																								

constant_expression                        
	: conditional_expression																{ if(debug)printf(" line:179 (constant_expression : conditional_expression)\n"); }
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
	: assignment_expression												{ if(debug)printf(" line:361 (initializer : assignment_expression)\n"); }
	| '{' initializer_list '}'										{ if(debug)printf(" line:362 (initializer : '{' initializer_list '}')\n"); }
	| '{' initializer_list ',' '}'								{ if(debug)printf(" line:363 (initializer : '{' initializer_list ',' '}')\n"); }
	;

initializer_list
	: initializer																	{ if(debug)printf(" line:367 (initializer_list : initializer)\n"); }
	| initializer_list ',' initializer						{ if(debug)printf(" line:368 (initializer_list : initializer_list ',' initializer)\n"); }
	;

statement
	: labeled_statement														{ $$ = $1; if(debug)printf(" line:372 (statement : labeled_statement)\n"); }
	| compound_statement													{ $$ = $1; if(debug)printf(" line:373 (statement : compound_statement)\n"); }
	| expression_statement												{ $$ = $1; if(debug)printf(" line:374 (statement : expression_statement)\n"); }
	| selection_statement													{ $$ = $1; if(debug)printf(" line:375 (statement : selection_statement)\n"); }
	| iteration_statement													{ $$ = $1; if(debug)printf(" line:376 (statement : iteration_statement)\n"); }
	| jump_statement															{ $$ = $1; if(debug)printf(" line:377 (statement : jump_statement)\n"); }
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE constant_expression ':' statement
	| DEFAULT ':' statement
	;

compound_statement
	: '{' '}'																			{					 if(debug)printf(" line:387 (compound_statement : '{' '}')\n"); }
	| '{' statement_list '}'											{ $$ = $2; if(debug)printf(" line:388 (compound_statement : '{' statement_list '}')\n"); }
	| '{' declaration_list '}'										{ $$ = $2; if(debug)printf(" line:389 (compound_statement : '{' declaration_list '}')\n"); }
	| '{' declaration_list statement_list '}'			{ $$ = $2; if(debug)printf(" line:390 (compound_statement : '{' declaration_list statement_list '}')\n"); }
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement																		{ $$ = $1; if(debug)printf(" line:399 (statement_list : statement)\n"); }
	| statement_list statement										{ $$ = newast(';', $1, $2); if(debug)printf(" line:400 (statement_list : statement_list statement)\n"); }
	;

expression_statement
	: ';'																					{					 if(debug)printf(" line:404 (expression_statement : ;)\n"); }
	| expression ';'															{ $$ = $1; if(debug)printf(" line:405 (expression_statement : expression ';')\n"); }
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
	: GOTO IDENTIFIER ';'																											{ 					if(debug)printf(" line:426 (jump_statement : GOTO IDENTIFIER ';')\n"); }
	| CONTINUE ';'																														{ 					if(debug)printf(" line:426 (jump_statement : CONTINUE ';')\n"); }
	| BREAK ';'																																{ 					if(debug)printf(" line:426 (jump_statement : BREAK ';')\n"); }
	| RETURN ';'																															{ 					if(debug)printf(" line:426 (jump_statement : RETURN ';')\n"); }
	| RETURN expression ';'																										{ $$ = $2;	if(debug)printf(" line:426 (jump_statement : RETURN expression ';')\n"); }
	;
	
translation_unit
	: external_declaration	                    															{ if(debug)printf(" line:430 (translation_unit : external_declaration)\n"); }
	| translation_unit external_declaration 																	{ if(debug)printf(" line:431 (translation_unit : translation_unit external_declaration)\n"); }
	;

external_declaration
	: parse_tree							 																								{ *astree = $1; if(debug)printf(" line:435 (external_declaration : parsetree)\n"); }
	;
	
parse_tree
	: function_definition 																										{ if(debug)printf(" line:439 (parse_tree : function_definition)\n"); }
	| declaration																															{ if(debug)printf(" line:440 (parse_tree : declaration)\n"); }
	;
	
function_definition
	: declaration_specifiers declarator declaration_list compound_statement 	{ $$ = $4; if(debug)printf(" line:444 (function_definition : declaration_specifiers declarator declaration_list compound_statement)\n"); }
	| declaration_specifiers declarator compound_statement										{ $$ = $3; if(debug)printf(" line:445 (function_definition : declaration_specifiers declarator compound_statement)\n"); }
	| declarator declaration_list compound_statement													{ $$ = $3; if(debug)printf(" line:446 (function_definition : declarator declaration_list compound_statement)\n"); }
	| declarator compound_statement																						{ $$ = $2; if(debug)printf(" line:447 (function_definition : declarator compound_statement)\n"); }
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

void write_node(struct ast *e, FILE *dotfile, int node, int parent){
	printf("NODE\n");
  fprintf(dotfile, " %d -> %d;\n", parent, node);
  write_tree(e, dotfile, node);
}

void write_tree(struct ast *e, FILE *dotfile, int node){
	printf("TREE\n");
	if (e->nodetype == 'K')
		fprintf(dotfile, " %d [label=\"%.2f\"];\n", node, e->d);
	else if (e->nodetype == 'I')
		fprintf(dotfile, " %d [label=\"%s\"];\n", node, e->id);
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
		
	if (yyresult)
		fprintf(stdout,"\n\nErrors detected.\n");
	else
		fprintf(stdout,"\n\nNo errors detected.\n");

	write_graphviz(astree);	

	exit(yyresult);
}

