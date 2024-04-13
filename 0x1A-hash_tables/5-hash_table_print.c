#include "hash_tables.h"

/**
 * hash_table_print - Prints all key-value pairs in the hash table.
 *
 * @ht: Pointer to the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	/* Check if hash table pointer is NULL */
	if (ht == NULL)
		return;

	/* Declare variables */
	unsigned long int idx;
	hash_node_t *c_node;
	char *sept;

	/* Initialize sept */
	sept = "";

	/* Print opening brace */
	printf("{");

	/* Iterate over the hash table */
	for (idx = 0; idx < ht->size; idx++)
	{
		/* Get the head of the linked list at the current index */
		c_node = ht->array[idx];

		/* Traverse the linked list */
		while (c_node != NULL)
		{
			/* Print key-value pair */
			printf("%s'%s': '%s'", sept, c_node->key, c_node->value);

			/* Update sept */
			sept = ", ";

			/* Move to the next node */
			c_node = c_node->next;
		}
	}

	/* Print closing brace and newline */
	printf("}\n");
}

