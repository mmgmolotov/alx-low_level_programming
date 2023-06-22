#include "main.h"

/**
 * more_numbers - print 10 times nums, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int lines, nums;

	for (lines = 0; lines < 10; ++lines)
	{
		for (nums = 0; nums <= 14; ++nums)
		{
			if (nums >= 10)
				_putchar('0' + nums / 10);
			_putchar('0' + nums % 10);
		}
		_putchar('\n');
	}
}
