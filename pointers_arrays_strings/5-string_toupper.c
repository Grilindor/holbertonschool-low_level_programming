#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strlen.c"
/**
 *string_toupper - main fontion it's like printf in revers
 *@str: the array str we change
 *Return: of char str
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
