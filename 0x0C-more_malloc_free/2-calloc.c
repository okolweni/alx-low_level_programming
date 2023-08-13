#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: the number of elements
 * @size: number of bytes
 *
 * Return: pointer to the allocated memory, NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *dest;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	dest = malloc(size * nmemb);

	if (dest == NULL)
	{
		return (NULL);
	}
	memset(dest, 0, nmemb * size);

	return (dest);
}
