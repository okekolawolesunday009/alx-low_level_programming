#include "lists.h"
#include <string.h>

/**
 * add_node - add new node at the beginning
 * @head: pointer to the next pointer
 * @str: string to be passed
 *
 * Return: new node at the beginning
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dp;
	list_t *new;
	unsigned int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	dp = strdup(str);
	if (dp == NULL)
	{
		free(new);
		return (NULL);
	}
	len = 0;
	while (str[len])
		len++;
	new->str = dp;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
