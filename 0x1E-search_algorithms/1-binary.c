#include "search_algos.h"

/**
 * print_array - displays the elements of an integer array
 * @array: pointer to the first element of the array
 * @size: total number of elements in the array
 *
 * Return: void
 */
void print_array(int *array, size_t size)
{
	size_t index; /* Loop counter variable */

	printf("Searching in array:"); /* Print initial message */
	for (index = 0; index < size; index++) /* Loop through the array */
	{
		printf(" %d", array[index]); /* Print current element */
		if (index != size - 1) /* Check if it's not the last element*/
			printf(","); /* Print a comma after the element */
	}
	printf("\n"); /* Print a newline at the end */
}




/**
 * binary_search - locates a value in a sorted array of integers using the
 * binary search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: the value to search for
 *
 * Return: index of the value if found, or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Initialize the search boundaries */
	for (left = 0, right = size - 1; right >= left;)
	{
		/* Print the current range of the array being searched */
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		/* Calculate the middle index */
		mid = left + (right - left) / 2;
		
		/* Check if the middle element is the target value */
		if (array[mid] == value)
			return (mid);

		/*
		* If the middle element is greater than the target value,
		*search the left half
		*/
		if (array[mid] > value)
			right = mid - 1;
		else
			/*
			* If the middle element is less than the target value,
			*search the right half
			*/
			left = mid + 1;
	}

	/* If the value is not found, return -1 */
	return (-1);
}
