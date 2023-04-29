#include "lists.h"

/**
 * get_nodeint_at_index - get the index of a node
 * @head: pointer to head
 * @index: position of element
 *
 * Return: return the value or null if nothing
 */

listint_t *getnodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int kount;
	listint_t *curr;

	curr = malloc(sizeof(listint_t));
	curr = head;
	kount = 0;
	
	while (curr != NULL)
	{
		if (kount == index)
			return (curr);
		kount++;
		curr = curr->next;
	}
	return (NULL);
}
