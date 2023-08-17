#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints elements in node
 * @h: nodes
 * Return: rturns all elemts in node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t kount = 0;
	/**space**/
	while (h)
	{
		if (h == NULL)
			return (1);
		printf("%d\n", h->n);
		kount++;
		h = h->next;
	}
	return (kount);
}
