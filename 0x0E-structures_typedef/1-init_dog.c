#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the pet owner's name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
