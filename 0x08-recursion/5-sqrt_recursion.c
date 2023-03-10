#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - entry point
 *
 * Description: function that returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Entry point
 *
 * Description: function that returns the natural square root of a number
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: Always 0 (Succeess)
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
