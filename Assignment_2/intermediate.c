#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "intermediate.h"

extern int yyerror(char *s);


struct ast *newast(int nodetype, struct ast *l, struct ast *r)
{
  struct ast *a = malloc(sizeof(struct ast));
  
  if(!a) {
    yyerror("out of space");
    exit(0);
  }
  a->nodetype = nodetype;
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
  a->nodetype = 'K';
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
  a->id = "DUMMY";
	a->l = NULL;
	a->r = NULL;
	
  return a;
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