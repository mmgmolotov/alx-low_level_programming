#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 * @s: string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int Count = 0;

	while (*s != ('\0'))
	{
	s++;
	Count++;
	}
	return (Count);
}
