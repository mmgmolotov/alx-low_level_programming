#include "main.h"
/**
 * _strcat - A function that concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: The concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	/*Move to the end of the destination string*/
	while (*dest)
		dest++;

	/*Copy the source string to the end of the destination string*/
	while (*src)
		*dest++ = *src++;

	/*Add the null-terminating character at the end*/
	*dest = '\0';

	/*Return the original address of the destination string*/
	return (temp);
}
