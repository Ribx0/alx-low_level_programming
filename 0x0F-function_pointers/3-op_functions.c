#include "3-calc.h"

int op_add(int m, int n);
int op_sub(int m, int n);
int op_mul(int m, int n);
int op_div(int m, int n);
int op_mod(int m, int n);

/**
 * op_add - Returns the sum of two numbers.
 * @m: The first nb.
 * @n: The second nb.
 *
 * Return: The sum of m and n.
 */
int op_add(int m, int n)
{
	return (m + n);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @m: The first nb.
 * @n: The second nb.
 *
 * Return: The difference of m and n.
 */
int op_sub(int m, int n)
{
	return (m - n);
}
/**
 * op_mul - Returns the product of 2 nbs.
 * @m: The first nb.
 * @n: The second nb.
 *
 * Return: The product of m and n.
 */
int op_mul(int m, int n)
{
	return (m * n);
}
/**
 * op_div - Returns the division of 2 nbs.
 * @m: The first nb.
 * @n: The second nb.
 *
 * Return: The quotient of m and n.
 */
int op_div(int m, int n)
{
	return (m / n);
}
/**
 * op_mod - Returns the remainder of the division of 2 nbs.
 * @m: The first nb.
 * @n: The second nb.
 *
 * Return: The remainder of the division of m by n.
 */
int op_mod(int m, int n)
{
	return (m % n);
}
