#include <stdio.h>
#include "lists.h"



size_t print_dlistint(const dlistint_t *h)
{
    size_t kount = 0;

	while (h)
	{
		if (h->n == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %d\n", kount, h->n);
            kount++;
            h = h->next;
	}
	return (kount);
