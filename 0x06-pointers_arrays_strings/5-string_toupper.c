#include <stdio.h>
#include <ctype.h>

/**
 * *string_toupper - function that changes all lowercase letters of a string
 * to uppercase.
 *
 * Return: string
 */

char *string_toupper(char *ptr)
{
	int i = 0;

	while (ptr[i] != '\0')
	{
		ptr[i] = toupper(ptr[i]);
		i++;
	}
	return (ptr);
}
