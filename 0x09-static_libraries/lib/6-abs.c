#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @r: the integer
 *
 * Return: absolute value of an integer
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
