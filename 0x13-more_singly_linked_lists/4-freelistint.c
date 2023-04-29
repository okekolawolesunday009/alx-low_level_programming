#include "lists.h"

/**
 * free_list - free memory
 * @head: pointer to head node
 */

void free_list(listint_t *head)
{
	listint *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
