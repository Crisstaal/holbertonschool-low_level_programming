#include "main.h"
#include <stddef.h>
/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer
 * @index: starting from 0 of the bit you want to set
 * Return: integer
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	a = 1;
	a = a << index;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (((*n) >> index & 1) == 1)
		*n = a ^ *n;

	return (1);
}
