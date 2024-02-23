#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_isalpha - main fonction if lower or uper case
*@c: is a letter
*Return: tell me with a 1 if the code work
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
