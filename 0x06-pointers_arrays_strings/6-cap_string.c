#include "main.h"
/**
 *cap_string - capitalizes every first letter of a word in a string.
 *word separators:  space, tabulation, new line,
 *(, ), {, and }.
 *@s: pointer to string.
 *Return: pointer to s.
 */
char *cap_string(char *s)
{
	int i_counter;

/*  scan through provided string */
	i_counter = 0;
	for (i_counter = 0; s[i_counter] != '\0'; i_counter++)
	{/* if next character after i_counter is a char, change it to uppercase*/
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[i_counter] == ' ' || s[i_counter] == '\t' || s[i_counter] == '\n'
		    || s[i_counter] == ',' || s[i_counter] == ';' || s[i_counter] == '.'
		    || s[i_counter] == '.' || s[i_counter] == '!' || s[i_counter] == '?'
		    || s[i_counter] == '"' || s[i_counter] == '(' || s[i_counter] == ')'
		    || s[i_counter] == '{' || s[i_counter] == '}')
		{
			if (s[i_counter + 1] >= 97 && s[i_counter + 1] <= 122)
			{
				s[i_counter + 1] = s[i_counter + 1] - 32;
			}
		}
		i_counter++;
	}
	return (s);
}
