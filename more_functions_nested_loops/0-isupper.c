#include "main.h"

/**
 * main - uppercase letters
 * _isupper - checks if a character is uppercase
 * @c: The character to check
 *
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
