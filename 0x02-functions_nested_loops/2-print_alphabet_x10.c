#include "main.h"

/**
 * print_alphabet_x10 - make alphabet x10 times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int x = 0;

	while (x <= '9')
	{
		for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
	x++;
}
