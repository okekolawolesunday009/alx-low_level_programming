#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the node
 * @h: parameter passed
 * Return: returns node
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h == NULL)
		{
			return (1);
		}
		else
		{
			printf("%d\n", h->n);
		}
		node++;
		h = h->next;
	}
	return (node);
}
