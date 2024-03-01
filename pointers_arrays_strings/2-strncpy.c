#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *_strncpy - main fontion it's like printf
 *@dest: destination
 *@src:source
 *@n: la taille
 *Return: renvoie le dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';

	return (dest);
}
