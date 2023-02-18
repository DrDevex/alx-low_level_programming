#include <stdio.h>

/**
 * main - prints numbers of base 10
 * return = 0 (success)
 */

int main()
{
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n++;
	}
	putchar('\n');

	return (0);
}
