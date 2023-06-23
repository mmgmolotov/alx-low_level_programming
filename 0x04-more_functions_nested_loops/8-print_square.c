#include "main.h"

/**
  * print_square - Prints n squares / n number of times
  * @size: nbr of squares/number of times
  *
  * Return: void
  */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(b);
			}

			_putchar('\n');
		}
	}
}
