#include <stdio.h>
/**
*main - Entry point
*
*Return: 0 (success)
*/
int main(void)
{
	int cnum;

	for (cnum = 0 ; cnum <= 9 ; cnum++)
	{
		putchar(cnum + '0');
		if (cnum == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
