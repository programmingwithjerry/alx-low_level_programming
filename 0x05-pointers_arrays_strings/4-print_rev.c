#include "main.h"
/*
 * print_rev - print reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int ori_string = 0;
	int copy_string;

	while (*s != '\0')
	{
		ori_string++;
		s++;
	}
	s--;
	for (copy_string = ori_string; copy_string > 0; copy_string--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
