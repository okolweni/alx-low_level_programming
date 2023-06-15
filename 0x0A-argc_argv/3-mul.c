#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	int result = x * y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);

	return (0);
}
