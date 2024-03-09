#include <stdio.h>
#include "main.h"
#include <string.h>
#include "2-strchr.c"
/**
 *print_diagsums - main fontion that prints the sum of the two diagonals of
 *a square matrix of integers
 *@a: it's first array
 *@size: is what is accepted and be compt
 *Return: nothing void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diagonal_one = 0;
	int diagonal_two = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			diagonal_one += *(a + i);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			diagonal_two += *(a + i);
	}
	printf("%d, %d\n", diagonal_one, diagonal_two);
}
