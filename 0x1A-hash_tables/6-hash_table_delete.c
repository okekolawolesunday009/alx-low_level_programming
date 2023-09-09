#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print -  prints the key and value in the table
 * @ht: poitner to head
 */
hash_table_delete(const hash_table_t *ht)
{
    hash_node_t *temp;
    if (ht == NULL) {
    }

    for (unsigned long int i = 0; i < ht->size; i++) {
        hash_node_t *current = ht->array[i];

        while (current != NULL) {
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
