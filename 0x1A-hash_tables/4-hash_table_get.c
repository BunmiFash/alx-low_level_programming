#include <stdlib.h>
#include "hash_tables.h"
/**
* hash_table_get - A function that retrieves a value
* associated with a key
* @ht: Hash table to look into
* @key: Search key
* Return: Value associated with key, or NULL if key not found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
	{
		return (NULL);
	}
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		return (NULL);
	}
	return (tmp->value);
}
