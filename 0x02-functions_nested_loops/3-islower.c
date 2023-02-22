#include "main.h"

/**
 *_islower- main function of this code
 * Return: 1 means successful and -1 if failed
 * @c: character to compare
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
