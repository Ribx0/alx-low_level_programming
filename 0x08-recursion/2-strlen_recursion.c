#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longit1 = 0;

	if (*s)
	{
		longit1++;
		longit1 += _strlen_recursions(s + 1);
	}
	return (longit1);
}
