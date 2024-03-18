#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: the array
 * @size: is the size of the array
 * @action: executes a function
 * Return: void.
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, taille;

	taille = size;

	if (array == NULL)
		return;
	if (taille == 0)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < taille; i++)
		action(array[i]);
}
