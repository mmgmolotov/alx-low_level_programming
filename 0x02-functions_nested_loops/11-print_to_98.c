#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - function that prints all
 *natural numbers from n to 98
 *@n: number to be computed
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
	printf("%d, ", n);
	n++;
	}
	while (n > 98)
	{
	printf("%d, ", n);
	n--;
	}
	printf("98\n");
}
