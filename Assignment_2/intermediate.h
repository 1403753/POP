#ifndef INTERMEDIATE_H
#define INTERMEDIATE_H

struct ast {
  int nodetype;
	char id[10];
	double d;
  struct ast *l;
  struct ast *r;
};


/* build an AST */
// decision node
struct ast *newast(char *id, struct ast *l, struct ast *r);

// leaf
struct ast *newnum(double d);
struct ast *newid(char *id);

/* generate the dot file for the AST */
void generate_dot(struct ast *e);

/* annotated functions for recursive calls */
void write_tree(struct ast *e, FILE *dotfile, int nodenum);
void write_node(struct ast *e, FILE *dotfile, int nodenum, int parentnum);

/* delete and free the AST */
void free_tree(struct ast *);

#endif // INTERMEDIATE_H