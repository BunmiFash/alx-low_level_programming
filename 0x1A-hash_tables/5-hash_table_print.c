#include <stdlib.h>
#include "hash_tables.h"
/**
* hash_table_print - A function that prints a hash table
* @ht: Hash table to be printed
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp = NULL;
	int count = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp != NULL)
		{
			if (count)
			{
				printf(", ");
			}
			while (tmp != NULL)
			{
				printf("'%s': '%s'",
						tmp->key,
						tmp->value);
				tmp = tmp->next;
				if (tmp != NULL)
				{
					printf(", ");
				}
			}
			count = 1;
		}
	}
	printf("}\n");
}
