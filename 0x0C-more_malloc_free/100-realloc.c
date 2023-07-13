#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *_realloc - function that reallocates a memory block using malloc and free
 * @new_size: arg
 * @old_size: arg
 * @ptr: arg
 *
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr != NULL)
	{
		memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);
		free(ptr);
	}
	return (new_ptr);
}
