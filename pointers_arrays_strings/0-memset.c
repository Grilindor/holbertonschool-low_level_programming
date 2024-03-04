#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *cap_string - main fontion make hupper 1er letter of word
 *@str: the array
 *
 *
 *
 *Return: renvoie le str
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++) {
		s[i] = b;
	}
	return (s);
}
