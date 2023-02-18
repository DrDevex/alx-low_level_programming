#include <stdio.h>

/**
 * main - prints all possible combination of single digit numbers
 * return - always 0 means sucess
 */

int main()
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return(0);
}
