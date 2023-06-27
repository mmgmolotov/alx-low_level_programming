#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s:string that will be reverted
 *
 * Return: void
 */
void print_rev(char *s)
{
	int L = 0;

	/*L : lenght */
	while (s[L] != '\0')
	{
		L++;
	}
	/* hadi dyal reverse fiha decrem.*/
	for (L -= 1; L >= 0 ; L--)
	{
		_putchar (s[L]);
	}
	_putchar('\n');
}
