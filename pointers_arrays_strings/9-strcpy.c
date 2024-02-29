#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *puts_half - main fontion it's like printf
 *@str: what we print in last half
 *no return
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
