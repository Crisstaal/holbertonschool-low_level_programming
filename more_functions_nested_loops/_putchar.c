#include "main.h"
#include <unistd.h>
/**
 * _put char - prints the character c 
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
