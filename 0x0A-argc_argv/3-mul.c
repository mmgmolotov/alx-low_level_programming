#include <stdio.h>
#include <stdlib.h>
/**
 *main - print num of arguments
 *@argc:count argument
 *@argv:vector argument
 *
 *Return: always 0 success,1 for errors
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc == 3)
	{
		n = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", n);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
