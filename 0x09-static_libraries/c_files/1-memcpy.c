#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 * @n: number of bytes to be copied
 * @src: source address
 * @dest: destination address
 *
 * Return: A pointer to 'dest'
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, sizeof(char) * n);

	return (dest);
}
