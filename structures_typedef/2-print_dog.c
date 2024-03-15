#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <math.h>
/**
 * print_dog - main fonction who initialyse the dog data
 *@d: is the value in struct dog
 * Return: void
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->name);
	printf("Age: ");
	if (isnan(d->age))
		printf("(nil)\n");
	else
		printf("%f\n", d->age);
	printf("Owner: ");
	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", d->owner);
}
