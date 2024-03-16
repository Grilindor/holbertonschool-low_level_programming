#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - main fonction who free dog
 *@d: pointer to dog
 *Return: return void
**/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
