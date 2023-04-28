#include <stdlib.h>
#include "lists.h"

/**
 * free_list - liberer les linked lists
 * @head: list_t liste va etre liberer
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head)
	{
		tp = head->next;
		free(head->str);
		free(head);
		head = tp;
	}
}
