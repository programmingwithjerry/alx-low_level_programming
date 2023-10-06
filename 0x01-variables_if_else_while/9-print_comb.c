#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * using putchar max four times only
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n_digits;

	for (n_digits = 48; n_digits < 58; n_digits++)
	{
		putchar(n_digits);
		if (n_digits != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
