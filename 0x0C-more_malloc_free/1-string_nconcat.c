#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * @n: space to be allocated
 *
 * Return: pointer to a newly allocated space in memory.
 * NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int string1, string2;
	char *string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	string1 = strlen(s1);
	string2 = strlen(s2);

	if (n >= string2)
	{
		n = string2;
	}

	string = (char *)malloc((string1 + n + 1) * sizeof(char));

	if (string == NULL)
	{
		return (NULL);
	}

	strncpy(string, s1, string1);
	strncpy(string + string1, s2, n);
	string[string1 + n] = '\0';

	return (string);
}
