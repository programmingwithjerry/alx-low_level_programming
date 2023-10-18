#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, loni;

	loni = 0;

	for (a = 0; str[a] != '\0'; a++)
		loni++;

	n = (loni / 2);

	if ((loni % 2) == 1)

		n = ((loni + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
