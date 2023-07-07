#include "lists.h"

/**
 * insert_nodeint_at_index - add new node at a specific position
 * @head: head node
 * @idx: index position to add new node
 * @n: data or value to be passed
 * Return: return new node list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *nw, *update;

    nw = malloc(sizeof(listint_t));

    if (nw == NULL)
        return (NULL);
    nw->n = n;

    if (*head == NULL || idx == 0)
    {
        nw->next = *head;
        *head = nw;
        return (nw);
    }

    update = *head;

    for (i = 0; i < idx - 1 && update != NULL; i++)
        update = update->next;

    if (update == NULL || i < idx - 1)
    {
        free(nw);
        return (NULL);
    }

    nw->next = update->next;
    update->next = nw;
    return (nw);
}
