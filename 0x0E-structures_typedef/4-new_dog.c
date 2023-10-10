#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to copy of new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	/*Allocate memory for the dog structure*/
	dog_t *new_dog = malloc(sizeof(dog_t));

	/*check if memory allocation was successful*/
	if (new_dog == NULL)
	{
		return (NULL);/*Return null if allocation fails*/
	}

	/*Allocate memory for the name and owner strings*/
	new_dog->name = malloc(strlen(name) + 1);
	new_dog->owner = malloc(strlen(owner) + 1);

	/*Check if memory allocation for strings was successfull*/
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		/*If allocation fails, free previously allocated memory and return NULL*/
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	/*Copy the name and owner strings into the new dog structure*/
	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);

	/*Return the pointer to the newly created dog*/
	return (new_dog);
}
