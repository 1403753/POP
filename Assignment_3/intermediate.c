#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
		fprintf(dotfile, " %d [label=\"%.2f\"];\n", nodenum, a->d);
	if (a->nodetype == 'I')
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