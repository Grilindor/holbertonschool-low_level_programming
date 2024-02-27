#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_strlen - main fontion to return the max len of s
 *@s: it's a var
 *Return: look up
 *
 */

int _strlen(char *s)
{
	int compt = 0;

	while (*s != '\0')
	{
		compt++;
		s++;
	}
	return (compt);
}
