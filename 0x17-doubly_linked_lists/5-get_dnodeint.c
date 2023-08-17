#include "lists.h"

/**
 * get_nodeint_at_index - get the index of a node
 * @head: pointer to head
 * @index: position of element
 *
 * Return: return the value or null if nothing
 */

dlistint_t *get_dnodeint_index(dlistint_t *head, unsigned int index)
{
	size_t kount;
	dlistint_t *curr;

	curr = malloc(sizeof(dlistint_t));
	curr = head;
	kount = 0;
	/**betty**/
	while (curr != NULL)
	{
		if (kount == index)
			return (curr);
		kount++;
		curr = curr->next;
	}
	return (NULL);
}
