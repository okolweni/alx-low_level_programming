#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations.
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*op_func)(int, int);
	int c;

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (2);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = op_func(a, b);

	printf("%d\n", c);

	return (0);
}
