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
	int i, j, l, k;
	char *new_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (l = 0; s1[l] != '\0'; l++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;

	if (n >= k)
	{
		new_str = malloc(sizeof(char) * l + k + 1);
		n = k;
	}
	else
		new_str = malloc(sizeof(char) * l + n + 1);
	for (i = 0; i < l; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';
	if (new_str == NULL)
		return (NULL);
	return (new_str);
}
