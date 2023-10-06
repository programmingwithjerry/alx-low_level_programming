#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 * starting from 0,
 * followed by a new line, using putchar twice only
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n_base_ten;

	for (n_base_ten = 22; n_base_ten < 32; n_base_ten++)
	{
		putchar(n_base_ten);
	}
	putchar('\n');
	return (0);
}
