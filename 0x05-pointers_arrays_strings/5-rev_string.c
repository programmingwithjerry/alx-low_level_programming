#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reversed format
 */

void rev_string(char *s)
{
	char rev_string = s[0];
	int my_counter = 0;
	int i;

	while (s[my_counter] != '\0')
		my_counter++;
	for (i = 0; i < my_counter; i++)
	{
		my_counter--;
		rev_string = s[i];
		s[i] = s[my_counter];
		s[my_counter] = rev_string;
	}
}
