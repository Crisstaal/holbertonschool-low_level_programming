#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer
 * @index: starting from 0 of the bit you want to set
 * Return: 1 if it worked or -1 if an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	a = 1;
	a = a << index;
	*n = ((*n) | a);
	return (1);
}
