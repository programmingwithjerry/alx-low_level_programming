#include "main.h"

/**
 * get_bit - returns the value of a bit_value at a given index.
 * @n: parameter
 * @index: the index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	bit_value = (n >> index);
	if (index > 32)
	return (-1);
	return (bit_value & 1);
}
