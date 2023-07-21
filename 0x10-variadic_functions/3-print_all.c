#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _char - print a char
 * @args: arg
 * Return: void
 */
void _char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * _float - print a float
 * @args: arg
 * Return: void
 */
void _float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * _string - print a string
 * @args: arg
 * Return: void
 */
void _string(va_list args)
{
	char *str;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * _int - print an integer
 * @args: arg
 * Return: void
 */
void _int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * print_all - function that print all
 * @format:arg
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	all_print t[] = {
		{"c", _char},
		{"s", _string},
		{"i", _int},
		{"f", _float},
		{NULL, NULL}
	};
	va_list valist;
	char *s = "";

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (t[j].y != NULL)
		{
			if (*(t[j].y) == format[i])
			{
				printf("%s", s);
				t[j].all_f(valist);
				s = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(valist);
	printf("\n");
}
