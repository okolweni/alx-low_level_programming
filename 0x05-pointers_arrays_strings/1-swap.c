#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: the first pointer.
 * @b: the second pointer.
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
