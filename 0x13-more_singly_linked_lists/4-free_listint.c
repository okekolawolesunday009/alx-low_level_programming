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

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
