#include "main.h"
/**
* _abs - Function that computes the absolute value
*
* @n: number of int
*
* Return: -n if n<0 or n else if
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	_putchar('\n');
}
