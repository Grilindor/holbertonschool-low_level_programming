#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *_strcpy - main fontion it's like printf
 *@dest: destination
 *@src:source
 *
 *Return: renvoie le dest
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
