#include "lists.h"
#include <string.h>

/**
 * add_node_end - add node at the end
 * @head: pointer to a pointer
 * @str: string to be passed
 *
 * Return: points to the end of the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dp;
	list_t *new, *temp;
	unsigned int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	dp = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new->str = dp;
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


