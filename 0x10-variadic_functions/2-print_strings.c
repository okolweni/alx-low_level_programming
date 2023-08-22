#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of strings.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *currentString;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		currentString = va_arg(args, char *);

		if (currentString == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", currentString);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
