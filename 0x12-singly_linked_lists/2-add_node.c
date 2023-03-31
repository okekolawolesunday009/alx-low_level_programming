#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - add new node at the begining
 * @head: pointer to pointer
 * @str: strung
 *
 * Return: new
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new;
	unsigned int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
