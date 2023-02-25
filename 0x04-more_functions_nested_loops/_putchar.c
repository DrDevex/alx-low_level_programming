#include "main.h"
#include <unistd.h>

/**
 * _putchar- display c to stdout
 * @c: The character to print
 * Return: 1 on success and -1 error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
