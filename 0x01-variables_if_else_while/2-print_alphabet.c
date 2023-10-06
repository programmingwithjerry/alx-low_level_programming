#include <stdio.h>

/**
 * main - To print the alphabets, all in lowercase
 *
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char all_ch;
	all_ch = 'a';
	while (all_ch <= 'z')
	{
		putchar(all_ch);
		all_ch++;
	}
	putchar('\n');
	return (0);
}
