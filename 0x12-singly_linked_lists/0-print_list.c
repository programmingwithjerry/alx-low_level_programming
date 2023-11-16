#include "lists.h"

/**
* print_list - prints all the elements of a list
*
* @h:pointer to the list
*
*Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
const list_t *cursor = h;
size_t i = 0;

for (; cursor != NULL; cursor = cursor->next)
{
	if (cursor->str != NULL)
		printf("[%lu] %s\n", cursor->len, cursor->str);
	else
		printf("[0] (nil)\n");
	i += 1;
	cursor = cursor->next;
}

	return (i);
}
