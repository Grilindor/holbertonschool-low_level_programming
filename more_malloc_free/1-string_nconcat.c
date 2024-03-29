#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	int add = n;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (l = 0; s1[l] != '\0'; l++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;

	if (add >= k)
	{
		new_str = malloc(sizeof(char) * (l + k + 1));
		add = k;
	}
	else
		new_str = malloc(sizeof(char) * (l + add + 1));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < add; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
