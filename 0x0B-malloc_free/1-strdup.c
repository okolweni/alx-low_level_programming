#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * Return: pointer to the duplicated string, NULL on failure.
 */

char *_strdup(char *str)
{
	char *copy;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;

	copy = (char *)malloc(sizeof(char) * length);

	if (copy != NULL)
	{
		strcpy(copy, str);
	}
	else
	{
		return (NULL);
	}

	return (copy);
}
