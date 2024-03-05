#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strchr.c"
/**
 *_strspn - main fontion it's like printf in revers
 *@s: it's first array
 *@accept: is what is accepted and be compt
 *Return: return the total of byte
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]) != NULL)
			count++;
		else
			break;
	}
	return (count);
}
