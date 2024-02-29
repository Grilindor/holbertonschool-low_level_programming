#include <stdio.h>
#include "main.h"
#include "2-strlen.c"

/**
 *print_array - main fontion it's like printf
 *@a: is the array
 *@n: is the number of elements of the array to be printed
 *no return
 */

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
}
