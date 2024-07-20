#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a skip list
 *
 * @list: Pointer to the head of the skip list
 * @value: The value to search for
 * Return: Pointer to the node where the value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *skip;

	/*Return NULL if the list is empty*/
	if (list == NULL)
		return (NULL);

	skip = list;

	do {
		list = skip;
		skip = skip->express;  /*Move to the next express lane node*/
		printf("Value checked at index [%d] = [%d]\n", (int)skip->index, skip->n);
	} while (skip->express && skip->n < value);

	if (skip->express == NULL)  /*If at the end of the express lane*/
	{
		list = skip;
		while (skip->next)  /* Move to the end of the list*/
			skip = skip->next;
	}

	printf("Value found between indexes [%d] and [%d]\n",
		(int)list->index, (int)skip->index);

	while (list != skip->next)  /*Linear search within the block*/
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
