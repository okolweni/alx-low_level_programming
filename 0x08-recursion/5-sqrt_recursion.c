#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - finds natural square root.
 * @n: integer
 *
 * Return: the natural sqrt of an integer.
 */

int _sqrt_recursion(int n)
{
	if (0 > n)
	{
		return (-1);
	}

	int mid = n / 2;
	int sqr = mid * mid;

	if (sqr == n)
	{
		return (mid);
	}

	if (sqr < n)
	{
		return (_sqrt_recursion(n, mid + 1, end));
	}

	else
	{
		return (_sqrt_recursion(n, start, mid - 1));
	}
}
