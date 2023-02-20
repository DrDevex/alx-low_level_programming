#include <stdio.h>

/**
 *main-  prints out all combination of three digits
 *Return: if 0 it returns the function and is successful
 */

int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++)
	{
		for (ten = (hundred + 1); ten <= '9'; ten++)
		{
			for (one = (ten + 1); one <= '9'; one++)
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	putchar('\n');
	return (0);
	}
