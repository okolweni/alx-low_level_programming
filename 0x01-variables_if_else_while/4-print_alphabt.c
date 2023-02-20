#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Discription - prints the alphabet in lowercase, folled by a new line.
 * print all the letters excluding q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet, e, q;

	e = 'e';
	q = 'q';

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		if (alphabet != e && alphabet != q)
			putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
