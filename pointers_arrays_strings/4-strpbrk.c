#include <stdio.h>
#include "main.h"
#include "2-strchr.c"
/**
 *_strpbrk - main fontion that searches a string for any of a set of bytes
 *@s: the string
 *@accept: what we seek
 *Return: return were we begin to print
 */

char *_strpbrk(char *s, char *accept)
{
	int i, nub = 0, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]) != NULL && count == 0)
		{
			count++;
			if (count == 1)
				break;
		}
		nub++;

	}
	if (count == 1)
		return (s + nub);
	else
		return (NULL);
}
