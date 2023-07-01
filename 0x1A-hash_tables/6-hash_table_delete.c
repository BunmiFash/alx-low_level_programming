#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete -  A function that deletes a hash table
* @ht: Hahsh table to be deleted
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			free(tmp->value);
			free(tmp->key);
			ht->array[i] = ht->array[i]->next;
		}
	}
}
