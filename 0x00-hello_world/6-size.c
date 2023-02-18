#include <stdio.h>

/**
 * main - Entry point
 * Discription - prints the size of various types
 * on the computer it is compiled and run on.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int longlongintType;
	char charType;

	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf("Size of char: %zu bytes\n", sizeof(charType));

	return (0);
}
