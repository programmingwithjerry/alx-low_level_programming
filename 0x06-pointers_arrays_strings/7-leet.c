#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @c: Represents string of variable pointer
 * Return: Returns string that is encoded
 */

char *leet(char *c)
{
	char *cp = c;
	char alpha_key[] = {'A', 'E', 'O', 'T', 'L'};
	int num_value[] = {4, 3, 0, 7, 1};
	unsigned int k;

	while (*c)
	{
		for (k = 0; k < sizeof(alpha_key) / sizeof(char); k++)
		{
			/*32 is the difference between lower case letters and apper case letters*/
			if (*c == alpha_key[k] || *c == alpha_key[k] + 32)
			{
				*c = 48 + num_value[k];
			}
		}
		c++;
	}

	return (cp);

}
