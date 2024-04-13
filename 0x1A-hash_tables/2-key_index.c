#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */


unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* Check if key or size is NULL or 0 */
	if (key == NULL || size == 0)
		return (0);
	/* Calculate the hash using the DJB2 algorithm and return the index */
	return (hash_djb2(key) % size);
}
