#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: tyoe of listint_t
 * @n: value or data to be inserted
 * Return: adds node at the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw;
	listint_t *l;

	nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);
	nw->n = n;
	nw->next = NULL;
	if (*head == NULL)
	{
		*head = nw;
		return (*head);
	}
	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = nw;
	return (nw);
}
