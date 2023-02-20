#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * Main - Entry point
 *
 * Discription: 'prints the alphabet in lowercase,
 * followed by a new line.'
 *
 * Return: Always 0 (Success)
 */

main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
