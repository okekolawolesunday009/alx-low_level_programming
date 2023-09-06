#include <stdio.h>
#include "hashtable.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned int i;
    hash_node_t *table = NULL;
    table = (hash_node_t*)malloc(sizeof(hash_node_t));
    if (new_table == NULL)
        return (NULL);

    table->array = (hash_node_t**)malloc(sizeof(hash_node_t) * size);
    if (table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }
    for (i = 0; i < table->size; i++)
        table->array[i] = NULL;

    return table;


}
