#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the number of elements in the node
 * @h: head node
 * Return: prints all elemtnts in node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;
	/**code**/
	while (h)
	{
		if (h == NULL)
			return (1);
		else if (h != NULL)
		{
			n++;
			h = h->next;
		}
	}
	return (n);
}
