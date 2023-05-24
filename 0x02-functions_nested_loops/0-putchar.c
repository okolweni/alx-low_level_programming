#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints _putchar, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char string[] = "_putchar";
	int i = 0;

	while (string[i] != '\0')
	{
		putchar(string[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
