#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - that prints numbers, followed by a new line
 * @separator: is the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: return the va_list prlist
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list prlist;

	va_start(prlist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(prlist, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(prlist);
}
