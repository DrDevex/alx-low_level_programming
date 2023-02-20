#include <stdio.h>

/**
 * main- is the function and prints a-z
 * Return:  Always 0 which means Success
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
