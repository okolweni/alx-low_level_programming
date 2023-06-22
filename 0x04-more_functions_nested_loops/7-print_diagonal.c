#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: the number of times the character '\' should be printed.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	while (n > 0)
	{
		putchar('\');
		n--;
	}
	putchar('\n')
}
