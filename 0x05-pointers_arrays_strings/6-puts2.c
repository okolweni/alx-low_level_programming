#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: the pointer
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	putchar ('\n');

	if (str == NULL)
	{
		return;
	}
}
