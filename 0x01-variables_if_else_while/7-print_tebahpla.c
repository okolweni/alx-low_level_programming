#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * You can only use the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}
