#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * You can only use the putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums = 0;

	while (nums < 10)
	{
		putchar(nums + '0');
		nums++;
	}
	putchar('\n');

	return (0);
}
