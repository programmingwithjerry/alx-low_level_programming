#include "hash_tables.h"

/**
 * hash_table_print - Prints all key-value pairs in the hash table.
 *
 * @ht: Pointer to the hash table.
 */


void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current_node;
	char *separator;

	if (ht == NULL)
		return;

	printf("{");
	separator = "";

	idx = 0;
	while (idx < ht->size)
	{
		current_node = ht->array[idx];
		while (current_node != NULL)
		{
			printf("%s'%s': '%s'", separator, current_node->key, current_node->value);
			separator = ", ";
			current_node = current_node->next;
		}
		idx++;
	}

	printf("}\n");
}
			
