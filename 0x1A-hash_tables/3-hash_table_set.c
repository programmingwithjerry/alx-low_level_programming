#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>


/**
 * hash_table_set - Inserts or updates a key-value pair in the hash table.
 *
 * @ht: Pointer to the hash table.
 * @key: The key to insert or update.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Declare variables */
	unsigned long int idx = 0;
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;

	/* Check for NULL pointers or empty key */
	if (!ht || !key || !(*key) || !value)
		return (0);
	/* Calculate index for the key */
	idx = key_index((unsigned char *)key, ht->size);
	/*// Point to the head of the linked list at index*/
	current_node = ht->array[idx];
	/* Search for existing node with the same key */
	while (current_node && strcmp(current_node->key, key) != 0)
		current_node = current_node->next;
	/* If key exists, update its value */
	if (current_node)
	{
		free(current_node->value);
		current_node->value = strdup(value);
		return (1);
	}
	/* Allocate memory for a new node */
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	/* Assign key and value to the new node */
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	/* Insert new node at the beginning of the linked list */
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}

