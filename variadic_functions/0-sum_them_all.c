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

int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	unsigned int i, total = 0;

	if (n == 0)
		return (0);
	va_start(numb, n);
	for (i = 0; i < n; i++)
		total += va_arg(numb, int);
	va_end(numb);
	return (total);
}
