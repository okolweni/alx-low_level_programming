#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Discription: prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
