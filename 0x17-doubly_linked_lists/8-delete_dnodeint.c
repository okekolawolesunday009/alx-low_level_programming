
#include "lists.h"
#include <stdio.h>
/**
 * delete_dnodeint_at_index - delete node at specific position
 * @head: parameter
 * @index: position of the node to delete
 * Return: the modified list or NULL on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *prev, *current;
	/**code**/
	prev = *head;
	current = *head;
	/**code**/
	if (*head == NULL)
		return (-1);
	else if (current == NULL || index == 0)
	{
		*head = (*head)->next;
		free(current);
		current = NULL;
		return (1);
	}
	else
	{
		for (i = 0; i < index && current != NULL; i++)
		{
			prev = current;
			current = current->next;
		}
		prev->next = current->next;
		if (current->next != NULL)
			free(current);
		return (1);
	}
	return (1);
}
