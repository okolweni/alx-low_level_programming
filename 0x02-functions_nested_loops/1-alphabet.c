#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: void
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
