#include "function_pointers.h"

/**
*array_iterator - executes a function on each element of an array
*@array: targeted array
*@size: size of array
*@action: function which will be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (; size > 0; size--)
	{
		action(*array);
		array++;
	}

}
