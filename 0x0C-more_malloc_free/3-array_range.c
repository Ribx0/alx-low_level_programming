#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of ints
 * @min: min range of vls stored
 * @max: max range of vls stored & nb of elmts
 *
 * Return: ptr to the new array
 */
int *array_range(int min, int max)
{
	int *p;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		p[k] = min++;

	return (p);
}


