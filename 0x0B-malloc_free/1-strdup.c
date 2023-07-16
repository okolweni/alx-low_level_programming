#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a duplicate string.
 * @str: pointer
 *
 * Return: pointer to the duplicate string,
 * NULL if insufficient memory or if str = NULL.
 */

char *_strdup(char *str)
{
	unsigned int length;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	copy = (char *)malloc((length + 1) * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	strcpy(copy, str);

	return (copy);
}
