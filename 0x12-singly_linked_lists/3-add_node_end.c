#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - ajouter des node a la fin de la linked liste
 * @head: pointeur double pour la list_t liste
 * @str: string pour l'ajouter au nouveau node
 *
 * Return: adresse du nouveau element, ou NULL si c'est faux
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	n = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	n->str = strdup(str);
	n->len = l;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (t->next)
		t = t->next;

	t->next = n;

	return (n);
}
