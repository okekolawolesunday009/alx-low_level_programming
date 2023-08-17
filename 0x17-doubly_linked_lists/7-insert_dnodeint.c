#include "lists.h"

/**
 * insert_dnodeint_at_index - add new node at a specific position
 * @head: head node
 * @idx: index position to add new node
 * @n: data or value to be passed
 * Return: return new node list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    size_t i;
    dlistint_t *nw, *update;

    nw = malloc(sizeof(dlistint_t));

    if (nw == NULL)
        return (NULL);
    nw->n = n;

    if ((*h) == NULL || idx == 0)
    {
        nw->next = (*h);
        nw->prev = NULL;
        if ((*h )!= NULL)
            (*h)->prev = nw;
        (*h) = nw;
        return (nw);
    }

    update = (*h);

    for (i = 0; i < idx - 1 && update != NULL; i++)
        update = update->next;

    if (update == NULL || i < idx - 1)
    {
        free(nw);
        return (NULL);
    }

    nw->next = update->next;
    nw->prev = update->prev;
    if (update->prev != NULL)
        update->prev->next = nw;

    update->next = nw;
    return (nw);
}
