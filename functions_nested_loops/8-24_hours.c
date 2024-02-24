#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*jack_bauer - main fonction print the alphabet
*
*Return: tell me with a 0 if the code work
*/
void jack_bauer(void)
{
	int h1 = '0';
	int h2 = '0';
	int m1 = '0';
	int m2 = '0';

	for (h1 = '0'; h1 <= '2'; h1++)
	{
		for (h2 = '0'; h2 <= '9'; h2++)
		{
			for (m1 = '0'; m1 <= '5'; m1++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}
