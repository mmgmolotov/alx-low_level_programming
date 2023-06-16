#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int b16;
	char alph;

	for (b16 = 0 ; b16 <= 9 ; b16++)
	{
		putchar(b16 + '0');
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
