#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: 1st value
 * @max: last value
 *
 * Return: pointer to the new array, NULL on failure.
 */

int *array_range(int min, int max)
{
	int *dest;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	dest = (int *)malloc(sizeof(int) * size);

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		dest[i] = min + i;
	}

	return (dest);
}
