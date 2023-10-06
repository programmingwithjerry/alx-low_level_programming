#include <stdio.h>

/**
 * main - Prints all single digit numbers of
 * Base 10 starting from 0, followed
 * by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n_base_ten;

	n_base_ten = 0;
	while (n_base_ten < 10)
	{
		printf("%d\n", n_base_ten);
		n_base_ten++
	}
	return (0);
}
