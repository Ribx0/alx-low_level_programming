#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
* @format: list of types of argts passed to the fction
*/
void print_all(const char * const format, ...)
{
	int l = 0;
	char *strg, *sept = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[l])
		{
			switch (format[l])
			{
				case 'c':
					printf("%s%c", sept, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sept, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sept, va_arg(ls, double));
					break;
				case 's':
					strg = va_arg(ls, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", sept, strg);
					break;
				default:
					l++;
					continue;
			}
			sept = ", ";
			l++;
		}
	}


	printf("\n");
	va_end(ls);
}
