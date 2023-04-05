#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees the memory
 * @head: parmeter
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		count++;
		free(head);
		head = temp;
	}
	return (size);
}
