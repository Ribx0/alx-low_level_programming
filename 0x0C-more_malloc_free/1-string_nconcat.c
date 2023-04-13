#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a st to another st
 * @s1: str to append to
 * @s2: str to concatenate from
 * @n: nb of bytes from s2 to concatenate to s1
 *
 * Return: ptr to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = 0, j = 0, le1 = 0, le2 = 0;

	while (s1 && s1[le1])
		le1++;
	while (s2 && s2[le2])
		le2++;

	if (n < le2)
		c = malloc(sizeof(char) * (le1 + n + 1));
	else
		c = malloc(sizeof(char) * (le1 + le2 + 1));

	if (!c)
		return (NULL);

	while (i < le1)
	{
		c[i] = s1[i];
		i++;
	}

	while (n < le2 && i < (le1 + n))
		c[i++] = s2[j++];

	while (n >= le2 && i < (le1 + le2))
		c[i++] = s2[j++];

	c[i] = '\0';

	return (c);
}
