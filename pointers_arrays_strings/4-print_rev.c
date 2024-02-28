#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strlen.c"
/**
 *print_rev - main fontion it's like printf in revers
 *@s: what we print
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
