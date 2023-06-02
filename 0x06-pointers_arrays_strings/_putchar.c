#include <unistd.h>
#include "main.h"

/**
 * _putchar - Entry point
 *
 * Description: program writes the character c to stdout
 * @c: character to be printed
 *
 * Return: 1 (Success), -1 (error)
 */

int _putchar(char c)
{
	return(write(1,&c,1));
}
