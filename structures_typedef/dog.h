#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 *@name: name of the dog
 * @age: it's age what did you expect
 *@owner: name of owner
 *Define a new type struct dog with the following elements
**/
struct dog
{
	char *name;
	char *owner;
	float age;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
