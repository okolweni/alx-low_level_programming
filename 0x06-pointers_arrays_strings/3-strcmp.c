#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: less than 0, if s1 < s2,
 * greater than 0, if s1 > s2,
 * equal to 0, if s1 == s2
 */

int _strcmp(char *s1, char *s2)
{
	return(strcmp(s1, s2) < 0);
}
