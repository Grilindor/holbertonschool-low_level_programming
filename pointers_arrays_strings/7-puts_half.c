#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - main fontion it's like printf
 *@str: what we print in last half
 *no return
 */

void puts_half(char *str)
{
	int n, len;

	len  = _strlen(str) - 1;

	for (n = 0; n <= len; n++)
	{
		if (n > len / 2)
			_putchar(str[n]);
	}
	_putchar('\n');
}
