#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strdup - copy a string with new allocate memory
 * @str: pointer to a string
 * Return: Null if str = Null else return pointer to str
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, l, k, t;
	char *new_str;

	l = strlen(s1);
	k = strlen(s2);
	t = l + k + 2;

	new_str = malloc(t);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < l + 1; i++)
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
	for (j = 0; j < k + 1; j++)
	{
		new_str[i] = s2[j];
		i++;
	}
	return (new_str);
}
