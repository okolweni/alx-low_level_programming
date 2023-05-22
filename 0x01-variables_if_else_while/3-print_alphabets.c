#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (ALPHA <= 'Z')
	{
		putchar(ALPHA);
		ALPHA++;
	}
	putchar('\n');

	return (0);
}
