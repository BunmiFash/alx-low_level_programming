#include "hash_tables.h"
#include <stdlib.h>
/**
 *hash_table_set - A function that adds an element to the hash table
 *@ht: Hahsh table to add or update key
 *@key: Key
 *@value: Value associated with keys
 *Return: 1 on success. 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, i;
	hash_node_t *newNode;
	char *val;
	char *key_copy;
	/*CREATE NODE FOR KEY AND VALUE*/
	if (ht == NULL || key == NULL)
	{
		return (0);
	}
	/*GET INDEX OF KEY idx*/
	idx = key_index((const unsigned char *)key, ht->size);
	val = strdup((const char *)value);
	key_copy = strdup((const char *)key);
	newNode = malloc(sizeof(hash_node_t));
	newNode->key = key_copy;
	newNode->value = val;
	newNode->next = NULL;
	/*IF KEY ALREADY EXIST, UPDATE VALUE llk*/
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = val;
			return (1);
		}
	}
	/* OTHERWISE ADD NEW NODE TO THE ARRAY*/
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
