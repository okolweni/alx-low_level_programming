#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: the arguments.
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int result, i, digits;

	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	result = 0;

	for (i = 1; i < argc; i++)
	{
		digits = atoi(argv[i]);

		if (digits == 0)
		{
			printf("Error\n");

			return (1);
		}
		result += digits;
	}
	printf("%d\n", result);

	return (0);
}
