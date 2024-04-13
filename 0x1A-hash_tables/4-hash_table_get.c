#include "hash_tables.h"


/**
 * hash_table_get - Retrieves the value associated with a
 * given key in the hash table.
 * @ht: Pointer to the hash table.
 * @key: The key to search for.
 * Return: The value associated with the key if found,
 * or NULL if not found or if ht is NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	/* Declare variables */
	unsigned long int idx;
	hash_node_t *current_node;

	/* Check if hash table pointer is NULL */
	if (ht == NULL)
		return (NULL);

	/* Check if key pointer is NULL or empty */
	if (key == NULL || *key == '\0')
		return (NULL);

	/* Calculate index for the key */
	idx = key_index((unsigned char *)key, ht->size);

	/* Get the head of the linked list at the calculated index */
	current_node = ht->array[idx];

	/* Traverse the linked list to find the key */
	while (current_node != NULL)
	{
		/* If the key is found, return its corresponding value */
		if (strcmp(current_node->key, key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	/* If key is not found, return NULL */
	return (NULL);
}

