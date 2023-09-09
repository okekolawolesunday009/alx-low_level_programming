#include <stdio.h>
#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - initializes variable type of dog
 * @ht: pointer to head
 * @key: key to use to store value
 * @value: value to be installed in the table
 * Description: adds an element to the hash table
 * Return: success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *current, *new_item;

	index = hash_djb2((const unsigned char *)key) % ht->size;
	new_item = (hash_node_t *)malloc(sizeof(hash_node_t));
	if (!new_item)
	{
		fprintf(stderr, "Error: Unable to allocate memory for hash item\n");
		exit(EXIT_FAILURE);
	}
	new_item->key = strdup(key);
	new_item->value = strdup(value);
	new_item->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new_item;
	else
	{
		current = ht->array[index];
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_item;
	}
	return (0);
}
