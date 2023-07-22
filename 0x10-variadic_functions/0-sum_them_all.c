#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums up all parameters.
 * @n: number of arguments
 *
 * Return: the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int v = va_arg(args, int);

		sum += v;
	}

	va_end(args);

	return (sum);
}
