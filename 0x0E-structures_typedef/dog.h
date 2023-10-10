#ifndef DOG_H
#define DOG_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *struct dog - struct containing dog owner informations
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);

#endif
