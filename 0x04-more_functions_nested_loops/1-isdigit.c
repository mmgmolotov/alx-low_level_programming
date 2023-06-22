#include "main.h"

/**
 * _isdigit - check for alphabetic char
 *@c: the char needed to check
 *
 * Return: 1 if c is a letter or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
	_putchar('\n');
}
