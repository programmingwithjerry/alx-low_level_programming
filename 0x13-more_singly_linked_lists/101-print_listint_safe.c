#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: A pointer to listint_t limked list
 * Return: 98 if fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number_of_nodes = 0;
	long int ptr_diffs;

	while (head)
	{
		ptr_diffs = head - head->next;
		number_of_nodes++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (ptr_diffs > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (number_of_nodes);
}
