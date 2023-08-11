#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: the 1st string
 * @s2: the 2nd string
 * @n: number of bytes to concatenate
 *
 * Return: Pointer to space in memory, NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length;
	char *dest;

	if (s2 == NULL)
	{
		s2 = "";
	}

	length = strlen(s1) + n + 1;

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	dest = (char *)malloc(sizeof(char) * length);

	if (dest == NULL)
	{
		return (NULL);
	}

	strcpy(dest, s1);
	strncat(dest, s2, n);

	return (dest);
}
