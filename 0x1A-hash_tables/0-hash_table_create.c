#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	/* Allocate memory for the hash table */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* Allocate memory for the array */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(table);
		return (NULL);
	}

	/* Initialize array elements to NULL */
	for (i = 0; i < size; i++)
		array[i] = NULL;

	/* Assign values to hash table */
	table->array = array;
	table->size = size;

	return (table);
}
