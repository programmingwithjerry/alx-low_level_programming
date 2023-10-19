#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int j;
	char *p = dest;

	while (*p != '\0')
	{
		p++
	}

	j = 0;

	while (src[j] != '\0')
	{ 
		*p = src[j];
		p++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
