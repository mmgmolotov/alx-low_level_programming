#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 **string_nconcat - function that concatenates two strings
 *@s1: arg str 1
 *@s2: arg str 2
 *@n: arg
 *
 * Return: stt
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2  = strlen(s2);
	if (n >= len2)
		n = len2;
	a = malloc(len1 + n + 1);

	if (a != NULL)
	{
		strcpy(a, s1);
		strncat(a, s2, n);
	}
	return (a);
}
