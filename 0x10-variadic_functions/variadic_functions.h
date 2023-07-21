#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _char(va_list args);
void _float(va_list args);
void _string(va_list args);
void _int(va_list args);

/**
 * struct print - multiple print
 * @y: char Type of print
 * @all_f: function
 */
typedef struct print
{
	char *y;
	void (*all_f)(va_list);
} all_print;



#endif
