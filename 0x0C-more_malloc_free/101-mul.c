#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * multiply_numbers - mul numbers
 * @num1: arg
 * @num2: arg
 *
 * Return: result
 */
int multiply_numbers(char *num1, char *num2)
{
	int number1, number2, result, i;

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	number1 = atoi(num1);
	number2 = atoi(num2);
	result = number1 * number2;
	return (result);
}
/**
 * main - program that multiplies two positive numbers
 * @argc:args
 * @argv:args
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	result = multiply_numbers(argv[1], argv[2]);
	printf("%d\n", result);
	return (0);
}
