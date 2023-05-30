#include <stdio.h>
#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: the pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	int a = 0;
	int b;

	while (s[length] != '\0')
	{
		length++;
	}

	b = length - 1;

	while (a < b)
	{
		char temp = s[a];

		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
