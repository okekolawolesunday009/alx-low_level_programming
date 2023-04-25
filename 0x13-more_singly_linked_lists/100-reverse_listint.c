#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - reverses a linked list
 * @head: parameter
 * Return: list printed backwards
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *current;

	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (prev);
}
