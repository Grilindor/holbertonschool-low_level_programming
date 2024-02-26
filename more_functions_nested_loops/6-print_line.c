#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*print_line - main fonction print number at 98
*@y: it's a value
*Return: tell me with a 0 if the code work
*/
void print_line(int n)
{
	int y = 0;

	if (n > 0)
		while (y <= n)
		{
			_putchar(95);
			y++;
		}
	_putchar('\n');
	else
		_putchar('\n');
}
