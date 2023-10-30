#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: name of new dog
 * @age: age of dog
 * @owner: owner of dog
 * 
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	size_t n, o;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	n = strlen(name);
	o = strlen(owner);

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	
	dog->name = (char *)malloc((n + 1) * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	strcpy(dog->name, name);

	dog->age = age;

	dog->owner = (char *)malloc((o +1) *sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	strcpy(dog->owner, owner);

	return (dog);
}
