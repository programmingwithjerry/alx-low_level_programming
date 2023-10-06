#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char my_char;

	for (my_char = 'a'; my_char <= 'z'; my_char++)
	{
		if (my_char != 'e' && my_char != 'q')
		{
			putchar(my_char);
		}
	putchar('\n');
	}
	return (0);
}
