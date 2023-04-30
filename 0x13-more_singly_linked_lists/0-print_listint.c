#include "lists.h"

/**
 * print_listint - prints the length of node
 * @h: parameter used
 * Return: always node
 */

size_t print_listint(const listint_t *h)
{
        size_t n = 0;
        while (h)
        {
                if (h == NULL)
                        return (1);
                else
                        printf("%d\n",h->n);
                n++;
                h = h->next;
        }
        return (n);
}
