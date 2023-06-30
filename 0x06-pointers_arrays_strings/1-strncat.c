#include "main.h"
/**
 * _strncat - a function that convatenates 2 strings
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}
	if (n > srclen)
	{
		n = srclen;
	}
	src = start;

	for (; i < n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
