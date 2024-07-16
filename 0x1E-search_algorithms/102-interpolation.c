#include "search_algos.h"

/**
 * interpolation_search - performs interpolation search on a sorted array
 * @array: pointer to the initial element of the array to search
 * @size: total number of elements in the array
 * @value: target value to locate in the array
 *
 * Return: the first index where value is located, or -1 if value is not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t left, mid, right;

	/* Check if array is not NULL and has elements */
	if (array != NULL && size > 0)
	{
		left = 0;
		right = size - 1;
		/* Continue searching as long as elements are different */
		while (array[left] != array[right])
		{
			/*
			*Calculate the mid-point using
			* the interpolation formula
			*/
			mid = left + (((double)(right - left) / (array[right] -
					array[left])) * (value - array[left]));
			/* Check if mid is out of the array bounds */
			if (mid < left || mid > right)
			{
				printf("Value checked array[%lu]
					is out of range\n", mid);
				break;
			}
			/* Print the current element being checked */
			printf("Value checked array[%lu] = [%d]\n",
				mid, array[mid]);

			/* If value found, return the index */
			if (array[mid] == value)
				return (mid);
			/* If value is larger, adjust the left boundary */
			if (array[mid] < value)
				left = mid + 1;
			/* If value is smaller, adjust the right boundary */
			else
				right = mid - 1;
		}
	}
	/* Return -1 if value is not found */
	return (-1);
}
