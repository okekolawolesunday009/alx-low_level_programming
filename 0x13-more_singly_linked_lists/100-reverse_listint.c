#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: parameter passed
 * Return: lists printed backwards
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr, *next;

	prev = NULL;
	next = NULL;
	curr = *head;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head = prev;
	return (prev);
}
