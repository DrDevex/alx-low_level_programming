#include "main.h"

/**
 * void print_alphabet_x10(void)- prints alphabets in lowercase ten times
 * Return: if 1 then it returns successfully or -1 for errors
 */

void print_alphabet_x10(void)
{
	char alpha = 'a';
	char num = 1;

	while (alpha <= 'z')
	{
		alpha++;
		while (num <= 10)
		{
			num++;
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
