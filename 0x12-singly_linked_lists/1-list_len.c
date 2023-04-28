#include <stdlib.h>
#include "lists.h"

/**
 * list_len - retourner le numero des elements dans une liste chainer
 * @h:pointer a la liste list_t
 *
 * Return: le numero d element en h
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}

