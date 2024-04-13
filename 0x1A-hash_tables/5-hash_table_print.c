#include "hash_tables.h"


/**
 * hash_table_print - Prints all key-value pairs in the hash table.
 * @ht: Pointer to the hash table.
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	/* Check if hash table pointer is NULL */
	if (ht == NULL)
		return;

	/* Declare variables */
	unsigned long int idx;
	hash_node_t *current_node;
	char *separator;

	/* Initialize separator and opening brace */
	printf("{");
	separator = "";

	/* Iterate over the hash table */
	for (idx = 0; idx < ht->size; idx++)
	{
		/* Get the head of the linked list at the current index */
		current_node = ht->array[idx];

		/* Traverse the linked list */
		while (current_node != NULL)
		{
			/* Print key-value pair */
			printf("%s'%s': '%s'", separator, current_node->key, current_node->value);

			/* Update separator */
			separator = ", ";

			/* Move to the next node */
			current_node = current_node->next;
		}
	}

	/* Print closing brace and newline */
	printf("}\n");
}

