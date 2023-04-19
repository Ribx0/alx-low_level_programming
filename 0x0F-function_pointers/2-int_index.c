#include "function_pointers.h"
/**
 * int_index - return index place if comparison = true, else -1
 * @arr: array
 * @sze: size of elemts in array
 * @cp: ptr to fct of one of the 3 in main
 * Return: 0
 */
int int_index(int *arr, int sze, int (*cp)(int))
{
	int l;

	if (arr == NULL || sze <= 0 || cp == NULL)
		return (-1);

	for (l = 0; l < sze; l++)
	{
		if (cp(arr[l]))
			return (l);
	}
	return (-1);
}
