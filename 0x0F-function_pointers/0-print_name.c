#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: string to be printed.
 * @f: pointer to the string.
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
