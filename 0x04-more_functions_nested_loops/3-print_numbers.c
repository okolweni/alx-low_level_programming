#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line.
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
