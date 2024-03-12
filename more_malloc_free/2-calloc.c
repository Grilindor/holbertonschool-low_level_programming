#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - main function that allocates memory for an array, using malloc
 * @nmemb: what is in it
 * @size: the size of the array
 * Return: return null if faill or pointer of new_array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *new_array;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	new_array = malloc(sizeof(int) * nmemb);

	for (i = 0; i < nmemb; i++)
		new_array[i] = 0;
	if (new_array == 0)
		return (NULL);
	return (new_array);
}
