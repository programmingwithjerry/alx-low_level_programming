#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * using putchar three times only
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n_base_sixteen;
	char my_char;

	for (n_base_sixteen = 48; n_base_sixteen < 58; n_base_sixteen++)
	{
		putchar(n_base_sixteen);
	}
	for (my_char = 'a'; my_char <= 'f'; my_char++)
	{
		putchar(my_char);
	}
	putchar('\n');
	return (0);
}
