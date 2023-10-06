#include <stdio.h>

/**
 * main - prints all possible different combinations of
 * three digits using putchar six times only
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nu, ma, li;

	for (nu = 48; nu < 58; nu++)
	{
		for (ma = 49; ma < 58; ma++)
		{
			for (li = 50; li < 58; li++)
			{
				if (l > ma && ma > nu)
				{
					putchar(nu);
					putchar(ma);
					putchar(li);
					if (nu != 55 || ma != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
