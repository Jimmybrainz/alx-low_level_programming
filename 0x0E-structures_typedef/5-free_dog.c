#include "dog.h"

/**
 * free_dog - function that free dog
 * @d: passed struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		/*Free the memory for the name and owner strings*/
		free(d->owner);
		free(d->name);

		/*Free the memory for the dog structure itself*/
		free(d);
	}
}
