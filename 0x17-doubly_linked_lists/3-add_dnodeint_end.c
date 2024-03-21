#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the beggining of the list
 * @n: content of the new node to be added
 * Return: the address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last_node;
	dlistint_t *addrs_new_node;

	/* Allocate memory for the new node */
	addrs_new_node = malloc(sizeof(dlistint_t));
	if (addrs_new_node == NULL)
		return (NULL);
	/* Set the next pointer of the new node to NULL */
	addrs_new_node->next = NULL;
	addrs_new_node->n = n;
	last_node = *head;
	if (last_node == NULL)
	{
		/* Set the previous pointer of the new node to NULL */
		addrs_new_node->prev = NULL;
		*head = addrs_new_node;
		return (addrs_new_node);
	}
	/* Traverse the list to find the last node */
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = addrs_new_node;
	addrs_new_node->prev = last_node;
	return (addrs_new_node);
}
