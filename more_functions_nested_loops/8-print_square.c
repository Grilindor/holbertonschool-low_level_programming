#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*print_square - main fonction print number at 98
*@size: it's a value
*Return: tell me with a 0 if the code work
*/
void print_square(int size)
{
	int y = 0;
	int espa;

	if (size > 0)
	{
		while (y < size)
		{
			for (espa = 0; espa < size; espa++)
				_putchar('#');
			_putchar('\n');
			y++;
		}
	}
	else
		_putchar('\n');
}
