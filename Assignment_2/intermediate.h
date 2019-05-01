#ifndef INTERMEDIATE_H
#define INTERMEDIATE_H

struct ast {
  int nodetype;
	double d;
	char *id;
  struct ast *l;
  struct ast *r;
};


/* build an AST */
// decision node
struct ast *newast(int nodetype, struct ast *l, struct ast *r);

// leaf
struct ast *newnum(double d);
struct ast *newid(char *id);

/* evaluate an AST */
double eval(struct ast *e, int node, int parent);

void write_graphviz(struct ast *e);
void write_tree(struct ast *e, FILE *dotfile, int node);

/* delete and free an AST */
void treefree(struct ast *);

#endif // INTERMEDIATE_H


