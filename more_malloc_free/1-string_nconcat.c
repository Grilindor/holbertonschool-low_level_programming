#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_putchar.c"
/**
 * string_nconcat - main function that concatenates two strings
 * @s1: the 1 string
 * @s2: the 2 string
 * @n: the longueur of s2 we want to add
 * Return: return a pointer to the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, l, k, t;
	char *new_str;

	l = sizeof(s1);
	k = sizeof(s2);
	t = l + n;

	new_str = malloc(t);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		new_str[i] = s1[i];
		if (s1[i] == 32)
		{
			i++;
			break;
		}
		else if (s1[i] == '\0')
		{
			new_str[i] = 32;
		}
	}
	if (n >= k)
		n = k;
	for (j = 0; j < n; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	if (new_str == NULL)
		return (NULL);
	return (new_str);
}
