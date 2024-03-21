#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: a pointer to the head of the dubly linked list
 * @index: index of the node to return its value (main = index 5 = 98)
 * Return: value of the node in the index, NULL if doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_index;
	unsigned int index_tracker;

	if (head == NULL)
		return (NULL);
	/*Initialize the current_index pointer to point to the head of the list*/
	current_index = head;
	head->n = current_index->n;
	index_tracker = 0;

	while (current_index != NULL)
	{
		/* Check if the index tracker matches the desired index */
		if (index_tracker == index)
			/* If so, return a pointer to the current node */
			return (current_index);
		index_tracker++;
		/* Move to the next node in the list */
		current_index = current_index->next;
	}
	/* If the desired index is not found in the list, return NULL */
	return (NULL);
}
