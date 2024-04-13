#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key passed
 * @size: size of the hash tables
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	/* Generate hash value using the djb2 algorithm */
	unsigned long int hash_value = hash_djb2(key);

	/* Calculate index using modulo operation */
	unsigned long int index = hash_value % size;

	/* Return the calculated index */
	return (index);
}

