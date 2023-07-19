#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array:array arg
 * @size:array size
 * @cmp:function that we need to use to compare values
 *
 * Return: if no element matches, return -1 otherwise 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL || cmp != NULL)
	if (size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
