#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 * @s: 1st string
 * @accept: 2nd string
 *
 * Return: pointer to the byte in 's' that matches 1 of the bytes in 'accept',
 * or 'NULL' if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr = strpbrk(s, accept);

	return (ptr);
}
