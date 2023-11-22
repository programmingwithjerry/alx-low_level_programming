#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lag = head;
	listint_t *top = head;

	if (!head)
		return (NULL);

	while (lag && top && top->next)
	{
		top = top->next->next;
		lag = lag->next;
		if (top == lag)
		{
			lag = head;
			while (lag != top)
			{
				lag = lag->next;
				top = top->next;
			}
			return (top);
		}
	}

	return (NULL);
}
