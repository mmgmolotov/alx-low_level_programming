#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	str = 0;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (str != NULL)
			printf("(nil)");
		printf("%s", va_arg(args, char *));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
