#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * new_dog - main fonction who initialyse the dog data
 *@name: name of the dog
 * @age: it's age what did you expect
 *@owner: name of owner
 *Return: return the structure xdog
**/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *xdog;

	xdog = malloc(sizeof(dog_t));

	if (xdog == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{}
	xdog->name = malloc(i + 1);
	strcpy(xdog->name, name);

	for (j = 0; owner[j]; j++)
	{}
	xdog->owner  = malloc(j + 1);
	strcpy(xdog->owner, owner);

	if (xdog->name == NULL || xdog->owner == NULL)
	{
		free(xdog->name);
		free(xdog->owner);
		free(xdog);
		return (NULL);
	}
	xdog->age = age;
	return (xdog);
}
