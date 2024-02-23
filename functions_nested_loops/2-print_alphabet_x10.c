#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_alphabet_x10 - main fonction print the alphabet
*C: it's fonction hypothetique
*Return: tell me with a 0 if the code work
*/
void print_alphabet_x10(void)
{
	int i;
	int a = '0';

	while (a <= '9')
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		a++;
	}
}
