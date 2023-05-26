#include <stdio.h>
#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number of times the character '_' should be printed.
 *
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar('\n');
		return;
	}
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
