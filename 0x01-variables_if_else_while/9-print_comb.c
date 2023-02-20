#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Discription - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;

	for (numbers = 0; numbers < 10 ; numbers++)
	{
		putchar(numbers + '0');
		if (numbers < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
