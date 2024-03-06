#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strchr.c"
/**
 *_strspn - main fontion it's like printf in revers
 *@s: it's first array
 *@accept: is what is accepted and be compt
 *Return: return the total of byte
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n -1));
}
