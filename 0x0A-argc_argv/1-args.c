#include <stdio.h>
/**
 *main - print num of arguments
 *@argc:count argument
 *@argv:vector argument
 *
 *Return: always 0
 */
int main(int argc, char *argv[])
{
	argv++;
	if (argc >= 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
