#include "main.h"

/**
 * _isalpha - check for alphabetic char
 *@c: the char needed to check
 *
 * Return: 1 if c is a letter or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
