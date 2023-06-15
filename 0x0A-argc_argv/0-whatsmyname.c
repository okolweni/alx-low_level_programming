#include <stdio.h>
#include "main.h"

/**
 * main - program that prints its name,
 * followed by a new line.
 * @argc: number of arguments that we get.
 * @argv: an array of string
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
