#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 * @s: the pointer
 * @b: constant byte
 * @n: number of bytes to be filled by constant byte
 *
 * Return: Pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, sizeof(char) * n);

	return (s);
}
