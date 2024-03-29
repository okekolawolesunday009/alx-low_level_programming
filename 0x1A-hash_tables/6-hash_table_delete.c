#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete -  deletes in the table
 * @ht: poitner to head
 * Return: delete table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
