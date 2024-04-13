#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: The hash table
 * @key: The key of the table which can not be an empty string
 * @value: The the value associated with the key
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* Declare variables */
	unsigned long int index = 0;
	hash_node_t **tmp_ptr = NULL; /* Double pointer to hash_node_t */
	hash_node_t *new_hash_node = NULL;

	/* Check for invalid inputs */
	if (!ht || !key || !(*key) || !value)
		return (0);

	/* Calculate index based on key */
	index = key_index((unsigned char *)key, ht->size);
	tmp_ptr = &(ht->array[index]); /* Assign address of pointer to tmp_ptr */

	/* Traverse the linked list until the end or matching key is found */
	while (*tmp_ptr && strcmp((*tmp_ptr)->key, key) != 0)
		tmp_ptr = &((*tmp_ptr)->next);

	/* If key already exists, update value */
	if (*tmp_ptr)
	{
		free((*tmp_ptr)->value);
		(*tmp_ptr)->value = strdup(value);
		return (1);
	}

	/* Allocate memory for new node */
	new_hash_node = malloc(sizeof(*new_hash_node));
	if (!new_hash_node)
		return (0);

	/* Assign key and value to the new node */
	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);

	/* Insert new node at the beginning of the linked list */
	new_hash_node->next = *tmp_ptr; /* Point new node to current head of list*/
	*tmp_ptr = new_hash_node; /*Update poiter from prev node to point tonew node*/

	return (1);
}
