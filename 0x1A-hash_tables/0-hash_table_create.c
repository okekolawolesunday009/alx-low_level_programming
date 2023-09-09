#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Entry point
 *
 * @size: size of table
 * Description: prints the the size of the table
 * Return: 0 (always success)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	return (table);
}
