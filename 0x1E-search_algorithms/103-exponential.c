#include "search_algos.h"

/**
 * my_binary_search - Performs binary search on a sorted array.
 * @array: Pointer to the first element of the array.
 * @left: Starting index of the subarray to search.
 * @right: Ending index of the subarray to search.
 * @value: Target value to search for.
 *
 * Return: Index where value is found, or -1 if not found or array is NULL.
 *
 * Description: Prints the subarray being searched after each step.
 */
int my_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Continue searching while the subarray is valid */
	while (right >= left)
	{
		/* Print the current subarray being searched */
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		/* Calculate the middle index */
		mid = left + (right - left) / 2;

		/* Check if the middle element is the target value */
		if (array[mid] == value)
			return (mid);
		/* If the middle element is greater, search the left subarray */
		if (array[mid] > value)
			right = mid - 1;
		/* If the middle element is smaller, search the right subarray*/
		else
			left = mid + 1;
	}

	/* Return -1 if the value is not found */
	return (-1);
}

/**
 * exponential_search - Performs exponential search on a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Target value to search for.
 * Return: Index where value is found, or -1 if not found or array is NULL.
 * Description: Prints each element checked during the search.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right_bound;

	/* Check if array is NULL */
	if (array == NULL)
		return (-1);

	/* Check if the first element is the target value */
	if (array[0] != value)
	{
		/**
		*Exponentially increase the index to find a range where
		* the value may exist
		*/
		for (i = 1; i < size && array[i] <= value; i *= 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	/* Determine the right boundary for the binary search */
	right_bound = (i < size) ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i /
		2, right_bound);
	/* Perform binary search within the found range */
	return (my_binary_search(array, i / 2, right_bound, value));
}
