#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size:size of array
 * @c:specific char
 *
 * Return: the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
