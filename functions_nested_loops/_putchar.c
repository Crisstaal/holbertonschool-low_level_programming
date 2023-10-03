#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the character
 * @c: the character printed
 *
 * Return: if successful 1
 * If errored - 1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
