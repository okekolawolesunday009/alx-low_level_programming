#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>

/**
 * key_index - Entry point
 *
 * @key: key used to generate index
 * @size:  size of the table
 * Return: 0 (always success)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
