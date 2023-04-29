#include "lists.h"

int pop_listint(listint **head)
{
	listint_t *nw, *update;

	nw = malloc(sizeof(listint_t));

	if (head == NULL)
		return (0);
	nw = update = *head;
	*head = update->next;
	free(new);
	return (1);
}
