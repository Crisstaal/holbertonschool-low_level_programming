#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory
 * @src: meomry
 * @n: number of bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
