#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 *
*/
int main(void)
{
	int n1;
	int n2;


	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			if (n1 < n2 && n1 != n2)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');

				if (n1 != 8 || n2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
