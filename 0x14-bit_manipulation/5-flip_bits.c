#include "main.h"

/**
 * flip_bits - function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: re quired parameter
 * @m: another parameter
 * Return:  Returns the total number of bit flips counted
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*Declare variables for loop control and counting the number of flips*/
	unsigned int i = 0, num_of_flips = 0;

	/*Declare a variable to represent the number of bits in an unsigned long int*/
	unsigned long int k = sizeof(unsigned long int) * 8;

	/* Use a while loop to iterate through each bit position*/

	while (i < k)
	{
		/*Check if the rightmost bits of n and m are different*/
		if ((m & 1) != (n & 1))
			num_of_flips += 1;

		/*Right shift n and m to consider the next bit position*/
		n = n >> 1;
		m = m >> 1;

		/*Increment the loop counter*/
		i++;
	}

	/*Return the total number of bit flips*/
	return (num_of_flips);
}
