#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using ptr to fct
 * @name: str to add
 * @r: ptr to fct
 * Return: nothing
 **/
void print_name(char *name, void (*r)(char *))
{
	if (name == NULL || r == NULL)
		return;

	r(name);
}
