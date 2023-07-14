#include "main.h"
#include <ctype.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int num_checker(char *num);
char *multiply(char *num1, char *num2, char *result);


/**
 * main - entry point
 *
 * Description: multiply two numbers
 *
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 (success) / 98 (if failed)
 *
*/


int main(int argc, char **argv)
{
	char *n1 = argv[1];
	char *n2 = argv[2];
	char err[] = "Error\n";
	char *result;
	int i, l1, l2, l;

	if (argc != 3 || num_checker(n1) != 0 || num_checker(n2) != 0)
	{
		for (i = 0; err[i] != '\0'; i++)
			_putchar(err[i]);
		exit(98);
	}

	l1 = strlen(argv[1]);
	l2 = strlen(argv[2]);
	l = l1 + l2;

	result = malloc((l + 1) * sizeof(char));
	if (result == NULL)
	{
		for (i = 0; err[i] != '\0'; i++)
			_putchar(err[i]);
		exit(98);
	}
	memset(result, '0', (l + 1) * sizeof(char));
	result[l] = '\0';

	result = multiply(n1, n2, result);

	for (i = 0; result[i] != '\0'; i++)
		_putchar(result[i]);

	_putchar('\n');

	return (0);
}


/**
 * num_checker - function
 *
 * Description: checks if a string char is a number
 *
 * @num: string to check
 *
 * Return: 0 (number) / 1 (else)
 *
*/


int num_checker(char *num)
{
	int i, len = strlen(num);

	for (i = 0; i < len; i++)
	{
		if (isdigit(num[i]) == 0)
			return (1);
	}
	return (0);
}


/**
 * multiply - function
 *
 * Description: multiply two numbers (str char)
 *
 * @num1: number
 * @num2: number
 * @result: result
 *
 * Return: result (pointer)
 *
*/


char *multiply(char *num1, char *num2, char *result)
{
	int l1 = strlen(num1), l2 = strlen(num2), i, j;
	int n1, n2, sum, carry, l;

	for (i = l1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = l2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = (result[i + j + 1] - '0') + (n1 * n2) + carry;
			result[i + j + 1] = (sum % 10) + '0';
			carry = sum / 10;
		}

		result[i] += carry;
	}
	i = 0;
	while (result[i] == '0')
		i++;

	l = l1 + l2 - i;
	for (j = 0; j < l; j++)
		result[j] = result[j + i];

	result[l] = '\0';

	return (result);
}
