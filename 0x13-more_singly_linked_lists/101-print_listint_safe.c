#include "lists.h"
#include <stdint.h>

/**
 * print_listint_safe - prints the list and exist safely if error
 * @head: parameter passed
 * Return: always sucess
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	do {
		printf("[%p] %d\n", (void *)head, head->n);
		n++;
		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)(intptr_t)&exit, 98);
			exit(98);
		}
		head = head->next;
	} while (head != NULL);
	return (n);
}
