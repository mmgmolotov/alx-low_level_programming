#include "main.h"
/**
 * times_table - function that prints the
 * 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int x, y, z, U, T;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (z > 9)
			{
				U = z % 10;
				T = (z - U) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(T + '0');
				_putchar(U + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}


