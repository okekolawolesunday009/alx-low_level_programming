#include <stdio.h>
#include "lists.h"



size_t print_dlistint(const dlistint_t *h)
{
    size_t kount = 0;

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
