#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - function returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 *
 * Return: pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	copy = malloc(strlen(str) + 1);

	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);

	return (copy);
}
