#include <stdio.h>
#include "main.h"

/**
 *_puts - main fontion it's like printf
 *@str: what we print
 *no return
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
