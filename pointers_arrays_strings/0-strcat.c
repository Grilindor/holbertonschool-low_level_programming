#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"

/**
 **_strcat - main fontion it's like printf
 *@dest: destination
 *@src: source
 *
 *Return: renvoie le dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int i;
	int n = _strlen(src);

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
