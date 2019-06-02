#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "intermediate.h"

extern int yyerror(char *s);

struct ast* memalloc(){
	struct ast *a = (struct ast *)malloc(sizeof(struct ast));
	if(!a) {
    yyerror("out of space");
    exit(0);
  }
	a->nodetype = 0;
  a->d = 0;
	for(int i = 0; i < 10; ++i)
		a->id[i] = '\0';
	a->l = NULL;
	a->r = NULL;
}

struct ast *newast(char *id, struct ast *l, struct ast *r)
{
  struct ast *a = memalloc();
  
  if(!a) {
    yyerror("out of space");
    exit(0);
  }
  strcpy(a->id, id);
  a->nodetype = 'D';
  a->l = l;
  a->r = r;

  return a;
}

struct ast *newnum(double d)
{
  struct ast *a = memalloc();
	 if(!a) {
    yyerror("out of space");
    exit(0);
  }
  a->nodetype = 'C';
  a->d = d;
	char str[20];
	sprintf(str,"%.2f", d);
	//strcpy(a->id, str);
	a->l = NULL;
	a->r = NULL;
	
  return a;
}

struct ast *newid(char *id)
{
  struct ast *a = memalloc();
	 if(!a) {
    yyerror("out of space");
    exit(0);
  }
  a->nodetype = 'I';
  strcpy(a->id, id);
	a->l = NULL;
	a->r = NULL;
	
  return a;
}

void write_node(struct ast *a, FILE *dotfile, int nodenum, int parentnum){
  fprintf(dotfile, " %d -> %d;\n", parentnum, nodenum);
  write_tree(a, dotfile, nodenum);
}

void write_tree(struct ast *a, FILE *dotfile, int nodenum){
	if (a->nodetype == 'C')
		if (ceilf(a->d) == a->d)
			fprintf(dotfile, " %d [label=\"%d\"];\n", nodenum, (int)a->d);
		else	
			fprintf(dotfile, " %d [label=\"%.2f\"];\n", nodenum, a->d);
	if (a->nodetype == 'I')
		if (a->id[0] == '\"') {
			int len = strlen(a->id);
			char temp[len+2];
			temp[0] = '\\';
			strcpy(&temp[1], a->id);
			temp[len - 2] = '\\';
			temp[len - 1] = '"';
			temp[len] = '\0';
			fprintf(dotfile, " %d [label=\"%s\"];\n", nodenum, temp);
		} else
			fprintf(dotfile, " %d [label=\"%s\"];\n", nodenum, a->id);
	if (a->nodetype == 'D'){
		fprintf(dotfile, " %d [label=\"%s\"];\n", nodenum, a->id);
	}
  if (a->l != NULL)
		write_node(a->l, dotfile, 2*nodenum, nodenum);
  if (a->r != NULL)
		write_node(a->r, dotfile, 2*nodenum+1, nodenum);
}

void generate_dot(struct ast *a){
  FILE *dotfile = fopen("test_function.dot", "w");
  fprintf(dotfile, "digraph tree {\n");
  write_tree(a, dotfile, 1);
  fprintf(dotfile, "}\n");
  fclose(dotfile);
}

void free_tree(struct ast *a)
{
		if (a == NULL) return;
		free_tree(a->l);
		free_tree(a->r);
		free(a);
}

void print_tree(struct ast *a)
{
	if (a == NULL) return;
	if (!strcmp(a->id, "STMTLIST")) {
		print_tree(a->l);
		print_tree(a->r);
	} else
	if (!strcmp(a->id, "DECL")) {
		print_tree(a->l);
		printf(" ");
		print_tree(a->r);
		printf(";\n");
	} else
	if (!strcmp(a->id, "()")) {
		print_tree(a->l);
		printf("(");
		print_tree(a->r);
		printf(")");
	} else		
	if (!strcmp(a->id, "[]")) {
		print_tree(a->l);
		printf("[");
		print_tree(a->r);
		printf("]");
	} else
	if (!strcmp(a->id, "FOR")) {
		printf("for(");
		print_tree(a->l->l->l);
		printf("; ");
		print_tree(a->l->l->r);
		printf("; ");
		print_tree(a->l->r);
		printf(")\n{\n");
		print_tree(a->r);		
		printf(";\n}\n");
	} else 
	if (!strcmp(a->id, "STMT")) {
		print_tree(a->l);
		printf(";\n");
		print_tree(a->r);
	} else {
		print_tree(a->l);
		if (a->nodetype == 'C')
			if (ceil(a->d) == a->d)
				printf("%d", (int)a->d);
			else
				printf("%f", a->d);
		else
			printf("%s", a->id);
		print_tree(a->r);
	}
}

void loop_interchange(struct ast *a){
	
	if (a == NULL) return;
	
	if (!strcmp(a->id, "FOR") && a->r != NULL && !strcmp(a->r->id, "FOR")) {
		struct ast *help = a->l;
		a->l = a->r->l;
		a->r->l = help;
	}
	loop_interchange(a->l);
	loop_interchange(a->r);
}

void replace(struct ast *a, char* id, char* replacement) {
	if (a == NULL) return;
	
	// If the loop variable has been identified replace it with the transformation statement.
	if (!strcmp(a->id, id)) {
		strcpy(a->id, replacement);
	}
	replace(a->l, id, replacement);
	replace(a->r, id, replacement);
}

void loop_normalization(struct ast *a){
	
	if (a == NULL) return;
	
	loop_normalization(a->l);
	loop_normalization(a->r);	
	
	if (!strcmp(a->id, "FOR") && a->l != NULL && a->l->l != NULL && a->l->l->l != NULL) {
		
		// get the l, u and s values that will be transformed.
		int l = a->l->l->l->r->d;
		int u = a->l->l->r->r->d;
		int s = !strcmp(a->l->r->id, "++") ? 1 : (int)a->l->r->r->r->d;
		
		// Calculate the length of the string (%l+(%i-1)*%s)
		int len1 = 2*strlen(a->l->l->l->l->id) + 11 +	// "i"
							strlen(a->l->l->l->r->id) + 				// "l"
							floor(log10(abs(s))) + 1;						// "s"

		// Calculate the length of the string %i=%l+(%i-1)*%s;\n
		int len2 = strlen(a->l->l->l->l->id) + 9 +		// "i"
							strlen(a->l->l->l->r->id) + 				// "l"
							floor(log10(abs(s))) + 1;						// "s"

		char outside_correction[len1];
		char inside_correction[len2];


		// Generate the transformation statement that replaces the loop variable inside the loop.
		sprintf(inside_correction, "(%d+(%s-1)*%d)", l, a->l->l->l->l->id, s);
		
		// Call recursive function that replaces the loop variable inide the loop.
		replace(a->r, a->l->l->l->l->id, inside_correction);
		
		// Generate the back-transformation statement for the loop variable after the loop.
		sprintf(outside_correction, "%s=%d+(%s-1)*%d;\n", a->l->l->l->l->id, l, a->l->l->l->l->id, s);
		
		// Normalize start value
		a->l->l->l->r->d = 1;
		// Normalize upper bound
		a->l->l->r->r->d = (u - l + s) / s;
		
		// Check if the ++ shortcut statement was used and set the stepsize to 1 otherwise.
		if (strcmp(a->l->r->id, "++")) {
			a->l->r->r->r->d = 1;
		}
		
		// Make the current node the "STMT" node and create and connect a new "FOR" node.
		strcpy(a->id, "STMT");
		a->l = newast("FOR", a->l, a->r);
		a->r = newid(outside_correction);

	}

}
