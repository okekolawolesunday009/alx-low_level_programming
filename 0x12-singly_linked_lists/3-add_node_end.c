#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add node at the end
 * @head: pointer to pointer
 * @str: strng
 *
 * Return: points to the begining
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new, *temp;
	unsigned int len;
	/**malloc**/
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
