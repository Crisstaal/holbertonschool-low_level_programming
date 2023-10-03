#include "main.h"

/**
 * _islower - check if its lowercase
 * @c: the character
 * Return: 1 if lowercase if not 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
