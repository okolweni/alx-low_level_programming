#include "main.h"

/**
 * _puts - prints a string follwed by a new line
 *
 * @str: The string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\n'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
