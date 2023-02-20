#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign arandom number to the variable n each time it is executed.
 * if the last digit of n > 5 : and is greater than 5
 * if the last digit of n = 0 : and is 0
 * if the last digit of n < 5 : and is less than 6 and not 0
 * Return 0 (Success)
 */

int main(void)
{
	int n, Y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Y = n % 10;

	if (Y > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Y);
	}
	else if (Y == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Y);
	}
	else if (Y < 6 && Y != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Y);
	}
	return (0);

}
