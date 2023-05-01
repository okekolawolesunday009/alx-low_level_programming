#include "lists.h"

/**
 * pop_listint - delete the index of node
 * @head: parameter
 * Return: success
 */

int pop_listint(listint_t **head)
{
	listint_t *nw, *update;

	nw = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (0);
	nw = update = *head;
	*head = update->next;
	free(nw);
}
