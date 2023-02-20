#include <stdio.h>

/**
 * main- outputs the alphabets in inverse
 * Return:- 0 means success
 */

int main(void)
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
