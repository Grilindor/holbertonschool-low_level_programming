#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *_memset - main fontion make hupper 1er letter of word
 *@s: the array
 *@b: the byte
 *@n: the longueur we fill
 *
 *Return: renvoie le s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
