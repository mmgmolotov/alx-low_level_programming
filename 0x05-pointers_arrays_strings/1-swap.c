#include "main.h"
/**
 * swap_int - Function that swaps values of two integers.
 * @a: integer to be swaped his value with b
 * @b: integer to be swaped with a value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
