#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: temporarily holds elemenets of a list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	for (; h; h = h->next)
	{
		printf("%d\n", h->n);
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
