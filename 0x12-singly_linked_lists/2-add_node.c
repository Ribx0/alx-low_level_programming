#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - ajouter un nv node a la linked liste
 * @head: pointeur double pour la list_t liste
 * @str: nouveau string ajouter au node
 *
 * Return: adresse du nv element, ou NULL si c'est faux
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int l = 0;

	while (str[l])
		l++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = l;
	n->next = (*head);
	(*head) = n;

	return (*head);
}

