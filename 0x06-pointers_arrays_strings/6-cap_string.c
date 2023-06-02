#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @ptr: pointer
 *
 * Return: string
 */

char *cap_string(char *ptr)
{
	int i;
	int x = strlen(ptr);
	int counter = 0;

	for (i = 0; i < x; i++)
	{
		if (isspace(ptr[i]))
			counter = 0;

		if (isalpha(ptr[i]) && !isspace(ptr[i]) && counter == 0)
		{
			ptr[i] = toupper(ptr[i]);
			counter = 1;
		}
	}
	return (ptr);
}
