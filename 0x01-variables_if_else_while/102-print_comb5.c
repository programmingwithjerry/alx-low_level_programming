#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 * using putchar sixtimes only
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ki;
	int ja;

	for (ki = 0; ki < 100; ki++)
	{
		for (ja = 0; ja < 100; ja++)
		{
			if (ki < ja)
			{
				putchar((ki / 10) + 48);
				putchar((ki % 10) + 48);
				putchar(' ');
				putchar((ja / 10) + 48);
				putchar((ja % 10) + 48);

				if (ki != 98 || ja != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
