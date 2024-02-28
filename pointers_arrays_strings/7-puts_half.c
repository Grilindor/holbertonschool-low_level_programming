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
	int len = 0;

	for (len = _strlen(str) / 2; len <= _strlen(str); len++)
		_putchar(str[len]);
	_putchar('\n');
}
