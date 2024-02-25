#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */
/**
 *times_table - the main fontion
 *
 *Return: tell me with a 0 if the code work
*/
void times_table(void)
{
	int a, b, cal;

	for (a = '0';a <= '9'; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			cal = a * b;
			_putchar(' ');
			_putchar(',');
			if (cal <= 9)
			{
				_putchar(' ');
				_putchar(op + '0');
			}
			else
			{
				_putchar((cal / 10) + '0');
				_putchar((cal % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
