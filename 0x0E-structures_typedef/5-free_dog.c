#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: pointer to dog_t to free it
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

