#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int length;

	if (s2 == NULL)
	{
		s2 = "";
	}

	length = strlen(s1) + strlen(s2) + 1;

	dest = (char *)malloc(sizeof(char) * length);

	if (dest != NULL)
	{
		strcpy(dest, s1);
		strcat(dest, s2);
	}
	else
	{
		return (NULL);
	}

	return (dest);
}
