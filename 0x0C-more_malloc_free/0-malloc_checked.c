#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that allocates memory using malloc.
 * @b: length or size required.
 *
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *dest;

	dest = malloc(b);

	if (dest == NULL)
	{
		exit(98);
	}

	return (dest);
}
