#include <stdio.h>

/**
 * main- Prints all possible combination of two digits
 * Return: when 0 it returns the function succesfully
 */

int main(void)
{
	int num;
	int num1;

	for (num = '0'; num < '9'; num++)
	{
		for (num1 = '0'; num1 <= '9'; num1++)
		{
			if (num == '0' && num1 < '1')
				continue;
			if (num == '1' && num1 < '2')
				continue;
			if (num == '2' && num1 < '3')
				continue;
			if (num == '3' && num1 < '4')
				continue;
			if (num == '4' && num1 < '5')
				continue;
			if (num == '5' && num1 < '6')
				continue;
			if (num == '6' && num1 < '7')
				continue;
			if (num == '7' && num1 < '8')
				continue;
			if (num == '8' && num1 < '9')
				continue;
			putchar(num);
			putchar(num1);
			if (num == '8' && num1 < '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
