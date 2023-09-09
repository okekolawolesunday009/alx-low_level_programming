#include <stdio.h>
#include "hash_tables.h"
#include <stdlib.h>
/**
 * init_dog - initializes variable type of dog
 * @ht: pointer to head
 * @key: key to use to store value
 * @value: value to be installed in the table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned int index;
    hash_node_t *item;
    
    index = hash(key) % ht->size;
    item = ht->array[index];
   
    if (item != NULL)
    {
        if (strcmp(item->key, key) == 0)
            return item->value;
    }
    return NULL;
}