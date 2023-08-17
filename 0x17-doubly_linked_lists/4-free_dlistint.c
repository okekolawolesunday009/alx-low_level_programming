#include <stdio.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{
    dlistint_t *temp = head;
    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;

    }
}
