#include "lists.h"

/**
 * sum_listint - sum all the elememt in the list
 * @head: parameter
 * Return: summ all of the data
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *curr;

	sum = 0;
	curr = malloc(sizeof(listint_t));

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
