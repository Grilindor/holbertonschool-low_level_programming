#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_isupper - main fonction to test if uppercase
*@c: it's fonction hypothetique
*Return: 1 succces
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
