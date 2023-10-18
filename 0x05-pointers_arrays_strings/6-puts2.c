#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int ori_string; int tip; int opay;
	char *y = str;
	
	ori_string =tip = 0;

	while (*y != '\0')
	{
		y++;
		ori_string++;
	}
	tip = ori_string - 1;
	for (opay = 0 ; opay <= tip ; opay++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
