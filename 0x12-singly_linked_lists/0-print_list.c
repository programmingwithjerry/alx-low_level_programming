#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of
 * a singly linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	for (; h != NULL; h = h->next)
	{
	if (!h->str)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	n++;
	}

	return (n);
}
