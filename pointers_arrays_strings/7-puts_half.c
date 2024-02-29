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
	len  = strlen(str) - 1;

	for (n = len / 2; n <= len; n++)
		putchar(str[n]);
	putchar('\n');
}
