#include "lists.h"
#include <stdio.h>

size_t listint_len(const listint_t *h)
{
    size_t node = 0;
    while (h)
    {
        if (h->n == NULL)
        {
            return (NULL);
        }
       node++;
       h = h->next;

    }
    return (node);
}
