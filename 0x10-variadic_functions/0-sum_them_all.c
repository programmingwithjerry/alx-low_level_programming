#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* sum_them_all - return sum of all its given arguments
* @n: numbers to add together
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(ptr, int);
		i++;
	}

	va_end(ptr);
	return (sum);
}
