#include "main.h"
/**
 *factorial - function that returns the factorial of a given number.
 *@n:given number
 *
 *Return: If n is lower than 0 return  -1 for errors, factorial value
 */
int factorial(int n)
{
	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	return (-1);
	return (n * factorial(n - 1));
}
