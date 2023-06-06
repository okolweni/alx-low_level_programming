#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the array
 * @size: size of the matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 = a[j * size + j];
		sum2 = a[j * size + (size - 1 - j)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
