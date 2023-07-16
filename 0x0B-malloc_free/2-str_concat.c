#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to the 1st string.
 * @s2: pointer to the 2nd string.
 *
 * Return: newly allocated space in memory
 * containing the concatenated string, NULL if function fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *memory;
	unsigned int length;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	length = strlen(s1) + strlen(s2) + 1;
	memory = (char *)malloc((length) * sizeof(char));

	if (memory == NULL)
	{
		return (NULL);
	}

	strcpy(memory, s1);
	strcat(memory, s2);

	return (memory);
}
