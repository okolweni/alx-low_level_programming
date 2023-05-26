#include <stdio.h>
#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				putchar((j / 10) + '0');
			putchar((j % 10) + '0');
		}
		putchar('\n');
		i++;
	}
}
