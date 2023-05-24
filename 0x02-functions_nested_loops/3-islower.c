#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 *
 * Description: function that checks for lowercase character.
 * @c: letter to be checked.
 *
 * Return: 1 if 'c' is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
