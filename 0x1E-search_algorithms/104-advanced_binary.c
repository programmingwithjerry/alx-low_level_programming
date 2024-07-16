#include "search_algos.h"

/**
 * rec_search - Recursively searches for a value in a
 *sorted array of integers using binary search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or
 * -1 if not found or array is NULL.
 */
int rec_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	/* Check if the array is NULL or size is zero */
	if (array == NULL || size == 0)
		return (-1);

	/* Print the current subarray being searched */
	printf("Searching in array");
	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	/* Adjust mid if the size is even to get the lower middle element */
	if (mid && size % 2 == 0)
		mid--;

	/* If the value is found at mid, return the index */
	if (value == array[mid])
	{
		/**
		* If mid is greater than 0, continue searching in
		* the left subarray
		*/
		if (mid > 0)
			return (rec_search(array, mid + 1, value));
		return ((int)mid);
	}

	/**
	* If the value is smaller than the middle element,
	* search in the left subarray
	*/
	if (value < array[mid])
		return (rec_search(array, mid + 1, value));

	/* If the value is greater, search in the right subarray */
	mid++;
	return (rec_search(array + mid, size - mid, value) + mid);
}

/**
 * advanced_binary - Initiates a recursive search to find
 * the index of a value in a sorted array.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 * Return: The index where the value is located, or
 *-1 if not found or array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	/* Call the recursive search function */
	index = rec_search(array, size, value);

	/* Check if the index found does not contain the value */
	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
