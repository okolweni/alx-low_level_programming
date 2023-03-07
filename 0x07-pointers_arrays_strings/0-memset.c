#include "main.h"

/**
 * _memset - Entry point
 *
 * Discription - function that fills memory with a constant byte.
 * @s: Pointer
 * @b: constant to be replaced with.
 * @n: number of bytes to be filled.
 *
 * Return: pointer 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;

	return (s);
}
