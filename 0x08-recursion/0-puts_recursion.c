#include "main.h"
/**
 *_puts_recursion - function that prints a string,
 *followed by a new line.
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s)
	{
		_puts_recursion(s);
	}
	if (*s == ('\0'))
	{
		_putchar('\n');
	}
}
