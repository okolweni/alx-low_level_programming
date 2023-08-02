#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - value of 'x' raised to'y'
 * @x: base
 * @y: exponent
 *
 * Return: value of x
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
