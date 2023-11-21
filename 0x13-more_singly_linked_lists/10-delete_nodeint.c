#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a listint_t linked list.
 * @head: First node address.
 * @index: location of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}

	current = *head;
	i = 0;

	while (i < index - 1)
	{
		if (current->next == NULL)
			return (-1);

		current = current->next;
		i++;
	}

	next = current->next;
	current->next = next->next;
	free(next);

	return (1);
}

