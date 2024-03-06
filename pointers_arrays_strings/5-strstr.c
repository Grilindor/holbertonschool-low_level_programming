#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strchr.c"
/**
 *_strstr - main fontion that locates a substring
 *@haystack: it's first array
 *@needle: is the word we seek
 *Return: return the word or the string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (*haystack == *needle)
				return (&haystack[i]);
			haystack++;
		}
	}
	return (NULL);
}
