#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
	char alphabetInv;

	for (alphabetInv = 'z'; alphabetInv >= 'a'; alphabetInv--)

		putchar(alphabetInv);

	putchar('\n');
	return (0);
}
