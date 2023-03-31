#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - list the number of element
 * @h: parameter used
 *
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
