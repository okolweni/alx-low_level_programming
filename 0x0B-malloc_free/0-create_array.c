#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: char to initialize
 *
 * Return: Pointer to the array, NULL if size = '0' or if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc((size) * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';

	return (array);
}
