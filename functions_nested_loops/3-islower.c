#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_islower - main fonction to test if lowercase
*@c: it's fonction hypothetique
*Return: tell me with a 1 if the code work (lowercase)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
