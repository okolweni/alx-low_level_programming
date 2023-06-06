#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that prints the chessboard.
 * @a: pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
