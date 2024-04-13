#include "hash_tables.h"
/**
 * key_index - Calculates the index for a given key in a hash table.
 * @key: The key string.
 * @size: The size of the hash table.
 * Return: The index for the key in the hash table.
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Check if key or size is NULL or 0 */
	if (key == NULL || size == 0)
		return (0);
	/* Calculate the hash using the DJB2 algorithm and return the index */
	return (hash_djb2(key) % size);
}
