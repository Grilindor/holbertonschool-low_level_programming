#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strlen.c"
/**
 *_puts - main fontion it's like printf
 *@str: what we print
 *no return
 */

 void print_rev(char *s)
{
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar('\n');
}
