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
	int t = '0', c = '0';

	for (t = '0'; t <= '9'; t++)
	{
		_putchar(t * c);
		_putchar('\n');
	}
}
