#include "main.h"

/**
 * jack_bauer - function that print every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hh;
	int mm;

	for (hh = 0; hh < 24; hh++)
	for (mm = 0; mm < 60; mm++)
	{
		_putchar('0' + (hh / 10));
		_putchar('0' + (hh % 10));
		_putchar(':');
		_putchar('0' + (mm / 10));
		_putchar('0' + (mm % 10));
		_putchar('\n');
	}
}
