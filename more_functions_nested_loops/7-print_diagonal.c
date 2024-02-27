#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*print_diagonal - main fonction print number at 98
*@n: it's a value
*Return: tell me with a 0 if the code work
*/
void print_diagonal(int n)
{
	int y = 0;
	int espa;

	if (n > 0)
	{
		while (y < n)
		{
			for (espa = 0; espa < n; espa++)
			{
				if (espa == y)
					_putchar('\\');
				else if (espa < y)
					_putchar(' ');
			}
			_putchar('\n');
			y++;
		}
	}
	else if (n <= 0)
		_putchar ('\n');
}
