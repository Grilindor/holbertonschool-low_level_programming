#include <stdio.h>
#include "main.h"

/**
 *
 */

void more_numbers(void)
{
	int i, y;

	while (i <= 10)
	{
		for (y = 0; y <= 14; y++)
			_putchar(y);
		i++;
		_putchar('\n');
	}
}
