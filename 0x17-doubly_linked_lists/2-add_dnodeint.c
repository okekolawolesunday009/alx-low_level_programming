#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - add new node at the beginning
 * @head: pointer to the next pointer
 * @n: number to be passed
 *
 * Return: new node at the beginning
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	/**code**/
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
