#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *_strchr - main fontion it's like printf
 *@s: destination
 *@c:source
 *Return: renvoie le dest
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);

	}
	return (NULL);
}
