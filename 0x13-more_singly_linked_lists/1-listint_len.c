#include "lists.h"

/**
 * listint_len - prints the length of node
 * @h: parameter used
 * Return: always node
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	
	while (h)
	{
		if (h == NULL)
			return (1);
		n++;
		h = h->next;
	}
	return (n);
}
