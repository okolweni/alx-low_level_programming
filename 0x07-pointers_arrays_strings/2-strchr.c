#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: the string
 * @c: character being searched for
 *
 * Return: pointer to the first occurence of 'c'
 * in the string 's' or 'NULL' if the character is not found
 */

char *_strchr(char *s, char c)
{
	char *ptr = strchr(s, c);

	return (ptr);
}
