#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all possible different
 * combinations of two digits.
 * Numbers must be separated by a comma
 * The two digits must be different
 * Print only the smallest combination of two digits
 * You can only use putchar five times maximum in your code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, num2;

	for (num = 0; num < 10; num++)
	{
		for (num2 = num + 1; num2 < 10; num2++)
		{
			putchar(num + '0');
			putchar(num2 + '0');

			if (num < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
