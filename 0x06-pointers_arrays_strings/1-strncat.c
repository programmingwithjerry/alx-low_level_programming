#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings. it will use at
 * most n bytes from src
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_counter, src_counter;

	dest_counter = 0;
	while (dest[dest_counter] != '\0')
	{
		dest_counter;
	}

	for (src_counter = 0; src_counter < n && src[src_counter] != '\0'; src_counter++)
		{
			dest[dest_counter] = src[src_counter];
			dest_counter++;
		}
	if (src_counter < n)
	{
		dest[dest_counter] = '\0';
	}

	return (dest);
}
