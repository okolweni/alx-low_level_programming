#include <stdio.h>
#include "main.h"

/**
 * factorial - finds the factorial on an integer.
 * @n: integer
 *
 * Return: factorial of a given number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
