#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "2-strlen.c"
/**
 *rev_string - main fontion to return the max len of s
 *@s: it's a var
 *Return: look up
 *
 */

void rev_string(char *s)
{
	int i, j;

	j = _strlen(s) - 1;

	for (i = 0; i < j; i++)
	{
		char c = s[i];

		s[i] = s[j];
		s[j] = c;
		j--;
	}
}
