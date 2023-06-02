#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @dest: 1st string
 * @src: 2nd string
 * @n: max number of bytes to be appended
 *
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	strncat(dest, src, n);

	return (ptr);
}
