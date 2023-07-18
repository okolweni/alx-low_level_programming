#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements.
 * @size: size of each element
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
	{
		return (NULL);
	}

	memset(pointer, 0, nmemb * size);

	return (pointer);
}
