#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: the dog owner's name.
 *
 * Return: NULL if the function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = (char *)malloc(strlen(name) + 1);
	new_dog->owner = (char *)malloc(strlen(owner) + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		new_dog->name[i] = name[i];
	}
	new_dog->name[i] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
	{
		new_dog->owner[j] = owner[j];
	}
	new_dog->owner[j] = '\0';

	new_dog->age = age;

	return (new_dog);
}
