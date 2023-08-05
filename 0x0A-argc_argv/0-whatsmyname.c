#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 * @argv: the arguments.
 * @argc: the number of arguments.
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
