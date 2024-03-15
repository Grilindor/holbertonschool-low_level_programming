#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../pointers_arrays_strings/2-strlen.c"

/**
 *_strcpy - main fontion it's like printf
 *@dest: destination
 *@src:source
 *
 *Return: renvoie le dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


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

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	xdog = malloc(sizeof(dog_t));
	if (xdog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{}
	xdog->name = malloc(i + 1);
	_strcpy(xdog->name, name);

	if (xdog->name == NULL)
	{
		free(xdog);
		return (NULL);
	}

	for (j = 0; owner[j]; j++)
	{}
	xdog->owner  = malloc(j + 1);
	_strcpy(xdog->owner, owner);

	if (xdog->owner == NULL)
	{
		free(xdog->name);
		free(xdog);
		return (NULL);
	}
	xdog->age = age;
	return (xdog);
}
