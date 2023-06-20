#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 *
 * Return: pointer to the new dog, NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(dog_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->name = strdup(name);
	new->owner = strdup(owner);

	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);

		return (NULL);
	}

	new->age = age;

	return (new);
}
