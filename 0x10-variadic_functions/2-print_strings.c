#include "variadic_functions.h"

/**
* print_strings - prints strings, followed by a new line
* @separator: the string to be printed between the strings
* @n: number of strings passed to the function
* Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	char *str;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_list, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		while (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
			break;
		}

	}

	printf("\n");
	va_end(my_list);
}
