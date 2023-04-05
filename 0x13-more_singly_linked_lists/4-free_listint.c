#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the memory
 * @head: parmeter
 */

void free_list(listint_t *head)
{
	listint_t *temp, *current;

	temp = current  = head;
	while (temp != NULL)
	{
		head = current->next;
		free(temp);
		free(current);
	}
}
