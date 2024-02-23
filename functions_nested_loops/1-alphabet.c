#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_alphabet - print_alphabet fonction print the alphabet
*
*Function: print the alphabet
*
*Return: tell me with a 0 if the code work
*/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
