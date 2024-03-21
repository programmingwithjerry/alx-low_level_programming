#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: the node that should be delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_head = *head;

	if (*head == NULL)
		return (-1);
	/* Traverse the list to find the node to be deleted */
	while (index > 0)
	{
		if (current_head == NULL)
			return (-1);
		current_head = current_head->next;
		index--;
	}
	/* If the node to be deleted is the head node */
	if (current_head == *head)
	{
		*head = current_head->next;
		(*head)->prev = NULL;
	}
	else
	{
		/*Update the next pointer of the previous node to skip the deleted node*/
		current_head->prev->next = current_head->next;
		if (current_head->next)
			current_head->next->prev = current_head->prev;
	}
	/* Free the memory allocated for the deleted node */
	free(current_head);
	return (1);
}
