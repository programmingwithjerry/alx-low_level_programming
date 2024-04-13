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

	/* Initialize hash value for DJB2 algorithm */
	unsigned long int hash = 5381;

	int c;
	/* Calculate hash using DJB2 algorithm */
	while ((c = *key++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}

	/* Return hash modulo size */
	return (hash % size);
}
