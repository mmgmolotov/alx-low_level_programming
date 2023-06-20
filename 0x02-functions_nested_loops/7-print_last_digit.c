#include "main.h"

/**
 *print_last_digit - function that prints the last digit of a number
 *@n: num to be checked
 *
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int lastD;

	lastD = n % 10;
	if (lastD < 0)
	{
		lastD = lastD * -1;
	}
	_putchar(lastD + '0');
	return (lastD);
}
