#include "main.h"

/**
 * set_string - Entry point
 *
 * Description: function that sets the value of a pointer to a char.
 * @s: pointer to the source
 * @to: pointer to the destination
 *
 * Return: Always 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
