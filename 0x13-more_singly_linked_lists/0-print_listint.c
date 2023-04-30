#include "lists.h"

/**
 * print_listint - prints all the node
 * @h: parameter passed
 * Return: retirn node
 */
size_t print_listint(const listint_t *h)
{
	size_t t = 0;

	while (h)
	{
		if (h = NULL)
		{
			return (0);
		}
		else
		{
			printf("%d\n", h->n);
		}
		t++;
		h = h->next;
	}
	return (t);
}
