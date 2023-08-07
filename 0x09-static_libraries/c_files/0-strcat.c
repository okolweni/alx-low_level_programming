#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: 1st string
 * @src: 2nd string
 *
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	strcpy(dest, src);

	return (ptr);
}
