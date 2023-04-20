#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - Prints nbrs, followed by a new line.
* @sept: The str to be printed between nbrs.
* @r: The nbr of ints passed to the fct.
* @...: A variable nbr of nbrs to be printed.
*/
void print_numbers(const char *sept, const unsigned int r, ...)
{
	va_list nbs;
	unsigned int indx;

	va_start(nbs, r);

	for (indx = 0; indx < r; indx++)
	{
		printf("%d", va_arg(nbs, int));

		if (indx != (r - 1) && sept != NULL)
			printf("%s", sept);
	}


	printf("\n");

	va_end(nbs);
}
