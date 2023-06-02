#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strncpy - function that copies a string.
 * @dest: 1st string
 * @src: 2nd string
 * @n: max bytes from string to append
 *
 * Return: pointer to the resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	strncat(dest, src, n);

	return (ptr);
}
