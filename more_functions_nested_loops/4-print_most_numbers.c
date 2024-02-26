#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_most_numbers - main fonction try to print this one in char
*Description: prints the alphabet in lowercase, followed by a new line
*Return: tell me with a 0 if the code work
*/

void print_most_numbers(void)
{
	int chif = 0;

	while(chif <= 9)
	{
		if (chif != 2 && chif != 4)
			_putchar('0' + chif);
		chif++;
	}
	_putchar('\n');
}
