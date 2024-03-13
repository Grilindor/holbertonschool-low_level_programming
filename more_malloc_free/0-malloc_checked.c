#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memorory used malloc
 * @b: the longueur to chek?
 *
 *
 * Return: return a new pointer i
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
	{
		free(i);
		exit(98);
	}
	return (i);
}
