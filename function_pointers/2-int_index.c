#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that executes a function given
 * as a parameter on each element of an array
 * @array: the array
 * @size: is the size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: returns the index of the first element for which the cmp function
 * does not return 0
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, y;

	y = size;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (y <= 0)
		return (-1);
	for (i = 0; i < y; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
