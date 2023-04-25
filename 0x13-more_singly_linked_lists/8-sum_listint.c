#include <stdio.h>
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * sum_listint - summ all the element in the list
 * @head: parameter
 * Return: sum total of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (head == NULL)
	{
		return (0);
	}
	current = head;
	while (current != NULL)
{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
