#include "lists.h"

/**
 * delete_nodeint_at_index - add new node at specific position
 * @head: parameter
 * @idx: position to the new node
 * @n: data or value to be passed
 * Return: return the new list with the addition
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev, *update;

	update = malloc(sizeof(lisint_t));

	update = *head;
	i = 0;
	while (i < index && update != NULL; i++)
	{
		prev = update;
		update = update->next;
		i++;
	}
	if (update == NULL)
		return (-1);
	if (prev == NULL)
		*head = current->next;
	else
	{
		prev->next = update->next;
		free(update);
		return (1);
	}
}
