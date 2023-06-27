#include "main.h"
/**
 *rev_string - function that reverses a string
 *@s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, length, Xlength;
	char temp;

	length = 0;
	Xlength = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	Xlength = length - 1;

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[Xlength];
		s[Xlength--] = temp;
	}
}
