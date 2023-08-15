#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL || name == NULL || owner == NULL)
	{
		return;
	}

	d->name = malloc(strlen(name) + 1);
	d->owner = malloc(strlen(owner) + 1);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		return;
	}
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
