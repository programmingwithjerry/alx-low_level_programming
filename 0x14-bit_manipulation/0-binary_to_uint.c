#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or
 * 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal_value = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		/*Check if the current character is not '0' or '1'*/
		if (b[i] < '0' || b[i] > '1')
			return (0);

		/*Update the decimal value using the binary representation*/
		decimal_value = 2 * decimal_value + (b[i] - '0');

		/*Increment the loop counter*/
		i++;
	}
	return (decimal_value);
}
