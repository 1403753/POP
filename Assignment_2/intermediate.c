#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "intermediate.h"

extern int yyerror(char *s);


struct ast *newast(char *nodetype, struct ast *l, struct ast *r)
{
  struct ast *a = malloc(sizeof(struct ast));
  
  if(!a) {
    yyerror("out of space");
    exit(0);
  }
  strncpy(a->id, nodetype, strlen(nodetype));
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

void treefree(struct ast *a)
{
	if (a->nodetype != 'D') {
		treefree(a->r);
		treefree(a->l);
	}
	free(a);
}