#include "lists.h"
#include <stdio.h>
/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to the first node in the linked list
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{	size_t num_nodes = 0;
	int ptr_diffs;
	listint_t *tmp_store;

	if (!h || !*h)
		return (0);

	for (; *h; *h = tmp_store, num_nodes++)
	{
		ptr_diffs = *h - (*h)->next;
		if (ptr_diffs > 0)
		{
			tmp_store = (*h)->next;
		}
		else
		{
			*h = NULL;
			break;
		}
	}

	*h = NULL;

	return (num_nodes);
}

