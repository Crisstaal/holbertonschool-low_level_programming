#include "main.h"
#include <stddef.h>
/**
 * get_bit - returns the value of a bit
 * @index: index starting from 0
 * @n: value
 * Return: the value of the bit at index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (a = 0; a < index; a++)
		n = n >> 1;
	return ((n & 1));
}
