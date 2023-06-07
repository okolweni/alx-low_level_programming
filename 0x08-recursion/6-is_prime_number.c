#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - function that checks if the input is a prime number.
 * @n: input number
 *
 * Return: 1 (prime number), otherwise 0
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i <= n - 1; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
