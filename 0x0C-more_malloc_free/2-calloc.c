#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: nbr of times to cpy b
 *
 * Return: ptr to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elmts in the array
 * @size: sz of each elmt
 *
 * Return: ptr to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;

	if (nmemb == 0 || size == 0)
		return (NULL);

	q = malloc(size * nmemb);

	if (q == NULL)
		return (NULL);

	_memset(q, 0, nmemb * size);

	return (q);
}
