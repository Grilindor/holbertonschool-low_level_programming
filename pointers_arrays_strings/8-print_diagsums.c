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

void print_diagsums(int *a, int size)
{
	int i;
	int diagonal_one = 0;
	int diagonal_two = 0;

	for (i = 0; i < size; i++)
	{
		diagonal_one += a[i][i];
		diagonal_two += a[i][size - i - 1];
	}
}
