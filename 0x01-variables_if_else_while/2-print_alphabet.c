#include <stdio.h>

/**
 * main - is the function and when the compilation start it prints lowercase of a-z
 * Return - Always 0 which means Success
 */

int main()
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
