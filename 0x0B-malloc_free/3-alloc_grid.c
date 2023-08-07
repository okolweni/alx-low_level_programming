#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * **alloc_grid - pointer to a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: the height of the grid.
 *
 * Return: pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **dest;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dest = (int **)malloc(sizeof(int *) * height);

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		dest[i] = (int *)malloc(sizeof(int) * width);

		if (dest[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(dest[j]);
			}
			free(dest);

			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			dest[i][j] = 0;
		}
	}

	return (dest);
}
