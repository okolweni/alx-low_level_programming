#ifndef DOG_H
#define DOG_H

/**
 * struct dog - new type
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
