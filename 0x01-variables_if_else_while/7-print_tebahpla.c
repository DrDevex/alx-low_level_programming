#include <stdio.h>

/**
 * main - outputs the alphabets in inverse
 * return - 0 means success
 */

int main()
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
