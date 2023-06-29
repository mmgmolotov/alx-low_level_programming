#include "main.h"
/**
 * _strcat - a funtion that concatenate 2 strings
 * @dest: the dest string
 * @src: the src string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
