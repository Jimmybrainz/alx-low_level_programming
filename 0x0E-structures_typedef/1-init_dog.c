#include "dog.h"

/**
 *init_dog - function that initialize a variable
 *@d: A pointer to the dog structure
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
