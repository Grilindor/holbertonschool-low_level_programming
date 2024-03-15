#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - main fonction who initialyse the dog data
 *@d: is the value in struct dog
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (!(d->age))
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
