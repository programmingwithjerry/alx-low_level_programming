#include "search_algos.h"

/**
 * linear_search - performs a linear search for a value in an array.
 * @array: pointer to the start of the array to search within
 * @size: total number of elements in the array
 * @value: the value to locate in the array
 *
 * Return: the index of the first occurrence of value, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index; /* Loop counter variable */
	int current_element; /* Variable to hold the current array element */

	/* Check if the array is not NULL */
	if (array != NULL)
	{
		/* Iterate through the array */
		for (index = 0; index < size; index++)
		{
			/* Get the current element from the array */
			current_element = array[index];
			/* Print the current index and value being checked */
			printf("Value checked array[%lu] = [%d]\n",
				index, current_element);
			/*
			*Check if the current element matches the value
			*we're searching for
			*/
			if (current_element == value)
				/* Return the index of the found value */
				return (index);
		}
	}
	/* Return -1 if the value is not found in the array */
	return (-1);
}
