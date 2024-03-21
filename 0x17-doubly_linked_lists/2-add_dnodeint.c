#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: a double pointer to the head of the list
 * @n: content of the new node
 * Return: the address of the new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addrs_new_node;

	/* Check if head pointer is NULL */
	if (head == NULL)
		return (NULL);
	/* Allocate memory for a new node */
	addrs_new_node = malloc(sizeof(dlistint_t));
	/* Check if memory allocation was successful */
	if (addrs_new_node == NULL)
		return (NULL);
	/* Set the data of the new node to n */
	addrs_new_node->n = n;
	if (*head != NULL)
	{
		addrs_new_node->prev = NULL;
		addrs_new_node->next = (*head);
		(*head)->prev = addrs_new_node;
		/* Update the head pointer to point to the new node */
		*head = addrs_new_node;
		return (addrs_new_node);
	}
	addrs_new_node->next = NULL;
	addrs_new_node->prev = NULL;
	*head = addrs_new_node;
	return (addrs_new_node);

}
