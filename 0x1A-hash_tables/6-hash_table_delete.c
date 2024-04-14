#include "hash_tables.h"


/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: ht is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	/* Check if hash table exists */
	if (ht == NULL)
		return;

	/* Iterate over each index in the hash table */
	unsigned long int index = 0;

	while (index < ht->size)
	{
		/* Get the current node at the index */
		hash_node_t *current_node = ht->array[index];

		while (current_node != NULL)
		{
			/* Delete the current node */
			hash_node_t *node_to_delete = current_node;

			current_node = current_node->next;
			free(node_to_delete->key);
			free(node_to_delete->value);
			free(node_to_delete);
		}
		index++;
	}
	/* Free the array of pointers and the hash table itself */
	free(ht->array);
	free(ht);
}

