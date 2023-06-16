#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int nwimra;

	for (nwimra = 0 ; nwimra <= 9 ; nwimra++)
	{
		putchar(nwimra + '0');
	}
	putchar('\n');
	return (0);
}
