#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the memory
 * @head: parmeter
 */

void free_list(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	free(head);
}
