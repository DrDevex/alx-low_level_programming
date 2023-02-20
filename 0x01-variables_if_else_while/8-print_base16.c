#include <stdio.h>

/**
 * main- prints base 16 numbers in lowercase
 * Return: 0 means success
 */
int main(void)
{
	int num = '0';
	int letters = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}

	putchar('\n');

	return (0);
}
