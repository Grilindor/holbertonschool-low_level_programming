#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *swap_int - main fontion replace var 402 to 98
 *@a: it's a var and change the pointeur
 *@b: it's var
 *
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
