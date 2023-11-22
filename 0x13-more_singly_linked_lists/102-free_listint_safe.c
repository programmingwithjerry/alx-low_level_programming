#include "lists.h"
/**
 * free_listint_safe -  frees a listp_t list.
 * @h: pointer to the first node in the linked list
 * Return: the size of the list that was free’d
 */

void free_listp2(listp_t **head)
{
	listp_t *tmp_store;
	listp_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp_store = current) != NULL)
		{
			current = current->next;
			free(tmp_store);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head (beginning) of a list.
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listp_t **h)
{
	size_t new_nodes = 0;
	listp_t *h_ptr, *new, *add;
	listp_t *current;

	h_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = h_ptr;
		h_ptr = new;

		add = h_ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&h_ptr);
				return (new_nodes);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		new_nodes++;
	}

	*h = NULL;
	free_listp2(&h_ptr);
	return (new_nodes);
}
