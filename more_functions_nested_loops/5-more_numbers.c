#include <stdio.h>
#include "main.h"

/**
 *more_numbers - main fontion to print 0-14 X10
 *
 */

void more_numbers(void)
{
	int i, y;

	for (i = 0; i <= 10; i++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar('0' + (y / 10 % 10));
			if (y <= 14)
				_putchar('0' + y % 10);
		}
		_putchar('\n');
	}
}
