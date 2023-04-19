#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @arr: array
 * @sze: how many element to print
 * @act: ptr to print in regular or hex
 * Return: void
 */
void array_iterator(int *arr, size_t sze, void (*act)(int))
{
	unsigned int l;

	if (arr == NULL || act == NULL)
		return;

	for (l = 0; l < sze; l++)
	{
		act(arr[l]);
	}
}
