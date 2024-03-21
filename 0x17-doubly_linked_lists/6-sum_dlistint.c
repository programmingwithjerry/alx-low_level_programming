#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * 	dlistint_t linked list.
 * @head: a pointer to the head of the doubly linked list
 * Return: the sum of all data, or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int add_data = 0;

	/* Traverse the list and calculate the sum */
	while (head != NULL)
	{
		/* Add the data of the current node to the sum */
		add_data += head->n;
		/* Move to the next node in the list */
		head = head->next;
	}
	/* Return the sum of data */
	return (add_data);
}
