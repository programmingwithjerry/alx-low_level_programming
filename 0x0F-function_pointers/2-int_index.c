#include "function_pointers.h"

/**
*int_index - This searches for an integer
*@array: an array containing elements
*@size: The number of elements in the array
*@cmp: function that compare given values
*Return: returns -1 if no element match
* or when size is less than zero
*return pointer to the first corresponding element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i_count = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; i_count < size; i_count++)
	{
		if (cmp(array[i_count]) != 0)
		return (i_count);
	}

	return (-1);

}
