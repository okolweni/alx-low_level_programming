#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strstr - function that locates a substring.
 * @haystack: main string.
 * @needle: substring
 *
 * Return: a pointer to the beginning of the located substring,
 * or 'NULL' if the string is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr = strstr(haystack, needle);

	return (ptr);
}
