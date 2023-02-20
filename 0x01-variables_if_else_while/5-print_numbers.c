#include <stdio.h>

/**
 * main- prints numbers of base 10
 * Return: 0 (success)
 */

int main(void)
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
