#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_sign - main fonction print the alphabet
*@n: it's fonction hypothetique
*Return: tell me with a 0 if the code work
*/
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar('+');
		return (1);
	}

	else if (n < '0')
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
