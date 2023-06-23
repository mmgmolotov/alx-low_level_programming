#include "main.h"

/**
  * print_square - Prints n squares / n number of times
  * @size: nbr of squares/number of times
  *
  * Return: void
  */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
