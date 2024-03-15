#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - main fonction who initialyse the dog data
 *@d: is the value in struct dog
 *@name: name of the dog
 * @age: it's age what did you expect
 *@owner: name of owner
 *Define a new type struct dog with the following elements
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
