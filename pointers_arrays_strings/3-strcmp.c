#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"

/**
 **_strcmp - main fontion il compare la differente entre les 2
 *@s1: string 1
 *@s2: string 2
 *
 *Return: renvoie le dest
 */

int _strcmp(char *s1, char *s2)
{
	int i, resultat;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			resultat = s1[i] - s2[i];
			break;
		}
		else
			resultat = 0;
	}
	return (resultat);
}
