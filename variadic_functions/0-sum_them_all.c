#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: is all de number we will sum
 * Return: return the total of all that
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
