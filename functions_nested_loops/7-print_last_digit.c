#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_last_digit - main fonction print the alphabet
*@n: it's a value
*Return: tell me with a 0 if the code work
*/
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
