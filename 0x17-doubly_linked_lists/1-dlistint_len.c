#include <stdio.h>
#include "lists.h"



size_t dlistint_len(const dlistint_t *h)
{

    size_t n = 0;

	while (h)
	{
		if (h == NULL)
			return (1);
		else
		{
			n++;
	        	h = h->next;
		}
	}
	return (n);
}
