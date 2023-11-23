#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: n is a parameter
 * @index: the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is greater than the number of bits in unsigned long int*/
	if (index > sizeof(n) * 8)
		return (-1);

	/*Clear the bit at the specified index to 0 using bitwise */
	*n &= ~(1 << index);

	/*Return 1 to indicate success*/
	return (1);
}
