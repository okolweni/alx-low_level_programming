#include <stdio.h>
#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: value to be evaluated
 *
 * Return: 1 and prints '+' if 'n' > 0
 * 0 and prints '0' if 'n' = 0
 * -1 and prints '-' if 'n' < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		putchar('1');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		putchar('1');
		return (-1);
	}
	else
	{
		putchar('0');
		putchar('1');
		return (0);
	}
}
