#include <stdio.h>
#include <math.h>
#include "3-calc.h"

/**
 * op_add - sum of 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide betwwen 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of 2 integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
