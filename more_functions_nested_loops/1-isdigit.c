#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_isdigit - main fonction to test if uppercase
*@c: it's fonction hypothetique
*Return: 1 succces
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
