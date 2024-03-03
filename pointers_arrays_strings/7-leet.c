#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strlen.c"
/**
 *string_toupper - main fontion it's like printf in revers
 *@str: the array str we change
 *Return: of char str
 */

char *leet(char *str)
{
	int upper_case[] = {65, 69, 79, 84, 76};
	int lower_case[] = {97, 101, 111, 116, 108};
	int replace[] = {52, 51, 48, 55, 49};
	int i, compt;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (compt = 0; compt < 5; compt++)
		{
			if (*(str + i) == upper_case[compt] || *(str + i) == lower_case[compt])
			{
				*(str + i) = replace[i];
				break;
			}
		}
	}
	return (str);
}
