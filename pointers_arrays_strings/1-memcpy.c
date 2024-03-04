#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *_memcpy - main fontion that copies memory area
 *@dest: the dest of the copie
 *@src:the source
 *@n: the len of the source
 *
 *Return: renvoie le str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
