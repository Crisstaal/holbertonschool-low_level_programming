#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: character
 *
 * Return: 1 or else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
