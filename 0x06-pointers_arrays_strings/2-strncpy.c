#include "main.h"
/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A ptr to the res string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}
