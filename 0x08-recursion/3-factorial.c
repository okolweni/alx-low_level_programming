#include <stdio.h>
#include "main.h"

/**
 * factorial - factorial of a given number.
 * @n: the given number.
 *
 * Return: '-1' if 'n' < 0, factorial of 'n'
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
