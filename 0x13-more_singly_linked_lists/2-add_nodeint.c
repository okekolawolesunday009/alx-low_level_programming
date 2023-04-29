#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining!
 * @head: type of list_int_t
 * @n: value
 * Return: returns a new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	nw->n = n;
	nw->next = *head;
	*head =  nw;
	return (nw);
}
