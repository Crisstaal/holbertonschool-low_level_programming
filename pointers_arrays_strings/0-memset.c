#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting address
 * @b: value
 * @n: number of bytes
 *
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
