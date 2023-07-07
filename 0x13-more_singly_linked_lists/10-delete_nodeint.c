#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - delete node at specific position
 * @head: parameter
 * @index: position of the node to delete
 * Return: the modified list or NULL on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *prev, *update;

    prev = *head;
    update = *head;

    if (*head == NULL)
        return (-1);
    else if (update == NULL || index == 0)
    {
        *head = (*head)->next;
        free(update);
        update = NULL;
        return (1)
    }
	else
    {
        for (i = 0; i < index && update != NULL; i++)
        {
            prev = update;
            update = update->next;
        }
        if (update == NULL)
            return (-1);
        prev->next = update->next;
        free(update);
        update = NULL;
        return (1);
	}
	return (1);
}
