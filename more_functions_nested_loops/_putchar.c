#include "main.h"
#include <unistd.h>
/**
 * _put char - prints the character c 
 * _isupper - checks if a character is uppercase
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
