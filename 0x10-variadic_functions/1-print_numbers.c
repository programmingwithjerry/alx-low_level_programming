#include "variadic_functions.h"

/**
*print_numbers - prints numbers followed by
*new my_listne
*@separator: string to be printed between numbers
*@n: number of integer to be passed to the function
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(my_list, int));

		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(my_list);

}
