#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * array_range - main function that creates an array of integers
 * @min: value
 * @max: value
 *
 * Return: return the created array.
 */

int *array_range(int min, int max)
{
	int *tableau;
	int i;

	if (min > max)
		return (NULL);

	tableau = malloc(sizeof(int) * (max - min + 1));
/**
 *Adjusted the size calculation
 **/

	for (i = 0; min <= max; i++)
	{
		tableau[i] = min;
		min++;
	}
	if (tableau == NULL)
		return (NULL);
	return (tableau);
}
