#include "main.h"
/**
 * _strncat - Write a function that concatenates two strings.
 * it will use at most n bytes from src
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_counter, src_count;

	dest_counter = 0;

	while (dest[dest_counter] != '\0')
	{
		dest_counter;
	}

	for (src_count = 0; src_count < n && src[src_count] != '\0'; src_count++)
	{
		dest[dest_counter] = src[src_count];
		dest_counter++;
	}

	if (src_count < n)
	{
		dest[dest_counter] = '\0';
	}

	return (dest);
}
