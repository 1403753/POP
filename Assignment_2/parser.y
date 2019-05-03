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
//extern char *yytext;
%}

%parse-param {struct ast **astree}

%union {
  struct ast *astree;
  double d;
	char *id;
}

%token <d> CONSTANT 
%token <id> IDENTIFIER STRING_LITERAL SIZEOF

%token <id> PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token <id> AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token <id> SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token <id> XOR_ASSIGN OR_ASSIGN TYPE_NAME
%token <id> TYPEDEF EXTERN STATIC AUTO REGISTER
%token <id> CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token <id> STRUCT UNION ENUM ELLIPSIS

%token <id> CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN

%type <id> '&' '*' '+' '-' '~' '!'

%type <astree> primary_expression additive_expression multiplicative_expression assignment_expression
%type <astree> cast_expression expression unary_expression postfix_expression function_definition
%type <astree> statement parse_tree compound_statement expression_statement labeled_statement
%type <astree> selection_statement iteration_statement jump_statement statement_list declaration_list
%type <astree> translation_unit external_declaration shift_expression relational_expression
%type <astree> initializer_list initializer type_name unary_operator argument_expression_list 
%type <astree> specifier_qualifier_list type_specifier struct_or_union_specifier enum_specifier
%type <astree> struct_declaration_list struct_declaration struct_or_union type_qualifier enumerator_list
%type <astree> enumerator constant_expression declaration declaration_specifiers storage_class_specifier
%type <astree> declarator pointer direct_declarator init_declarator type_qualifier_list equality_expression


%start translation_unit

%%

primary_expression
	: IDENTIFIER						{ $$ = newid($1); 						if(debug)printf(" --primary_expression : IDENTIFIER\n"); }
	| CONSTANT							{ $$ = newnum($1);    				if(debug)printf(" --primary_expression : CONSTANT\n"); }
	| STRING_LITERAL				{ $$ = newid($1); 						if(debug)printf(" --primary_expression : STRING_LITERAL\n"); }
	| '(' expression ')'		{ $$ = $2; 										if(debug)printf(" --primary_expression : '(' expression ')'\n"); }
	;

postfix_expression 
	: primary_expression 																		{ if(debug)printf(" --postfix_expression : primary_expression\n"); }
	| postfix_expression '[' expression ']'
	| postfix_expression '(' ')'
	| postfix_expression '(' argument_expression_list ')'
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

argument_expression_list
	: assignment_expression																	{ if(debug)printf(" --argument_expression_list : assignment_expression\n"); }
	| argument_expression_list ',' assignment_expression		{ $$ = newast(",", $1, $3); if(debug)printf(" --argument_expression_list : argument_expression_list ',' assignment_expression\n"); }
	;

unary_expression
	: postfix_expression   																	{ $$ = $1; if(debug)printf(" --unary_expression : postfix_expression\n"); }
	| INC_OP unary_expression																{ $$ = $2; if(debug)printf(" --unary_expression : INC_OP unary_expression\n"); }
	| DEC_OP unary_expression																{ $$ = $2; if(debug)printf(" --unary_expression : DEC_OP unary_expression\n"); }
	| unary_operator cast_expression												{ $$ = newast("unary/cast", $1, $2); }
	| SIZEOF unary_expression																{ $$ = $2; if(debug)printf(" --unary_expression : SIZEOF unary_expression\n");}
	| SIZEOF '(' type_name ')'															{ $$ = $3; if(debug)printf(" --unary_expression : SIZEOF '(' type_name ')'\n");}
	;

unary_operator
	: '&'																										{ $$ = newid($1); }
	| '*'																										{ $$ = newid($1); }
	| '+'																										{ $$ = newid($1); }
	| '-'																										{ $$ = newid($1); }
	| '~'																										{ $$ = newid($1); }
	| '!'																										{ $$ = newid($1); }
	;

cast_expression
	: unary_expression																			{ $$ = $1; if(debug)printf(" --cast_expression : unary_expression\n"); }
	| '(' type_name ')' cast_expression  										{ if(debug)printf(" --cast_expression : '(' type_name ')' cast_expression\n"); }
	;

multiplicative_expression
	: cast_expression																				{ $$ = $1; if(debug)printf(" --multiplicative_expression : cast_expression\n"); }
	| multiplicative_expression '*' cast_expression					{	$$ = newast("*", $1, $3); if(debug)printf(" --multiplicative_expression : multiplicative_expression '*' cast_expression\n"); }
	| multiplicative_expression '/' cast_expression					{	$$ = newast("/", $1, $3); if(debug)printf(" --multiplicative_expression : multiplicative_expression '/' cast_expression\n"); }
	| multiplicative_expression '%' cast_expression					{	$$ = newast("%", $1, $3); if(debug)printf(" --multiplicative_expression : multiplicative_expression 'prozent' cast_expression\n"); }
	;

additive_expression
	: multiplicative_expression															{ $$ = $1; if(debug)printf(" --additive_expression : multiplicative_expression\n");}
	| additive_expression '+' multiplicative_expression 		{ $$ = newast("+", $1, $3); if(debug)printf(" --additive_expression : additive_expression '+' multiplicative_expression\n"); }
	| additive_expression '-' multiplicative_expression			{	$$ = newast("-", $1, $3); if(debug)printf(" --additive_expression : additive_expression '-' multiplicative_expression\n"); }
	;

shift_expression
	: additive_expression  																	{ if(debug)printf(" --shift_expression : additive_expression\n"); }
	| shift_expression LEFT_OP additive_expression					{ if(debug)printf(" --shift_expression : shift_expression LEFT_OP additive_expression\n"); }
	| shift_expression RIGHT_OP additive_expression					{ if(debug)printf(" --shift_expression : shift_expression RIGHT_OP additive_expression\n"); }
	;

relational_expression																					
	: shift_expression																			{														if(debug)printf(" --relational_expression : shift_expression\n"); }
	| relational_expression '<' shift_expression						{ $$ = newast("<", $1, $3); if(debug)printf(" --relational_expression : relational_expression '<' shift_expression\n"); }
	| relational_expression '>' shift_expression						{ $$ = newast(">", $1, $3); if(debug)printf(" --relational_expression : relational_expression '>' shift_expression\n"); }
	| relational_expression LE_OP shift_expression					{ $$ = newast("<=", $1, $3); if(debug)printf(" --relational_expression : relational_expression LE_OP shift_expression\n"); }
	| relational_expression GE_OP shift_expression					{ $$ = newast(">=", $1, $3); if(debug)printf(" --relational_expression : relational_expression GE_OP shift_expression\n"); }
	;

equality_expression
	: relational_expression																	{														if(debug)printf(" --equality_expression : relational_expression\n"); }
	| equality_expression EQ_OP relational_expression				{ $$ = newast("==", $1, $3); }
	| equality_expression NE_OP relational_expression				{ $$ = newast("!=", $1, $3); }
	;

and_expression
	: equality_expression																		{														if(debug)printf(" --and_expression : equality_expression\n"); }
	| and_expression '&' equality_expression
	;

exclusive_or_expression
	: and_expression																				{														if(debug)printf(" --exclusive_or_expression : and_expression\n"); }
	| exclusive_or_expression '^' and_expression
	;

inclusive_or_expression
	: exclusive_or_expression																{														if(debug)printf(" --inclusive_or_expression : exclusive_or_expression\n"); }
	| inclusive_or_expression '|' exclusive_or_expression
	;

logical_and_expression
	: inclusive_or_expression																{														if(debug)printf(" --logical_and_expression : inclusive_or_expression\n"); }
	| logical_and_expression AND_OP inclusive_or_expression
	;

logical_or_expression
	: logical_and_expression																{														if(debug)printf(" --logical_or_expression : logical_and_expression\n"); }
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression																	{														if(debug)printf(" --conditional_expression : logical_or_expression\n"); }
	| logical_or_expression '?' expression ':' conditional_expression
	;

assignment_expression
	: conditional_expression																					{ if(debug)printf(" --assignment_expression : conditional_expression\n"); }
	| unary_expression assignment_operator assignment_expression			{ if(debug)printf(" --assignment_expression : unary_expression assignment_operator assignment_expression\n"); }
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
	: assignment_expression 																{ if(debug)printf(" --expression : assignment_expression\n"); }
	| expression ',' assignment_expression 									{ $$ = newast(",", $1, $3);	if(debug)printf(" --expression : expression ',' assignment_expression\n"); }
	;																								

constant_expression                        
	: conditional_expression																{ if(debug)printf(" --constant_expression : conditional_expression\n"); }
	;

declaration
	: declaration_specifiers ';'														{ if(debug)printf(" --declaration : declaration_specifiers ';'\n"); }
	| declaration_specifiers init_declarator_list ';'				{ if(debug)printf(" --declaration : declaration_specifiers init_declarator_list ';'\n"); }
	;

declaration_specifiers
	: storage_class_specifier																{ if(debug)printf(" --declaration_specifiers : storage_class_specifier\n"); }
	| storage_class_specifier declaration_specifiers				{ if(debug)printf(" --declaration_specifiers : storage_class_specifier declaration_specifiers\n"); }
	| type_specifier																				{ if(debug)printf(" --declaration_specifiers : type_specifier\n"); }
	| type_specifier declaration_specifiers									{ if(debug)printf(" --declaration_specifiers : type_specifier declaration_specifiers\n"); }
	| type_qualifier																				{ if(debug)printf(" --declaration_specifiers : type_qualifier\n"); }
	| type_qualifier declaration_specifiers									{ if(debug)printf(" --declaration_specifiers : type_qualifier declaration_specifiers\n"); }
	;

init_declarator_list
	: init_declarator
	| init_declarator_list ',' init_declarator
	;

init_declarator
	: declarator												{ $$ = $1; }
	| declarator '=' initializer				{ $$ = newast("=", $1, $3); }
	;

storage_class_specifier
	: TYPEDEF														{ $$ = newid("TYPEDEF"); }
	| EXTERN														{ $$ = newid("EXTERN"); }
	| STATIC														{ $$ = newid("STATIC"); }
	| AUTO															{ $$ = newid("AUTO"); }
	| REGISTER													{ $$ = newid("REGISTER"); }
	;

type_specifier
	: VOID															{ $$ = newid("VOID"); if(debug)printf(" --type_specifier : VOID\n"); }
	| CHAR															{ $$ = newid("CHAR"); if(debug)printf(" --type_specifier : CHAR\n"); }
	| SHORT															{ $$ = newid("SHORT"); if(debug)printf(" --type_specifier : SHORT\n"); }
	| INT																{ $$ = newid("INT"); if(debug)printf(" --type_specifier : INT\n"); }
	| LONG															{ $$ = newid("LONG"); if(debug)printf(" --type_specifier : LONG\n"); }
	| FLOAT															{ $$ = newid("FLOAT"); if(debug)printf(" --type_specifier : FLOAT\n"); }
	| DOUBLE														{ $$ = newid("DOUBLE"); if(debug)printf(" --type_specifier : DOUBLE\n"); }
	| SIGNED														{ $$ = newid("SIGNED"); if(debug)printf(" --type_specifier : SIGNED\n"); }
	| UNSIGNED													{ $$ = newid("UNSIGNED"); if(debug)printf(" --type_specifier : UNSIGNED\n"); }
	| struct_or_union_specifier					{ $$ = $1; if(debug)printf(" --type_specifier : struct_or_union_specifier\n"); }
	| enum_specifier										{ $$ = $1; if(debug)printf(" --type_specifier : enum_specifier\n"); }
	| TYPE_NAME													{ $$ = newid("TYPE_NAME"); if(debug)printf(" --type_specifier : TYPE_NAME\n"); }
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT														{ $$ = newid("STRUCT"); }
	| UNION															{ $$ = newid("UNION"); }
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
	: ENUM '{' enumerator_list '}'										{ $$ = $3; }
	| ENUM IDENTIFIER '{' enumerator_list '}'					{	$$ = $4; }
	| ENUM IDENTIFIER																	{					 }
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER																			{ $$ = newid($1); }
	| IDENTIFIER '=' constant_expression							{ $$ = newast("=", newid($1), $3); }
	;

type_qualifier
	: CONST																						{ $$ = newid("CONST"); }
	| VOLATILE																				{ $$ = newid("VOLATILE"); }
	;

declarator
	: pointer direct_declarator												{ if(debug)printf(" --declarator : pointer direct_declarator\n"); }
	| direct_declarator																{ if(debug)printf(" --declarator : direct_declarator\n"); }
	;

direct_declarator
	: IDENTIFIER																			{ $$ = newid($1); if(debug)printf(" --direct_declarator : IDENTIFIER\n"); }
	| '(' declarator ')'															{ $$ = $2; }
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' identifier_list ')'
	| direct_declarator '(' ')'
	;

pointer
	: '*'																							{ $$ = newid("*"); }
	| '*' type_qualifier_list													{ $$ = $2; }
	| '*' pointer																			{ $$ = $2; }
	| '*' type_qualifier_list pointer									{ $$ = $2; }
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
	: assignment_expression												{ if(debug)printf(" --initializer : assignment_expression\n"); }
	| '{' initializer_list '}'										{ if(debug)printf(" --initializer : '{' initializer_list '}'\n"); }
	| '{' initializer_list ',' '}'								{ if(debug)printf(" --initializer : '{' initializer_list ',' '}'\n"); }
	;

initializer_list
	: initializer																	{ if(debug)printf(" --initializer_list : initializer\n"); }
	| initializer_list ',' initializer						{ $$ = newast(",", $1, $3);  if(debug)printf(" --initializer_list : initializer_list ',' initializer\n"); }
	;

statement
	: labeled_statement														{ $$ = $1; if(debug)printf(" --statement : labeled_statement\n"); }
	| compound_statement													{ $$ = $1; if(debug)printf(" --statement : compound_statement\n"); }
	| expression_statement												{ $$ = $1; if(debug)printf(" --statement : expression_statement\n"); }
	| selection_statement													{ $$ = $1; if(debug)printf(" --statement : selection_statement\n"); }
	| iteration_statement													{ $$ = $1; if(debug)printf(" --statement : iteration_statement\n"); }
	| jump_statement															{ $$ = $1; if(debug)printf(" --statement : jump_statement\n"); }
	;

labeled_statement
	: IDENTIFIER ':' statement										{ $$ = $3; }
	| CASE constant_expression ':' statement			{ $$ = newast("CASE:", $2, $4); }
	| DEFAULT ':' statement												{ $$ = newast("DEFAULT:", $3, NULL); }
	;

compound_statement
	: '{' '}'																			{														if(debug)printf(" --compound_statement : '{' '}'\n"); }
	| '{' statement_list '}'											{	$$=$2; 										if(debug)printf(" --compound_statement : '{' statement_list '}'\n"); }
	| '{' declaration_list '}'										{ $$=$2; 										if(debug)printf(" --compound_statement : '{' declaration_list '}'\n"); }
	| '{' declaration_list statement_list '}'			{ $$ = newast("STMTLIST", $2, $3); if(debug)printf(" --compound_statement : '{' declaration_list statement_list '}'\n"); }
	;

declaration_list
	: declaration
	| declaration_list declaration
	;

statement_list
	: statement																		{ $$ = $1; if(debug)printf(" --statement_list : statement\n"); }
	| statement_list statement										{ $$ = newast("STMT", $1, $2); if(debug)printf(" --statement_list : statement_list statement\n"); }
	;

expression_statement
	: ';'																					{	$$ = newid(";");	if(debug)printf(" --expression_statement : ;\n"); }
	| expression ';'															{	$$ = $1;					if(debug)printf(" --expression_statement : expression ';'\n"); }
	;

selection_statement
	: IF '(' expression ')' statement											{ $$ = newast("IF", $3, $5); }
	| IF '(' expression ')' statement ELSE statement			{ $$ = newast("IF", $3, newast("<-IF | ELSE->", $5, $7)); }
	| SWITCH '(' expression ')' statement									{ $$ = newast("SWITCH", $3, $5); }
	;

iteration_statement
	: WHILE '(' expression ')' statement																					{ $$ = newast("WHILE", $3, $5); if(debug)printf(" --iteration_statement : WHILE '(' expression ')' statement\n"); }
	| DO statement WHILE '(' expression ')' ';'																		{ $$ = newast("DOWHILE", $2, $5); if(debug)printf(" --iteration_statement : DO statement WHILE '(' expression ')' ';'\n"); }
	| FOR '(' expression_statement expression_statement ')' statement							{ $$ = newast("FOR", $4, $6); if(debug)printf(" --iteration_statement : FOR '(' expression_statement expression_statement ')' statement\n"); }
	| FOR '(' expression_statement expression_statement expression ')' statement	{ $$ = newast("FOR", $4, $7); if(debug)printf(" --iteration_statement : FOR '(' expression_statement expression_statement expression ')' statement\n"); }
	;

jump_statement
	: GOTO IDENTIFIER ';'																											{ 					if(debug)printf(" --jump_statement : GOTO IDENTIFIER ';'\n"); }
	| CONTINUE ';'																														{ $$ = newid("CONTINUE");	if(debug)printf(" --jump_statement : CONTINUE ';'\n"); }
	| BREAK ';'																																{ $$ = newid("BREAK");	if(debug)printf(" --jump_statement : BREAK ';'\n"); }
	| RETURN ';'																															{ $$ = newid("RETURN");	if(debug)printf(" --jump_statement : RETURN ';'\n"); }
	| RETURN expression ';'																										{ $$ = $2;	if(debug)printf(" --jump_statement : RETURN expression ';'\n"); }
	;
	
translation_unit
	: external_declaration	                    															{ if(debug)printf(" --translation_unit : external_declaration\n"); }
	| translation_unit external_declaration 																	{ $$ = newast(";", $1, $2); if(debug)printf(" --translation_unit : translation_unit external_declaration\n"); }
	;

external_declaration
	: parse_tree							 																								{ *astree = $1; if(debug)printf(" --external_declaration : parse_tree\n"); }
	;
	
parse_tree
	: function_definition 																										{ if(debug)printf(" --parse_tree : function_definition\n"); }
	| declaration																															{ if(debug)printf(" --parse_tree : declaration\n"); }
	;
	
function_definition
	: declaration_specifiers declarator declaration_list compound_statement 	{ $$ = $4; if(debug)printf(" --function_definition : declaration_specifiers declarator declaration_list compound_statement\n"); }
	| declaration_specifiers declarator compound_statement										{ $$ = $3; if(debug)printf(" --function_definition : declaration_specifiers declarator compound_statement\n"); }
	| declarator declaration_list compound_statement													{ $$ = $3; if(debug)printf(" --function_definition : declarator declaration_list compound_statement\n"); }
	| declarator compound_statement																						{ $$ = $2; if(debug)printf(" --function_definition : declarator compound_statement\n"); }
	;
	
%%
#include <stdio.h>

extern int column;

int yyerror(struct ast **astree, char *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
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
				
				case 'd':
					debug = 1;
					break;
					
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
		
	if (yyresult) {
		fprintf(stdout,"\n\nErrors detected.\n");
		exit(yyresult);
	} else
		fprintf(stdout,"\n\nNo errors detected.\n");

	generate_dot(astree);	

	free_tree(astree);
	
	exit(yyresult);
}

