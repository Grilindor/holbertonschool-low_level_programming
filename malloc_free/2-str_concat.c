#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - copy a string with new allocate memory
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2d string
 * Return: Null if new_str = Null else return pointer to new_str
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, l, k, t;
	char *new_str;

	for (l = 0; s1[l] != '\0'; l++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;
	t = l + k + 1;

	new_str = malloc(t);

	if (s1 == NULL || s2 == NULL)
		return ("");

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; j < k; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
