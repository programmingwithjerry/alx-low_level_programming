#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * order followed by a new line overall
 * 
 * using putchar only twice
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char rev_char;
	
	for (rev_char = 'z'; rev_char >= 'a'; rev_char--)
	{
		putchar(rev_char);
	}
	putchar('\n');
	return (0);
}
