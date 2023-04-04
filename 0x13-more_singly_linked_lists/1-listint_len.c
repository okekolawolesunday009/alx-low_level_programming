#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the length of node
 * @h: parameter passed
 * Return: always node
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h == NULL)
		{
			return (NULL);
		}
		node++;
		h = h->next;
	}
	return (node);
}
