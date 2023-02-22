#include "main.h"

/**
 * print_alphabet_x10- prints alphabets in lowercase ten times
 * Return: if 1 then it returns successfully or -1 for errors
 */

void print_alphabet_x10(void)
{
	char alpha;
	char num;

	for (num = 0; num <= 9; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
