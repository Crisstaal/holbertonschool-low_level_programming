#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - intialize variable
 *
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = strdup(name);
	if (d->name == NULL)
	{
		return;
	}

	d->age = age;

	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		return;
	}
}
