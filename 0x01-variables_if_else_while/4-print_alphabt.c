#include <stdio.h>

/**
 * main - prints all letters except q and e
 * return - always 0 which means success
 */

int main()
{
	char alphabet = 'a';
	
	while (alphabet <= 'z')
	{
		if ((alphabet != 'q') && (alphabet != 'e'))
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}
