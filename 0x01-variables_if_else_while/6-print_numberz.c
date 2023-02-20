#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Discription - prints all single digit numbers of base 10
 * starting from 0, follwed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9' ; numbers++)
		putchar(numbers);
	putchar('\n');

	return (0);
}
