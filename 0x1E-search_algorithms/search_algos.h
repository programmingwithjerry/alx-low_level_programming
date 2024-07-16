#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Structure for a singly linked list
 * @n: Integer value stored in the node
 * @index: Position of the node in the list
 * @next: Pointer to the next node in the list
 * Description: Node structure for a singly linked list
 * used in Holberton project
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 * @n: Integer value stored in the node
 * @index: Position of the node in the list
 * @next: Pointer to the next node in the list
 * @express: Pointer to the node in the express lane
 * Description: Node structure for a singly linked list with an express lane
 * used in Holberton project
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

void print_array(int *array, size_t size;
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
