#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strgs, followed by a new line.
* @sept: The strg to be printed between strgs.
* @r: The nbr of strs passed to the fct.
* @...: A var nbr of strgs to be printed.
*
* Description: If separator is NULL, it is not printed.
*        If one of the strings if NULL, (nil) is printed instead.
*/
	void print_strings(const char *sept, const unsigned int r, ...)
	{
		va_list strgs;
		char *st;
		unsigned int id;


		va_start(strgs, r);


		for (id = 0; id < r; id++)
		{
			st = va_arg(strgs, char *);


			if (st == NULL)
				printf("(nil)");
			else
				printf("%s", st);


			if (id != (r - 1) && sept != NULL)
				printf("%s", sept);
		}


		printf("\n");


		va_end(strgs);
	}
