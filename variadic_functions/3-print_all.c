#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *
 **/

void printchar(va_list chec_type)
{
	printf("%c", va_arg(chec_type));
	va_end(chec_type);
}

void printint(va_list chec_type)

void printfloat(va_list chec_type)

void print_point_char(va_list chec_type)


void print_all(const char * const format, ...)
{
	int i;
	va_list chec_type;

	va_start(chec_type, format);

	while (
}
