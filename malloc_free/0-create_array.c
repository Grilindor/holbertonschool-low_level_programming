#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * create_array - main function that creates an array of chars,
 *and initializes it with a specific char
 * @size: size of the array
 * @c: the caractere tu put in
 *
 * Return: return the created array.
 */

char *create_array(unsigned int size, char c)
{
	char *tableau;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tableau = malloc(sizeof(char) * size);

	if (tableau == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		tableau[i] = c;
	return (tableau);
}
