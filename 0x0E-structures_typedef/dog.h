#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the dog owner.
 *
 * Return: void
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - new structure
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the dog owner.
 *
 * Return: void
 */

typedef struct
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
