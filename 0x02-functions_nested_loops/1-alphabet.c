#include "main.h"
/**
 * print_alphabet - function that prints alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	_putchar(alpha);
	alpha++;
	}
	_putchar('\n');
}

