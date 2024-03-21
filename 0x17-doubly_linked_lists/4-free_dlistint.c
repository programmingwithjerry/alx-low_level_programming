#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to the head of the doubly linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_head;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current_head = head;
		/* Move head pointer to the next node */
		head = head->next;
		/* Free the memory allocated for the current node */
		free(current_head);
	}
	/* Free the memory allocated for the head pointer itself */
	free(head);
}
