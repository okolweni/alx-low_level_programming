#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: 1st string
 * @accept: 2nd string
 *
 * Return: number of bytes in the initial segment of 's',
 * which consist only of bytes from 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	int num = strspn(s, accept);

	return (num);
}
