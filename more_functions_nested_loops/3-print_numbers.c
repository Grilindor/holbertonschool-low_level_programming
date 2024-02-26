#include <stdio.h>
#include "main.h"
/**
*print_numbers - print 0 to 9
*@
*
*Return: tell me with a 0 if the code work
*/
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
