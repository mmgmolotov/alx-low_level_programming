#include "main.h"
#include <stdlib.h>
/**
 * *array_range - function that creates an array of integers.
 * @min: min element
 * @max: max element
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *p;
	int i;
	int size = max - min + 1;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
