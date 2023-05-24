#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
