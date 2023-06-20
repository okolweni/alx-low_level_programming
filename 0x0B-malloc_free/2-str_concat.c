#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - unction that concatenates two strings.
 * @s1: pointer to the 1st string
 * @s2: pointer to the 2nd string
 *
 * Return: Pointer to concatenated string, NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *res;
	size_t len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1) + strlen(s2);
	res = malloc((len + 1) * sizeof(char));

	if (res == NULL)
	{
		return (NULL);
	}

	strcpy(res, s1);
	strcat(res, s2);

	return (res);
}
