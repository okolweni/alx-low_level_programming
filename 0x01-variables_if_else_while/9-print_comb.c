#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all possible combinations
 * of single-digit numbers.
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numb;

	for (numb = 0; numb <= 9; numb++)
	{
		putchar(numb + '0');
		{
			if (numb != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
