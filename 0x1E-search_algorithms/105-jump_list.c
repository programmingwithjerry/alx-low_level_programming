#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a specific value in a linked list of integers
 * using the Jump search algorithm
 *
 * @list: pointer to the head of the list
 * @size: total number of elements in the list
 * @value: the value to search for
 * Return: pointer to the node containing the value, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, interval, jump;
	listint_t *current;

	if (list == NULL || size == 0)
		return (NULL);
	/* calculate the interval size for jumps */
	interval = (size_t)sqrt((double)size);
	step = 0;
	jump = 0;

	do {
		current = list;
		jump++;
		step = jump * interval;

		/* Move forward in the list by the interval */
		while (list->next && list->index < step)
			list = list->next;

		if (list->next == NULL && step != list->index)
			step = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)step, list->n);

	} while (step < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)current->index, (int)list->index);

	/* Perform a linear search within the identified block */
	for (; current && current->index <= list->index; current = current->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)current->index, current->n);
		if (current->n == value)
			return (current);
	}

	return (NULL);
}
