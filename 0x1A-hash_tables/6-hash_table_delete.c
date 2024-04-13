#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table and its contents.
 *
 * @ht: Pointer to the hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
	/* Check if hash table pointer is NULL */
	if (ht == NULL)
		return;

	/* Declare variables */
	unsigned long int idx;
	hash_node_t *current_node;
	hash_node_t *next_node;

	/* Iterate over the hash table */
	for (idx = 0; idx < ht->size; idx++)
	{
		/* Get the head of the linked list at the current index */
		current_node = ht->array[idx];

		/* Traverse the linked list */
		while (current_node != NULL)
		{
			/* Free key and value of current node */
			free(current_node->key);
			free(current_node->value);

			/* Save reference to next node */
			next_node = current_node->next;

			/* Free current node */
			free(current_node);

			/* Move to the next node */
			current_node = next_node;
		}
	}

	/* Free array of pointers */
	free(ht->array);

	/* Free hash table itself */
	free(ht);
}

