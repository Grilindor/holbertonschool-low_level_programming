#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_putchar.c"
/**
 * alloc_grid - main function function that returns a pointer
 * to a 2 dimensional array of integers
 * space in memory, which contains a copy of the string given
 * as a parameter
 * @width: the number of ligne
 *@height: the number of colonne
 *
 * Return: return a pointer
 */

int **alloc_grid(int width, int height)
{
	int **new_array;
	int i, k, l;

	if (width <= 0 || height <= 0)
		return (NULL);
	new_array = malloc(width * sizeof(int *));
	if (new_array == NULL)
	{
		free(new_array);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		new_array[i] = malloc(height * sizeof(int));
		if (new_array[i] == NULL)
		{
			for (k = i; k >= 0; k--)
				free(new_array[k]);
			free(new_array);
			return (NULL);
			}
	}
	for (i = 0; i < width; i++)
	{
		for (l = 0; l < height; l++)
			new_array[i][l] = 0;
	}
	return (new_array);
}
