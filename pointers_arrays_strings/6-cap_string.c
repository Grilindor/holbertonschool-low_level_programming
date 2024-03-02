#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 *cap_string - main fontion make hupper 1er letter of word
 *@str: the array
 *
 *
 *
 *Return: renvoie le str
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str); i++)
	{
		if (i == 0)
		{
			str[i] = str[i] - 32;
			continue;
		}
		if (str[i] == 9 || str[i] == 32 || str[i] == '\n' || str[i] == 46)
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				continue;
			}
			i--;
		}
	}
	return (str);
}
