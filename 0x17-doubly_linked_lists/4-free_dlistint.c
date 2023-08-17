#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees node in list
 * @head: head node
 * Return: frees node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
