#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "2-strlen.c"
/**
*print_alphabet_x10 - main fonction print the alphabet
*C: it's fonction hypothetique
*Return: tell me with a 0 if the code work
*/

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
