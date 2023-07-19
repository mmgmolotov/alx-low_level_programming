#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name:arg (name to print)
 * @f:function that print 
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

