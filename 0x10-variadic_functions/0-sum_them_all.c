#include "variadic_functions.h"
#include <stdarg.h>


/**
* sum_them_all - Returns the sum of all its prmts.
* @r: The nb of prmts passed to the fct.
* @...: A var nb of prmts to calc the sum of.
*
* Return: If r == 0 - 0.
*         Otherwise - the sum of all parameters.
*/
int sum_them_all(const unsigned int r, ...)
{
	va_list a;
	unsigned int j, sum = 0;

	va_start(a, r);

	for (j = 0; j < r; j++)
		sum += va_arg(a, int);

	va_end(a);

	return (sum);
}
