#include "main.h"

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_binary - prints the binary representation of a number
 * @n: the  parameter
 */

void print_binary(unsigned long int n)
{
	int i = 63;
	int count_zeros = 0;
	unsigned long int current_bit;

	while (i >= 0)
	{
		current_bit = n >> i;

	if (current_bit & 1)
	{
		_putchar('1');
		count_zeros++;
	}
	else if (count_zeros)
	{
		_putchar('0');
	}

	/* Decrement the loop count_zeroser */
	i--;
	}

	if (!count_zeros)
	{
		_putchar('0');
	}
}
