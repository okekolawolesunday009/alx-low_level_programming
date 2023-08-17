#include "lists.h"
#include "stdio.h"
/**
 * sum_listint - sum all the elememt in the list
 * @head: parameter
 * Return: summ all of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *curr;

	sum = 0;
	curr = malloc(sizeof(dlistint_t));

	if (head == NULL)
		return (0);
	curr = head;
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
