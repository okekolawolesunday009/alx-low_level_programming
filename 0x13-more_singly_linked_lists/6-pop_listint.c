#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the first element in the linked list
 * @head: data passed
 * Return: returns the new node elements
 */

int pop_listint(listint_t **head)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (head == NULL)
		return (0);
	new = current = *head;
	*head  = current->next;

	free(new);

	return (1);
}
