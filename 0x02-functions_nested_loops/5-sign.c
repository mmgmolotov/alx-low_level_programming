#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: number
 *
 * Return: 1 if n+ 0 if nzero -1 if n-
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
	_putchar('\n');
}
