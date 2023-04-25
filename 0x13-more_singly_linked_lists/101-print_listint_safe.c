#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;

	while (head)
	{
		if (head == NULL)
		{
			return (1);
		}
		else
		{
			printf("%d\n", head->n);
		}
		node++;
		head = head->next;
	}
	return (node);
}
