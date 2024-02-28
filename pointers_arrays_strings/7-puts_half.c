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
        int n;

        if (_strlen(str) % 2 == 0)
        {
                for (n = _strlen(str) / 2; n <= _strlen(str); n++)
                        _putchar(str[n]);
        }
        else
	{
                for (n = (_strlen(str) - 1) / 2; n <= _strlen(str); n++)
                        _putchar(str[n]);
	}
	_putchar('\n');
}
