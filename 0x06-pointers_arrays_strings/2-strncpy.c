#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: stores the string copied
 * @src: the source string
 * @n: maximum number of bytes to copied from src
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
