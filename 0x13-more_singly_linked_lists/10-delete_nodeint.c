#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - add new node at specific position
 * @head: parameter
 * @idx: position to put the new node
 * @n: data or value to be passed
 * Return: return the new list with the addition
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

        unsigned int i;
        listint_t *prev, *current;

        current = malloc(sizeof(listint_t));

        current = *head;
	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
                return (-1);
	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;
        free(current);
        return (1);
}
