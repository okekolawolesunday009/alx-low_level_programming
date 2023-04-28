#include "lists.h"

/**
 * print_list - print list
 * @h: type def of list_t
 *
 * Return: reyturn count
 */

size_t print_list(const list_t *h)
{
	size_t kount = 0;
	/**good*/
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		kount++;
		h = h->next;
	}
	return (kount);
}
