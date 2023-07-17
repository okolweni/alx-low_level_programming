#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: pet owner's name
 *
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *nameCp;
	char *ownerCp;
	dog_t *new_dog;
	int nameLen, ownerLen;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	nameLen = strlen(name) + 1;
	ownerLen = strlen(owner) + 1;

	nameCp = malloc((nameLen) * sizeof(char));

	if (nameCp == NULL)
	{
		free(new_dog);

		return (NULL);
	}

	ownerCp = malloc((ownerLen) * sizeof(char));

	if (ownerCp == NULL)
	{
		free(nameCp);
		free(new_dog);

		return (NULL);
	}

	strcpy(nameCp, name);
	strcpy(ownerCp, owner);

	new_dog->name = nameCp;
	new_dog->age = age;
	new_dog->owner = ownerCp;

	return (new_dog);
}
