#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: the array
 * @size: is the size of the array
 * @action: executes a function
 * Return: void.
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
