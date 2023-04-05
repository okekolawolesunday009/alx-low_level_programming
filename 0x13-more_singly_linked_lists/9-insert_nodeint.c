#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - add new node at specific position
 * @head: parameter
 * @idx: position to put the new node
 * @n: data or value to be passed
 * Return: return the new list with the addition
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i;
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	/**sttore the data, create the node*/
	new->n = n;
	current = *head;
	/**loop tru it all, like we normally do in array*/
	for (i = 1; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
		return (NULL);
	/**pass the value to the next position of the list*/
	new->next = current->next;
	current->next = new;
	return (new);
}
