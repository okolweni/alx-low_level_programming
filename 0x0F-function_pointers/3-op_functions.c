#include <stdio.h>
#include <math.h>
#include "3-calc.h"

/**
 * op_add - adds 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts the 2nd number from the 1st number
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the modulas of 2 numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the remainder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
