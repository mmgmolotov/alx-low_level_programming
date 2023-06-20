#include "main.h"

/**
 *_islower - check for low_case char
 *@c: is the char need to be checked
 *
 *Return: 1 for lowercase or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
