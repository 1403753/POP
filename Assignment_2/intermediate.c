#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "intermediate.h"

extern int yyerror(char *s);

struct ast *newast(char *id, struct ast *l, struct ast *r)
{
  struct ast *a = malloc(sizeof(struct ast));
  
  if(!a) {
    yyerror("out of space");
    exit(0);
  }
  strncpy(a->id, id, strlen(id));
  a->nodetype = 'D';
  a->l = l;
  a->r = r;

  return a;
}

struct ast *newnum(double d)
{
  struct ast *a = malloc(sizeof(struct ast));
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
  struct ast *a = malloc(sizeof(struct ast));
	 if(!a) {
    yyerror("out of space");
    exit(0);
  }
  a->nodetype = 'I';
  strncpy(a->id, id, strlen(id));
	a->l = NULL;
	a->r = NULL;
	
  return a;
}

void write_node(struct ast *e, FILE *dotfile, int nodenum, int parentnum){
  fprintf(dotfile, " %d -> %d;\n", parentnum, nodenum);
  write_tree(e, dotfile, nodenum);
}

void write_tree(struct ast *e, FILE *dotfile, int nodenum){
	if (e->nodetype == 'C')
		fprintf(dotfile, " %d [label=\"%.2f\"];\n", nodenum, e->d);
	else if (e->nodetype == 'I')
		fprintf(dotfile, " %d [label=\"%s\"];\n", nodenum, e->id);
	else if (e->nodetype == 'D')
		fprintf(dotfile, " %d [label=\"%s\"];\n", nodenum, e->id);
		
  if (e->l != NULL)
		write_node(e->l, dotfile, 2*nodenum, nodenum);
  if (e->r != NULL)
		write_node(e->r, dotfile, 2*nodenum+1, nodenum);
}

void generate_dot(struct ast *e){
  FILE *dotfile = fopen("test_function.dot", "w");
  fprintf(dotfile, "digraph tree {\n");
  write_tree(e, dotfile, 1);
  fprintf(dotfile, "}\n");
  fclose(dotfile);
}

void free_tree(struct ast *a)
{
	if (a->nodetype != 'D') {
		free_tree(a->r);
		free_tree(a->l);
	}
	free(a);
}