#include <stdio.h>

/**
 * main - print num of arguments
 * @argc: count argument
 * @argv: vector argument
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		return (0);
	}
}

