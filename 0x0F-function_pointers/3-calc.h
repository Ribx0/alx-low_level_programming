#ifndef CALC_H
#define CALC_H
/**
 * struct op - A struct op.
 * @p: The operator.
 * @r: The associated function.
 */
typedef struct op
{
	char *p;
	int (*r)(int m, int n);
} op_t;

int op_add(int m, int n);
int op_sub(int m, int n);
int op_mul(int m, int n);
int op_div(int m, int n);
int op_mod(int m, int n);
int (*get_op_func(char *m))(int, int);

#endif
