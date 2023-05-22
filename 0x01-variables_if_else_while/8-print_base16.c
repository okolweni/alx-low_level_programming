#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 * You can only use the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int hexadec;

	for (hexadec = 0; hexadec < 16; hexadec++)
	{
		if (hexadec < 10)
		{
			putchar(hexadec + '0');
		}
		else
		{
			putchar(hexadec - 10 + 'a');
		}
	}
	putchar('\n');

	return (0);
}
