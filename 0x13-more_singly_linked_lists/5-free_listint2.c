#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *last;
	listint_t *current;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL)
	{
		last = current;
		current = current->next;
		free(last);
	}
	*head = NULL;
}
