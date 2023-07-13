#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb: arg elements
 * @size: arg size
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
	for (i = 0; i < (nmemb * size); i++)
	{
		a[i] = 0;
	}
	return (a);
}
