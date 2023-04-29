#include "lists.h"

void free_listint2(listint _**head)
{
	listint_t *tmp;
	listint_t *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}
