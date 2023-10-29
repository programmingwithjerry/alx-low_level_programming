#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
	int tmp_store, i_counter;

	for (i_counter = n - 1; i_counter > n / 2; i_counter--)
	{
	tmp_store = a[n - 1 - i_counter];
	a[n - 1 - i_counter] = a[i_counter];
	a[i_counter] = tmp_store;
	}
}
