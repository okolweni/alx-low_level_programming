#include <stdio.h>
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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
