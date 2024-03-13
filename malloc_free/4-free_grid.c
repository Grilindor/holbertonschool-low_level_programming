#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - main function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: the array we will free
 *@height: sa taille
 *
 * Return: return a pointer to the duplicated string
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
