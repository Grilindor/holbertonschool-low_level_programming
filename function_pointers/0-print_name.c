#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - that prints a name
 * @name: The character to print
 * @f: pointer of name
 *
 * Return: void.
 **/

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
