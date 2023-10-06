#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 * using putchar five times only
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	x = 48;
	y = 48;

	while (y < 58)
	{
		x = 48;
		while (x < 58)
		{
			if (y != x && y < x)
			{
				putchar(y);
				putchar(x);

				if (x == 57 && y == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ')
			}
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
