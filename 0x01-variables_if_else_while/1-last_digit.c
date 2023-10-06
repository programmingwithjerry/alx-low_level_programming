#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - E prints the last digit of the random number each time the program runs
 * random number stored in the variable n each time
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int my_test;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	my_test = n % 10;
	if (my_test > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, my_test);
	}
	else if (my_test == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, my_test);
	}
	else if (my_test < 6 && my_test != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, my_test);
	}
	return (0);
}
