#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argv: the argument
 * @argc: the number of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *result = argv[i];

		for (j = 0; result[j] != '\0'; j++)
		{
			if (!isdigit(result[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(result);
	}
	printf("%d\n", sum);
	return (0);
}
