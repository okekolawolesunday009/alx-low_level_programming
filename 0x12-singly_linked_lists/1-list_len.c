#include "lists.h"

/**
 * list_len - list the number element in the list
 * @h: parameter passed
 *
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	int kount;

	kount = 0;
	while (h)
	{
		kount++;
		h = h->next;
	}
	return (kount);
}
