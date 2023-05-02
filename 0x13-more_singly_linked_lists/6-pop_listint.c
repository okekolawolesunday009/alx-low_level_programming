#include "lists.h"

/**
 * pop_listint - delete the index of node
 * @head: parameter
 * Return: success
 */

int pop_listint(listint_t **head)
{
	listint_t *update;
	int data;

	update = malloc(sizeof(listint_t));

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	update = (*head)->next;
	free(*head);
	*head = update;
	return (data);
}
