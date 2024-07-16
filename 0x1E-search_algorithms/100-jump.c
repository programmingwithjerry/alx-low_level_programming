#include "search_algos.h"
#include <math.h>

/**
 * jump_search - performs Jump search algorithm to find a value in an array
 *
 * @array: pointer to the first element of the input array
 * @size: number of elements in the array
 * @value: the value to search for in the array
 * Return: index of the found value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int c_index, block_size, step, prev_index;

	if (array == NULL || size == 0)
		return (-1);

	block_size = (int)sqrt((double)size); /* Calculate block size */
	step = 0;
	prev_index = c_index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", c_index,
			array[c_index]);

		if (array[c_index] == value)
			return (c_index); /* Value found at current index */
		step++;
		prev_index = c_index;
		c_index = step * block_size; /* Jump to next block */
	} while (c_index < (int)size && array[c_index] < value);

	printf("Value found between indexes [%d] and [%d]\n",
		prev_index, c_index);

	/* Perform linear search within the identified block */
	for (; prev_index <= c_index && prev_index < (int)size; prev_index++)
	{
		printf("Value checked array[%d] = [%d]\n", prev_index,
			array[prev_index]);
		if (array[prev_index] == value)
			/* Value found in linear search within the block */
			return (prev_index);
	}

	return (-1); /* Value not found */
}
