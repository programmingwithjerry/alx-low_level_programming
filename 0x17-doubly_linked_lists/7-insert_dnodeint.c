#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: a double pointer to the head of the doubly linked list
 * @idx: index of the list where the new node should be added
 * @n: the content of the new node to be added
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current_h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	/* Initialize current_h to point to the head of the list */
	current_h = *h;
	while (idx > 1)
	{
		current_h = current_h->next;
		if (current_h == NULL)
			return (NULL);
		idx--;
	}
	if (current_h->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	/* Initialize the data and pointers of the new node */
	new_node->n = n;
	new_node->prev = current_h;
	new_node->next = current_h->next;
	/* Adjust pointers of adjacent nodes to include the new node */
	current_h->next->prev = new_node;
	current_h->next = new_node;
	/* Return a pointer to the new node */
	return (new_node);
}
