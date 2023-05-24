#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: function that prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int repeat = 0, alpha;

	while (repeat < 11)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			putchar(alpha);
		}
		repeat++;
		putchar('\n');
	}
}
