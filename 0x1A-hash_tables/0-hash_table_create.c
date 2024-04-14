#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the hash table
 * Return: the created hash table, or NULL If something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* Declare variables */
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i = 0;

	/* Allocate memory for the hash table structure */
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	/* Allocate memory for the array of hash nodes */
	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
	{
		free(table); /*Free previously allocated memory*/
		return (NULL);
	}

	/* Initialize each element of the array to NULL */
	while (i < size)
	{
		array[i] = (NULL);
		i++;
	}

	/* Assign the array and size to the hash table structure */
	table->array = array;
	table->size = size;

	return (table);
}

