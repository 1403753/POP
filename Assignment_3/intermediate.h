#ifndef INTERMEDIATE_H
#define INTERMEDIATE_H

struct ast {
  int nodetype;
	char id[50];
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
void generate_dot(struct ast *a);

/* annotated functions for recursive calls */
void write_tree(struct ast *a, FILE *dotfile, int nodenum);
void write_node(struct ast *a, FILE *dotfile, int nodenum, int parentnum);

/* delete and free the AST */
void free_tree(struct ast *);

void print_tree(struct ast *a);

void loop_interchange(struct ast *a);
void loop_normalization(struct ast *a);

#endif // INTERMEDIATE_H