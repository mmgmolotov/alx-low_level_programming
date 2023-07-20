#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds a and b
 * @a: 1st number
 * @b: 2nd number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract b from a
 * @a: 1st number
 * @b: 2nd number
 * Return: diff of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply a & b
 * @a: 1st num
 * @b: 2nd num
 * Return: multiplication of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a by b
 * @a: 1st number
 * @b: 2nd number
 * Return: division a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculate remainder of the division of a by b
 * @a: 1st number
 * @b: 2nd number
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
