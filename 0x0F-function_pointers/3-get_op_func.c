#include "3-calc.h"
#include <stdlib.h>

/**
*get_op_func - selects the correct function to perform
*the operation asked by the user.
*Don't declare any other function.
*@s: operator passed as argument
*Return: A pointer to the function corresponding to
*the operator given in the parameter
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i_count = 0;

	while (ops[i_count].op != NULL && *(ops[i_count].op) != *s)
		i_count++;

	return (ops[i_count].f);

}
