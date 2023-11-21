#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t linked list.
 * @head: pointer to first node.
 * @index: Position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next_node;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		next_node = (*head)->next_node;
		free(*head);
		*head = next_node;
		return (1);
	}

	current = *head;
	i = 0;

	while (i < index - 1)
	{
		if (current->next_node == NULL)
			return (-1);

		current = current->next_node;
		i++;
	}
	next_node = current->next_node;
	current->next_node = next_node->next_node;
	free(next_node);

	return (1);
}

