#include "lists.h"

/**
 * free_listint - free memory
 * @head: pointer to head node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
