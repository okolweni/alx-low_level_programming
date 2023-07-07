#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - finds value of integer
 * raised to an exponent.
 * @x: base
 * @y: exponent
 *
 * Return: value of 'x' raised to the power of 'y'
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
