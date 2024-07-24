#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: Initializes name
 * @age: initialises age
 * @owner: initialises owner
 *
 * Return:pointer to new_dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	new_name = malloc(strlen(name) + 1);
	if (!new_name)
	{
		free(d);
		return (NULL);
	}
	strcpy(new_name, name);

	new_owner = malloc(strlen(owner) + 1);
	if (!new_owner)
	{
		free(new_name);
		free(d);
		return (NULL);
	}
	strcpy(new_owner, owner);

	d->name = new_name;
	d->age = age;
	d->owner = new_owner;

	return (d);
}

