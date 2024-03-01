#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *_strncat - main fontion it's like printf
 *@dest: destination
 *@src:source
 *@n: c'est la longeur
 *
 *Return: renvoie le dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0 ; i < n  && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
