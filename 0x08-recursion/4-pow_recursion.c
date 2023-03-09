#include "main.h"

/**
 * _pow_recursion - entry point
 *
 * Description: function that returns the value of x raised to the power of y
 * @x: value to be multiplied
 * @y: number of times to multiply
 *
 * Return: Always 0 (Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
