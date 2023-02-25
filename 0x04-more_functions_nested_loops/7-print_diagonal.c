#include "main.h"

/**
 * print_diagonal- print a backlash
 * @n: says how many backlash this function is going to print
 * Return: The respective quantity of backlash
 */
void print_diagonal(int n)
{
	int i, j;

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (j <= i)
				{
					if (j == i)
						_putchar('\\');
					else
						_putchar(' ');
				}
				else
				{
					if (j == n)
						_putchar('\n');
				}
			}
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
