#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - function concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: pointer to an array
 *
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int len = 1;
	int place = 0;
	int i;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	str = malloc(len * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		strcpy(str + place, av[i]);
		place += strlen(av[i]);
		str[place] = '\n';
		place++;
	}

	str[place] = '\0';

	return (str);
}
