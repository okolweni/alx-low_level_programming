#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string, follwed by a new line.
 * @s: pointer to the string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
