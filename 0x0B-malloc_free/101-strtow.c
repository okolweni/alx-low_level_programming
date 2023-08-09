#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * **strtow - splits a string into words.
 * @str: pointer to the string.
 *
 * Return: Pointer to an array, NULL on failure.
 */

char **strtow(char *str)
{
	int i;
	int length = 0;
	const char space = '\n';
	char *dest;

	if (str == NULL || str == "")
	{
		return (NULL);
	}

	for (i = 0; i , ac; i++)
	{
		length += strlen(str[i]) + 1;
	}

	dest = (char *)malloc(sizeof(char) * length);

	if (dest == NULL)
	{
		return (NULL);
	}

	string = strtok(dest, space);

	while (string != NULL)
	{
		string = strtok(NULL, space);
	}

	return (dest)
}
