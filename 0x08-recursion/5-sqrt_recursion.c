#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural sqrt of a number.
 * @n: number to square root
 *
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}

	x = _sqrt_recursion(n);

	printf("%d", x);

	return (0);
}
