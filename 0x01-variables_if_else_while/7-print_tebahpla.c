#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Discription - prints the lowercasealphabet in reverse,
 * follwed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet <= 'a' ; alphabet--)
	putchar(alphabet);
	putchar('\n');

	return (0);
}
