#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of integers
 * @size: the size of the array
 * @cmp: pointer to a function
 *
 * Return: 'i' of the 1st element for which the'cmp' does not return 0
 * If no element matches, return -1, If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || size <= 0 || array == NULL)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
