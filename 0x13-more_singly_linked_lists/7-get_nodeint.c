#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - get the node at index
 * @head: parameter
 * @index: position
 *
 * Return: return index value or null if nothing
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	current = malloc(sizeof(listint_t));
	current = head;
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
