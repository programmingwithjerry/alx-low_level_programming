#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 *
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int my_char;

	my_char = 'a';
	while (my_char <= 'z')
	{
		putchar(my_char);
		my_char++;
	}
	for (my_ch = 'A'; my_ch <= 'Z'; my_ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
