#include "main.h"
/**
 * reverse_array - a function that reverse an array
 * @a : the name of aray to be reversed
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
