#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print -  prints the key and value in the table
 * @ht: poitner to head
 * Return: elements of the table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	/**betty**/
	if (ht == NULL || ht->array == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			printf("{'%s': '%s'}", current->key, current->value);
			current = current->next;
			if (current != NULL)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
