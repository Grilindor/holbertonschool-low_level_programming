#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memorory a grid of integer
 * @b: the longueur to chek?
 *
 *
 * Return: return a new pointer i
 */

void *malloc_checked(unsigned int b)
{
	unsigned int l;
	int *i;

	l = sizeof(b);

	i = malloc(l);
	if (i == NULL)
	{
		free(i);
		exit(98);
	}
	return (i);
}
