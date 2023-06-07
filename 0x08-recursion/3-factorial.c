#include <stdio.h>
#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: factorial
 *
 * Return: always 0 (Success)
 */

int factorial(int n)
{
	int x;
	int factorial = 1;

	if (n < 0)
	{
		return (-1);
	}

	for (x = 1; x <= n; x++)
	{
		factorial *= x;
	}
	return (factorial);
}
