#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: the arguments.
 *
 * Return: pointer to a new string, NULL on failure.
 */

char *argstostr(int ac, char **av)
{
	int length = 0;
	int k = 0;
	int i, j;
	char *dest;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]);
	}

	dest = (char *)malloc(sizeof(char) * length);

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			dest[k++] = av[i][j];
		}
		dest[k++] = '\n';
	}
	dest[k + 1] = '\0';

	return (dest);
}
