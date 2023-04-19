#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct fct to perform
 *               the oprt asked by the user.
 * @s: The op passed as arg.
 *
 * Return: A ptr to the fct corresponding
 *         to the optr given as a prmt.
 */
int (*get_op_func(char *m))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int l = 0;

	while (ops[l].p != NULL && *(ops[l].p) != *m)
		l++;

	return (ops[l].r);
}

