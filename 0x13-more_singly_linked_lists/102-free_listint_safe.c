#include "lists.h"

/**
 * free_list - frees the memory
 * @head: parmeter
 */

size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int count = 0;
	listint_t *temp;
	temp = *h;

	while (*h != NULL)
	{
		temp = temp->next;
		count++;
		free(h);
		*h = temp;
	}
	return (size);
}
