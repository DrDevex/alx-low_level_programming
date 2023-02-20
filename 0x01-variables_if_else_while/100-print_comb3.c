#include <stdio.h>

/**
 * main- Prints all possible combination of two digits
 * Return: when 0 it returns the function succesfully
 */

int main(void)
{
	int num = '0';
	int num1 = '0';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			if (!(num1 > num2 || num1 == num2))
			{
				putchar(num1);
				putchar(num2);
				if (num1 == '8' && num2 == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num2 = '0';
		num1++;
	}
	return (0);
}
