#include "main.h"

/**
*string_toupper - changes all lowercases letters of a string to uppercase
*@str: parameter
*Return: returns a character
*/

char *string_toupper(char *str)
{
	int i_counter = 0;

	for (i_counter = 0; str[i_counter] != '\0'; i_counter++)
	{
		if (str[i_counter] >= 'a' && str[i_counter] <= 'z')
			str[i_counter] -= 32;
	}

	return (str);
}
