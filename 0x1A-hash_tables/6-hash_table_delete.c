#include <stdlib.h>
#include "hash_tables.h"

/**
* hash_table_delete -  A function that deletes a hash table
* @ht: Hahsh table to be deleted
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_table_t *head = ht;
	hash_node_t *tmp, *ptr = NULL;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			ptr = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = ptr;
		}
	}
	free(head->array);
	free(head);
}
