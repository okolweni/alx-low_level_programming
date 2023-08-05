#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argv: the arguments
 * @argc: the number of arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
