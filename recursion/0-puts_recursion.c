#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_puts_recursion - main fontion it's like printf in revers
 *@s: it's first array
 *
 *Return: no return
 */



void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
