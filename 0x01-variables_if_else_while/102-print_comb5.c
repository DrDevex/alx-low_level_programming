#include <stdio.h>

/**
 * main- prints combination of two two-digit numbers
 * Return: if 0 then returns function successfully
 */

int main(void)
{
	int num1;
	int num2;

	for (num2 = num1 + 1; num2 <= 99; num2++)
	{
		putchar((num1 / 10) + '0');
		putchar((num1 % 10) + '0');
		putchar(' ');
		putchar((num2 / 10) + '0');
		putchar((num2 % 10) + '0');

		if (num1 == 98 && num2 == 99)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
