#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i;
	int add;
	int en;

	add = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		add += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - add) - '0' < 78)
		{
			en = 2772 - add - '0';
			add += en;
			putchar(en + '0');
			break;
		}
	}
	return (0);
}
