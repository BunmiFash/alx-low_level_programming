#include "hash_tables.h"

/**
 * key_index - Function that retrieves the index on the array
 * where the string character is stored in the hash table
 *
 * @key: Key to be hashed
 *
 * @size: Size of the hash table
 *
 * Return: Index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = hash_djb2(key);

	return (idx % size);
}
