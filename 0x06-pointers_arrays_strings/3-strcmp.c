#include "main.h"
/**
 * _strcmp - a function that compares 2 strings
 * @s1: the first string
 * @s2: the second string
 * Return: + or  if not the same 0 if they are the same
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((s1[i] - s2[i]));
		}
		i++;
	}
	return (0);
}
