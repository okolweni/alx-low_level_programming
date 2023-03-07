#include "main.h"

/**
 * _mempcy - Entry point
 *
 * Description - function that copies memory area.
 * @dest: pointer to the destination
 * @src: pointer to the source.
 * @n: number of characters to copy
 *
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n : i++)
		dest[i] = src[i];

	return (dest);
}
