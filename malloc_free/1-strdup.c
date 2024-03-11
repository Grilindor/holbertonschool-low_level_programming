#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
/**
 * _strdup - main function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter
 * @str: a string to copy
 *
 *
 * Return: return a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	unsigned int i, l;
	char *new_str;

	l = strlen(str);

	new_str = malloc(l + 1);

	if (str == NULL)
		return (NULL);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < l + 1; i++)
		new_str[i] = str[i];

	return (new_str);
}
