#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	/*Declare an unsigned integer 'i' and initialize it to 1*/
	unsigned int i = 1;

	/*Declare a character pointer 'c' and set it to the address of 'i'*/
	char *c = (char *) &i;

	/*Return the value stored at the memory location pointed to by 'c'*/
	return (*c);
}

