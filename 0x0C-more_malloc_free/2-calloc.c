#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: arg elements
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);
	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = nmemb;
	}
	return (a);
}
