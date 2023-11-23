#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: parameter
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is greater than thenumber of bits*/
	if (index > sizeof(n) * 8)
		return (-1);

	/*Set the bit at the specified index to 1 using bitwise OR*/
	*n |= (1 << index);

	/* Return 1 to indicate success*/
	return (1);
}
