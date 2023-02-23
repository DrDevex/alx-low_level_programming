#include "main.h"

/**
 * print_last_digit- Prints the last digit of a number
 * @n: The number to be compared and printed
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
