#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 *print_char - print if format is type char
 *@chec_type: A list of arguments pointing to
 *       the character to be printed.
**/

void print_char(va_list chec_type)
{
	printf("%c", va_arg(chec_type, int));
}

/**
*printint - print if format is type int
*@chec_type: A list of arguments pointing to the character to be printed.
**/
void printint(va_list chec_type)
{
	printf("%d", va_arg(chec_type, int));
}

/**
*printfloat - print if format is type float
*@chec_type: A list of arguments pointing to the character to be printed.
**/
void printfloat(va_list chec_type)
{
	printf("%f", va_arg(chec_type, double));
}

/**
*print_point_char - print if format is type pointer char
*@chec_type: A list of arguments pointing to the character to be printed.
**/
void print_point_char(va_list chec_type)
{
	char *pointer;

	pointer = va_arg(chec_type, char*);
	if (pointer == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", pointer);
}

/**
 *print_all - fonction who chek and print anything
 *@format: the characters we need print
**/

void print_all(const char * const format, ...)
{
	char *separator = "";
	array check[] = {
		{"c", print_char},
		{"i", printint},
		{"f", printfloat},
		{"s", print_point_char},
		{NULL, NULL}
	};

	va_list chec_type;
	int i = 0, j = 0;


	va_start(chec_type, format);

	while (format[i] && format)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == check[j].the_format_in_char[0])
			{
				printf("%s", separator);
				check[j].Funcp(chec_type);
				separator = ", ";
			}
			++j;
		}
		++i;
	}
	printf("\n");
	va_end(chec_type);
}
