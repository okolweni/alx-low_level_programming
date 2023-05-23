#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints all possible different
 * combinations of three digits.
 * Numbers must be separated by a comma
 * The three digits must be different
 * Print only the smallest combination of three digits
 * You can only use putchar six times maximum in your code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, num2, num3;

	for (num = 0; num < 8; num++)
	{
		for (num2 = num + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar(num + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');

				if (num < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
