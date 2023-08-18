#include <stdio.h>
#include "lists.h"


/**
 * add_dnodeint_end - add new node at the beginning
 * @head: pointer to the next pointer
 * @n: number to be passed
 *
 * Return: new node at the beginning
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;
	/**code**/
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	last->prev = NULL;
	if (*head == NULL)
	{
		last->next = NULL;
		*head = last;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = last;
		last->prev = temp;
	}
	return (last);
}
