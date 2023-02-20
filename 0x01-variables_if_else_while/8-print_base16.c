#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Discription - prints all the numbers of the base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;
	char alphabets;

	for (numbers = '0'; numbers <= '9' ; numbers++)
		putchar(numbers);
	for (alphabets = 'a'; alphabets <= 'f' ; alphabets++)
		putchar(alphabets);
	putchar('\n');

	return (0);
}
