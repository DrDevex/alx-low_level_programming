#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to variable in each time
 * it executes an prints it
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Last digit of %i is %i and is ", n, (n % 10));

	if ((n % 10) > 5)
	{
		printf("grater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
