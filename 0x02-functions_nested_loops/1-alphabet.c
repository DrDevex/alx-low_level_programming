#include "main.h"

/**
 * print_alphabet- Prints all the alphabet in lowercase
 * Return: 1 means it runs success and returns -1 if fail
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
