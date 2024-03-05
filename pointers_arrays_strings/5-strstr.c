#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strchr.c"
/**
 *_strstr - main fontion it's like printf in revers
 *@haystack: it's first array
 *@needle: is what is accepted and be compt
 *Return: return the total of byte
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[i] != '\0'; j++)
		{
			if (*haystack == *needle)
				return (haystack);
			haystack++;
		}
	}
	return (NULL);
}
