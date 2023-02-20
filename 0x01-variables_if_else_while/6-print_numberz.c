#include <stdio.h>

/**
 * main- prints all single digit starting from 0 to 10
 * Return: always 0 means success
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
